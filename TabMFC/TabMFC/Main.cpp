// Main.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "TabMFC.h"
#include "Main.h"
#include "afxdialogex.h"


// CMain 대화 상자입니다.

IMPLEMENT_DYNAMIC(CMain, CDialogEx)

CMain::CMain(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_Main, pParent)
{

}

CMain::~CMain()
{
}

void CMain::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CMain, CDialogEx)
END_MESSAGE_MAP()


// CMain 메시지 처리기입니다.
