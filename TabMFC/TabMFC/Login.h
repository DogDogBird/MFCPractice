#pragma once
#include "afxwin.h"


// CLogin ��ȭ �����Դϴ�.

class CLogin : public CDialogEx
{
	DECLARE_DYNAMIC(CLogin)

public:
	CLogin(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CLogin();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_LOGIN };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	CEdit m_ID;
	CEdit m_Password;
	CString id;
	CString pw;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
};
