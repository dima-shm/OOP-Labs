#include <windows.h>
#include "resource.h"

HINSTANCE hinst;

HWND hEdit;
typedef int(*getMemoryStatus)();

BOOL CALLBACK DlgProc1(HWND hwnd, UINT Message, WPARAM wparam, LPARAM lparam)
{
	switch (Message)
	{
	case WM_INITDIALOG: {
		HINSTANCE hDll = LoadLibrary(L"Project2-MyDLL.dll");
		getMemoryStatus result = (getMemoryStatus)GetProcAddress(hDll, "?getMemoryStatus@@YAHXZ");
		hEdit = GetDlgItem(hwnd, IDC_EDIT1);
		wchar_t buffer[20];
		wsprintfW(buffer, L"%d", result());
		SendMessage(hEdit, WM_SETTEXT, 0, (LPARAM)buffer);
		SetFocus(hEdit);
		FreeLibrary(hDll);
	} break;
	case WM_COMMAND: {
		switch (LOWORD(wparam))
		{
		case IDOK:
		{
			EndDialog(hwnd, 0);
		}break;
		case IDCANCEL:
		{
			EndDialog(hwnd, 0);
		}break;
		}
	} break;
	case WM_CLOSE: {
		EndDialog(hwnd, 0);
		return FALSE;
	} break;
	}
	return FALSE;
}

LRESULT CALLBACK WndProc(HWND hwnd,
	UINT Message, // ��� ���������� ���������
	WPARAM wparam,
	LPARAM lparam)
{
	switch (Message)
	{
	case WM_DESTROY: {
		PostQuitMessage(0); // ������ � ������� WM_QUIT
	} break;
	case WM_CHAR:
	{

	} break;
	case WM_LBUTTONDOWN: {
		DialogBoxParam(hinst, MAKEINTRESOURCE(IDD_DIALOG1), 0, (DlgProc1), 0);
	} break;
	case WM_RBUTTONDOWN: {
		//DialogBoxParam(hinst, MAKEINTRESOURCE(102), 0, (DlgProc2), 0);
	} break;
	case WM_CLOSE: {
		SendMessage(hwnd, WM_DESTROY, NULL, NULL); // �������� ��������� ���� hwnd � ����� ��������� WM_DESTROY
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

	hWnd = CreateWindow(L"WindowClassMain", L"Lab-13", WS_OVERLAPPEDWINDOW, 10, 10, 600, 600,
		NULL/*���������� ������������� ����*/, NULL/*���������� ����*/, hInstance, NULL/*��������� �� ������ �������� ����*/);

	ShowWindow(hWnd, nCmdShow); // �������� ����
	UpdateWindow(hWnd);

	while (GetMessage(&msg, NULL, 0, 0)) // ���� ��������� ���������
	{
		TranslateMessage(&msg); // ������� ���������� ����� ������� �������
		DispatchMessage(&msg);  // �������� ��������� ������� ���� WndProc()
	}

	return msg.wParam;
}