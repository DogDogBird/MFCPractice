#pragma once
#include "BitmapView.h"
// CMotorDefect 대화 상자입니다.

class CMotorDefect : public CDialogEx
{
	DECLARE_DYNAMIC(CMotorDefect)

public:
	CMotorDefect(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~CMotorDefect();

	CBitmapView m_View;

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MOTORDEFECT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};
