// GlueGun.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "TabMFC.h"
#include "GlueGun.h"
#include "afxdialogex.h"


// CGlueGun 대화 상자입니다.

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


// CGlueGun 메시지 처리기입니다.


void CGlueGun::OnBnClickedButton1()
{
	OnOK();
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}
