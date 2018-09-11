// LabelingInspection.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "TabMFC.h"
#include "LabelingInspection.h"
#include "afxdialogex.h"


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
}


BEGIN_MESSAGE_MAP(CLabelingInspection, CDialogEx)
END_MESSAGE_MAP()


// CLabelingInspection 메시지 처리기입니다.
