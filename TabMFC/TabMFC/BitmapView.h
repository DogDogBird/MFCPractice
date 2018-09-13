#pragma once
#include "afxwin.h"

#define BITMAPVIEWER_CLASSNAME  _T("MFCBitmapViewCtrl")

class CBitmapView :
	public CWnd
{
public:
	CBitmapView(void);
	~CBitmapView(void);

	BOOL        SetBitmap(UINT nIDResource);

	DECLARE_MESSAGE_MAP()
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnPaint();

protected:
	BOOL        RegisterWindowClass();
	CBitmap     m_Bitmap;

};
