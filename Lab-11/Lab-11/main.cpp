#include <windows.h> 
#include <ctime> 

int dx = 50;
int dy = 50;
int num = 0;
wchar_t numString[64];

HINSTANCE hinst;
HWND massOfWindows[5];

LRESULT CALLBACK ChildProc(HWND hwnd,
	UINT Message,
	WPARAM wparam,
	LPARAM lparam)
{
	switch (Message)
	{
		case WM_DESTROY: {
			return 0;
		} break;

		case WM_CHAR: {
			DestroyWindow(hwnd);
		} break;
		default: {
			return DefWindowProc(hwnd, Message, wparam, lparam);
		}
	}
	return 0;
}

LRESULT CALLBACK WndProc(HWND hwnd,
	UINT Message, // код пришедшего сообщения
	WPARAM wparam,
	LPARAM lparam)
{
	WNDCLASS wcChild; //класс окна

	memset(&wcChild, 0, sizeof(WNDCLASS));

	wcChild.style = CS_HREDRAW | CS_VREDRAW;
	wcChild.lpfnWndProc = ChildProc;
	wcChild.hInstance = hinst;
	wcChild.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
	wcChild.lpszClassName = L"WindowClassChild";

	RegisterClass(&wcChild);

	switch (Message)
	{
		case WM_DESTROY: {
			PostQuitMessage(0); // ставит в очередь WM_QUIT
		} break;

		case WM_CHAR:
		{
			if (num > 0)
			{
				DestroyWindow(massOfWindows[num - 1]);

				num--;
				dx -= 50;
				dy -= 50;
			}
		} break;

		case WM_LBUTTONDOWN: {
			if (num < 5)
			{
				wsprintfW(numString, L"%d", num + 1);
				massOfWindows[num] = CreateWindowEx(0, L"WindowClassChild", numString, WS_CHILD | WS_CAPTION | WS_CLIPSIBLINGS,
					dx, dy, 200, 200, hwnd, NULL, hinst, NULL);
				srand(time(0));
				SetClassLongPtr(massOfWindows[num], GCLP_HBRBACKGROUND, 
					(LONG)CreateSolidBrush(RGB(0 + rand() % 255, 0 + rand() % 255, 0 + rand() % 255)));
				ShowWindow(massOfWindows[num], SW_NORMAL);

				BringWindowToTop(massOfWindows[num]);

				dx += 50;
				dy += 50;
				num++;
			}
			else
			{
				MessageBox(hwnd, L"Максимум 5 окон", L"ВНИМАНИЕ", MB_OKCANCEL | MB_ICONWARNING);
			}

		} break;

		case WM_RBUTTONDOWN: {
			MoveWindow(hwnd, 10, 10, 700, 700, FALSE); // изменяет позицию и габариты окна
		} break;

		case WM_CLOSE: {
			if (IDOK == MessageBox(hwnd, L"Выйти из приложения?", L"Выход", MB_OKCANCEL | MB_ICONQUESTION | MB_DEFBUTTON1))
			{
				SendMessage(hwnd, WM_DESTROY, NULL, NULL); // посылает сообщение окну hwnd с кодом сообщения WM_DESTROY
			}
		} break;
		default: {
			return DefWindowProc(hwnd, Message, wparam, lparam);
		}
	}
	return 0;
}

int WINAPI WinMain(HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpszCmdLine,
	int nCmdShow)
{
	HWND hWnd; // создаём дискриптор окна
	MSG msg;
	WNDCLASS wcMain;

	memset(&wcMain, 0, sizeof(WNDCLASS));

	wcMain.style = CS_HREDRAW | CS_VREDRAW | CS_DBLCLKS; // стиль класса окна
	wcMain.lpfnWndProc = WndProc; // указатель на функцию окна
	wcMain.hInstance = hInstance; // дескриптор экземпляра приложения
	wcMain.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH); // дескриптор кисти для закраски фона
	wcMain.lpszClassName = L"WindowClassMain"; // указатель на строку с именем класса окна

	RegisterClass(&wcMain);

	hWnd = CreateWindow(L"WindowClassMain", L"Lab-11", WS_OVERLAPPEDWINDOW, 10, 10, 600, 600, 
		NULL/*дескриптор родительского окна*/, NULL/*дескриптор меню*/, hInstance, NULL/*указатель на данные создания окна*/);

	ShowWindow(hWnd, nCmdShow); // показать окно

	while (GetMessage(&msg, NULL, 0, 0)) // цикл обработки сообщений
	{
		TranslateMessage(&msg); // функция трансляции кодов нажатой клавиши
		DispatchMessage(&msg);  // посылает сообщение функции окна WndProc()
	}

	return msg.wParam;
}