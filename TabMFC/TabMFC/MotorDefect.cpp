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
}


BEGIN_MESSAGE_MAP(CMotorDefect, CDialogEx)
END_MESSAGE_MAP()


// CMotorDefect 메시지 처리기입니다.
