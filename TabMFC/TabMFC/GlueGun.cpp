// GlueGun.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "TabMFC.h"
#include "GlueGun.h"
#include "afxdialogex.h"


// CGlueGun ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(CGlueGun, CDialogEx)

CGlueGun::CGlueGun(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_GLUEGUN, pParent)
{

}

CGlueGun::~CGlueGun()
{
}

void CGlueGun::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CGlueGun, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CGlueGun::OnBnClickedButton1)
END_MESSAGE_MAP()


// CGlueGun �޽��� ó�����Դϴ�.


void CGlueGun::OnBnClickedButton1()
{
	OnOK();
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
}
