#include "StdAfx.h"
#include "BitmapView.h"



CBitmapView::CBitmapView(void)
{
	RegisterWindowClass();
}

CBitmapView::~CBitmapView(void)
{
}

BOOL    CBitmapView::RegisterWindowClass()
{
	WNDCLASS    wndcls;
	HINSTANCE   hInst = AfxGetInstanceHandle();

	if (!(::GetClassInfo(hInst, BITMAPVIEWER_CLASSNAME, &wndcls)))
	{
		wndcls.style = CS_DBLCLKS | CS_HREDRAW | CS_VREDRAW;
		wndcls.lpfnWndProc = ::DefWindowProc;
		wndcls.cbClsExtra = wndcls.cbWndExtra = 0;
		wndcls.hInstance = hInst;
		wndcls.hIcon = NULL;
		wndcls.hCursor = AfxGetApp()->LoadStandardCursor(IDC_ARROW);
		wndcls.hbrBackground = (HBRUSH)(COLOR_3DFACE + 1);
		wndcls.lpszMenuName = NULL;
		wndcls.lpszClassName = BITMAPVIEWER_CLASSNAME;

		if (!AfxRegisterClass(&wndcls))
		{
			AfxThrowResourceException();
			return FALSE;
		}
	}
	return TRUE;
}

BEGIN_MESSAGE_MAP(CBitmapView, CWnd)
	ON_WM_ERASEBKGND()
	ON_WM_PAINT()
END_MESSAGE_MAP()

BOOL CBitmapView::OnEraseBkgnd(CDC* pDC)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	if (m_Bitmap.GetSafeHandle() != NULL)
		return TRUE;


	return CWnd::OnEraseBkgnd(pDC);
}

void CBitmapView::OnPaint()
{
	if (m_Bitmap.GetSafeHandle() != NULL)
	{
		CPaintDC dc(this);

		CDC MemDC;
		if (!MemDC.CreateCompatibleDC(&dc))
			return;

		CRect rt;
		GetClientRect(rt);

		BITMAP  bm;
		m_Bitmap.GetBitmap(&bm);

		CBitmap*    pOldBitmap = (CBitmap*)MemDC.SelectObject(&m_Bitmap);
		dc.StretchBlt(0, 0, rt.Width(), rt.Height(), &MemDC,
			0, 0, bm.bmWidth, bm.bmHeight, SRCCOPY);
		MemDC.SelectObject(pOldBitmap);
	}

}


BOOL    CBitmapView::SetBitmap(UINT nIDResource)
{
	return m_Bitmap.LoadBitmap(nIDResource);
}