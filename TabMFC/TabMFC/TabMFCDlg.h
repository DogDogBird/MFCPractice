
// TabMFCDlg.h : 헤더 파일
//

#pragma once
#include "afxcmn.h"
#include "Main.h"
#include "GlueGun.h"
#include "MotorDefect.h"
#include "Login.h"
#include "LabelingInspection.h"
#include "Setup.h"
#include "afxwin.h"
#include "Log.h"
//#include <opencv2\opencv.hpp>

// CTabMFCDlg 대화 상자
class CTabMFCDlg : public CDialogEx
{
// 생성입니다.
public:
	CTabMFCDlg(CWnd* pParent = NULL);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TABMFC_DIALOG };
#endif
	CMain m_Main;
	CGlueGun m_GlueGun;
	CMotorDefect m_MotorDefect;
	CLabelingInspection m_LabelingInspection;
	CSetup m_Setup;
	CLog m_Log;
	CWnd* m_pwndShow;

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

public:
	//CTabCtrl m_Tab;
	afx_msg void OnTcnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnBnClickedLoginbutton();//Login 버튼 클릭
	CButton m_LoginButton;
	CButton m_MainButton;
	CButton m_MotorDefectDetectionButton;
	CButton m_GlueGunButton;
	CButton m_LabelingInspectionButton;
	CButton m_SetupButton;
	CButton m_LogButton;
	afx_msg void OnBnClickedButton3();//Main 클릭
	afx_msg void OnBnClickedButton2();//Glue Gun 클릭
	afx_msg void OnBnClickedButton4();//Motor Defect Detection 클릭
	afx_msg void OnBnClickedButton5();//Labeling Inspection 버튼 클릭
	afx_msg void OnBnClickedButton6();//Setup 버튼 클릭
	afx_msg void OnBnClickedButton7();//Log 버튼 클릭
};
