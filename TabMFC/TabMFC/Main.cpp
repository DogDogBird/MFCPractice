// Main.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "TabMFC.h"
#include "Main.h"
#include "afxdialogex.h"


// CMain ��ȭ �����Դϴ�.

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


// CMain �޽��� ó�����Դϴ�.
