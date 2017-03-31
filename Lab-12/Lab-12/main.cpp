#define _CRT_SECURE_NO_WARNINGS
#include <afxwin.h>

class CMainWnd : public CFrameWnd
{
private:
	char str[50];
	int leftMouseButton;
	int rec1_x1, rec1_y1, rec1_x2, rec1_y2;
	int rec2_x1, rec2_y1, rec2_x2, rec2_y2;

public:
	CMainWnd()
	{
		Create(NULL, L"Lab-12", WS_OVERLAPPEDWINDOW, CRect(10, 10, 600, 600), NULL, NULL); // Создание окна программы
		strcpy(str, "");
		leftMouseButton = 0;
		rec1_x1 = rec1_y1 = 0;
		rec1_x2 = rec1_y2 = 50;
		rec2_x1 = rec2_y1 = 0;
		rec2_x2 = rec2_y2 = 50;
	}

	afx_msg void OnLButtonDown(UINT flags, CPoint Loc);
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);

	DECLARE_MESSAGE_MAP()
};

BEGIN_MESSAGE_MAP(CMainWnd/*класс*/, CFrameWnd/*базовый класс*/) // Таблица откликов на сообщения
	ON_WM_LBUTTONDOWN()
	ON_WM_KEYDOWN()
END_MESSAGE_MAP()

void CMainWnd::OnLButtonDown(UINT flags, CPoint Loc)
{
	this->InvalidateRect(0);
	strcpy(str, "Какой-то текст");
	CPaintDC dc(this);
	CFont font;
	if (leftMouseButton == 1)
		font.CreateFont(12, 0, 0, 0, FW_NORMAL, FALSE, FALSE, FALSE, ANSI_CHARSET,
		OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, DEFAULT_QUALITY, DEFAULT_PITCH | FF_SWISS, _T("Arial"));
	if (leftMouseButton == 2)
		font.CreateFont(20, 0, 0, 0, FW_NORMAL, FALSE, FALSE, TRUE, ANSI_CHARSET,
		OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, DEFAULT_QUALITY, DEFAULT_PITCH | FF_SWISS, _T("Arial"));
	if (leftMouseButton == 3)
		font.CreateFont(20, 0, 0, 0, FW_NORMAL, TRUE, FALSE, FALSE, ANSI_CHARSET,
		OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, DEFAULT_QUALITY, DEFAULT_PITCH | FF_SWISS, _T("Arial"));
	if (leftMouseButton == 4)
		font.CreateFont(20, 0, 0, 0, FW_NORMAL, TRUE, TRUE, FALSE, ANSI_CHARSET,
		OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, DEFAULT_QUALITY, DEFAULT_PITCH | FF_SWISS, _T("Arial"));
	if (leftMouseButton == 5)
		font.CreateFont(20, 0, 0, 0, FW_NORMAL, TRUE, TRUE, FALSE, ANSI_CHARSET,
		OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, DEFAULT_QUALITY, DEFAULT_PITCH | FF_SWISS, _T("Calibri"));
	if (leftMouseButton == 6)
		font.CreateFont(12, 10, 0, 0, FW_NORMAL, TRUE, TRUE, FALSE, ANSI_CHARSET,
		OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, DEFAULT_QUALITY, DEFAULT_PITCH | FF_SWISS, _T("Calibri"));
	if (leftMouseButton == 7)
		font.CreateFont(12, 10, 900, 0, FW_NORMAL, TRUE, TRUE, FALSE, ANSI_CHARSET,
		OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, DEFAULT_QUALITY, DEFAULT_PITCH | FF_SWISS, _T("Calibri"));
	if (leftMouseButton == 8)
	{
		font.CreateFont(12, 10, 1800, 0, FW_NORMAL, FALSE, FALSE, TRUE, ANSI_CHARSET,
			OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, DEFAULT_QUALITY, DEFAULT_PITCH, _T("Calibri"));
		leftMouseButton = 0;
	}
	leftMouseButton++;
	dc.SelectObject(font);
	dc.TextOut(250, 250, str);

}
void CMainWnd::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	this->InvalidateRect(0);
	CPaintDC pDC(this);
	CBrush* br = new CBrush(RGB(0, 0, 240));
	pDC.SelectObject(br);
	pDC.Rectangle(rec1_x1, rec1_y1, rec1_x2, rec1_y2);
	pDC.Rectangle(rec2_x1, rec2_y1, rec2_x2, rec2_y2);
	rec1_x1 += 50;
	rec1_x2 += 50;
	rec2_y1 += 50;
	rec2_y2 += 50;
}

class CMyApp : public CWinApp
{
public:
	virtual BOOL InitInstance() // Стандартная инициализация
	{
		m_pMainWnd = new CMainWnd(); // Создать класс окна
		ASSERT(m_pMainWnd); // Проверка его правильности
		m_pMainWnd->ShowWindow(m_nCmdShow); // Показать окно
		m_pMainWnd->UpdateWindow(); // Обновить окно
		return TRUE;
	}
};

CMyApp theApp;