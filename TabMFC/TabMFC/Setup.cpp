// Setup.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "TabMFC.h"
#include "Setup.h"
#include "afxdialogex.h"


// CSetup ��ȭ �����Դϴ�.

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


// CSetup �޽��� ó�����Դϴ�.
