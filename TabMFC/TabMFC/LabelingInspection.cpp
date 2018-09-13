// LabelingInspection.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "TabMFC.h"
#include "LabelingInspection.h"
#include "afxdialogex.h"
#include "opencv2\opencv.hpp"

// CLabelingInspection 대화 상자입니다.

IMPLEMENT_DYNAMIC(CLabelingInspection, CDialogEx)

CLabelingInspection::CLabelingInspection(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_LABELINGINSPECTION, pParent)
{

}

CLabelingInspection::~CLabelingInspection()
{
}

void CLabelingInspection::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LABELIMAGE, m_LabelImage);
}


BEGIN_MESSAGE_MAP(CLabelingInspection, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CLabelingInspection::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CLabelingInspection::OnBnClickedButton2)
END_MESSAGE_MAP()


// CLabelingInspection 메시지 처리기입니다.

//Live Button
void CLabelingInspection::OnBnClickedButton1()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}

//Load Image from file browser
void CLabelingInspection::OnBnClickedButton2()
{
	CString szFilter = L"Image (*.BMP, *.GIF, *.JPG) | *.BMP;*.GIF;*.JPG | All Files(*.*)|*.*||";
	CFileDialog dlg(true, NULL, NULL, OFN_ALLOWMULTISELECT, szFilter,NULL);
	if (dlg.DoModal() == IDOK)
	{
		CString strPathName = dlg.GetPathName();
		
	}
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}
