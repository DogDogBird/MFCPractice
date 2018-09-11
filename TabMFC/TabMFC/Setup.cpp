// Setup.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "TabMFC.h"
#include "Setup.h"
#include "afxdialogex.h"


// CSetup 대화 상자입니다.

IMPLEMENT_DYNAMIC(CSetup, CDialogEx)

CSetup::CSetup(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_SETUP, pParent)
{

}

CSetup::~CSetup()
{
}

void CSetup::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CSetup, CDialogEx)
END_MESSAGE_MAP()


// CSetup 메시지 처리기입니다.
