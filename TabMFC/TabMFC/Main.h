#pragma once


// CMain 대화 상자입니다.

class CMain : public CDialogEx
{
	DECLARE_DYNAMIC(CMain)

public:
	CMain(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~CMain();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Main };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
};
