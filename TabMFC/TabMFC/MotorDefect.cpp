// MotorDefect.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "TabMFC.h"
#include "MotorDefect.h"
#include "afxdialogex.h"


// CMotorDefect ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(CMotorDefect, CDialogEx)

CMotorDefect::CMotorDefect(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_MOTORDEFECT, pParent)
{

}

CMotorDefect::~CMotorDefect()
{
}

void CMotorDefect::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_CUSTOM1, m_View);
}


BEGIN_MESSAGE_MAP(CMotorDefect, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CMotorDefect::OnBnClickedButton1)
END_MESSAGE_MAP()


// CMotorDefect �޽��� ó�����Դϴ�.


void CMotorDefect::OnBnClickedButton1()
{
	m_View.SetBitmap(IDB_BITMAP1);
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
}
