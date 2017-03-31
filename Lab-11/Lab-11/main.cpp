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
	UINT Message, // ��� ���������� ���������
	WPARAM wparam,
	LPARAM lparam)
{
	WNDCLASS wcChild; //����� ����

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
			PostQuitMessage(0); // ������ � ������� WM_QUIT
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
				MessageBox(hwnd, L"�������� 5 ����", L"��������", MB_OKCANCEL | MB_ICONWARNING);
			}

		} break;

		case WM_RBUTTONDOWN: {
			MoveWindow(hwnd, 10, 10, 700, 700, FALSE); // �������� ������� � �������� ����
		} break;

		case WM_CLOSE: {
			if (IDOK == MessageBox(hwnd, L"����� �� ����������?", L"�����", MB_OKCANCEL | MB_ICONQUESTION | MB_DEFBUTTON1))
			{
				SendMessage(hwnd, WM_DESTROY, NULL, NULL); // �������� ��������� ���� hwnd � ����� ��������� WM_DESTROY
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
	HWND hWnd; // ������ ���������� ����
	MSG msg;
	WNDCLASS wcMain;

	memset(&wcMain, 0, sizeof(WNDCLASS));

	wcMain.style = CS_HREDRAW | CS_VREDRAW | CS_DBLCLKS; // ����� ������ ����
	wcMain.lpfnWndProc = WndProc; // ��������� �� ������� ����
	wcMain.hInstance = hInstance; // ���������� ���������� ����������
	wcMain.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH); // ���������� ����� ��� �������� ����
	wcMain.lpszClassName = L"WindowClassMain"; // ��������� �� ������ � ������ ������ ����

	RegisterClass(&wcMain);

	hWnd = CreateWindow(L"WindowClassMain", L"Lab-11", WS_OVERLAPPEDWINDOW, 10, 10, 600, 600, 
		NULL/*���������� ������������� ����*/, NULL/*���������� ����*/, hInstance, NULL/*��������� �� ������ �������� ����*/);

	ShowWindow(hWnd, nCmdShow); // �������� ����

	while (GetMessage(&msg, NULL, 0, 0)) // ���� ��������� ���������
	{
		TranslateMessage(&msg); // ������� ���������� ����� ������� �������
		DispatchMessage(&msg);  // �������� ��������� ������� ���� WndProc()
	}

	return msg.wParam;
}