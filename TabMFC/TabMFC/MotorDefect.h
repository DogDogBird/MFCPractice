#pragma once
#include "BitmapView.h"
// CMotorDefect ��ȭ �����Դϴ�.

class CMotorDefect : public CDialogEx
{
	DECLARE_DYNAMIC(CMotorDefect)

public:
	CMotorDefect(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CMotorDefect();

	CBitmapView m_View;

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MOTORDEFECT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};
