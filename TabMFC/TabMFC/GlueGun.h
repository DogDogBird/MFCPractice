#pragma once


// CGlueGun ��ȭ �����Դϴ�.

class CGlueGun : public CDialogEx
{
	DECLARE_DYNAMIC(CGlueGun)

public:
	CGlueGun(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CGlueGun();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_GLUEGUN };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};
