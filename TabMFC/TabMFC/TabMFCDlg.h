
// TabMFCDlg.h : ��� ����
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

// CTabMFCDlg ��ȭ ����
class CTabMFCDlg : public CDialogEx
{
// �����Դϴ�.
public:
	CTabMFCDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
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
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �����Դϴ�.


// �����Դϴ�.
protected:
	HICON m_hIcon;

	// ������ �޽��� �� �Լ�
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

public:
	//CTabCtrl m_Tab;
	afx_msg void OnTcnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnBnClickedLoginbutton();//Login ��ư Ŭ��
	CButton m_LoginButton;
	CButton m_MainButton;
	CButton m_MotorDefectDetectionButton;
	CButton m_GlueGunButton;
	CButton m_LabelingInspectionButton;
	CButton m_SetupButton;
	CButton m_LogButton;
	afx_msg void OnBnClickedButton3();//Main Ŭ��
	afx_msg void OnBnClickedButton2();//Glue Gun Ŭ��
	afx_msg void OnBnClickedButton4();//Motor Defect Detection Ŭ��
	afx_msg void OnBnClickedButton5();//Labeling Inspection ��ư Ŭ��
	afx_msg void OnBnClickedButton6();//Setup ��ư Ŭ��
	afx_msg void OnBnClickedButton7();//Log ��ư Ŭ��
};
