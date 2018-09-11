#pragma once


// CGlueGun 대화 상자입니다.

class CGlueGun : public CDialogEx
{
	DECLARE_DYNAMIC(CGlueGun)

public:
	CGlueGun(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~CGlueGun();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_GLUEGUN };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};
