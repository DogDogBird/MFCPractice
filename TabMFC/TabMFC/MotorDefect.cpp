// MotorDefect.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "TabMFC.h"
#include "MotorDefect.h"
#include "afxdialogex.h"


// CMotorDefect 대화 상자입니다.

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


// CMotorDefect 메시지 처리기입니다.


void CMotorDefect::OnBnClickedButton1()
{
	m_View.SetBitmap(IDB_BITMAP1);
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}
