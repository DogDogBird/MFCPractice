// Log.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "TabMFC.h"
#include "Log.h"
#include "afxdialogex.h"


// CLog 대화 상자입니다.

IMPLEMENT_DYNAMIC(CLog, CDialogEx)

CLog::CLog(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_LOG, pParent)
{

}

CLog::~CLog()
{
}

void CLog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CLog, CDialogEx)
END_MESSAGE_MAP()


// CLog 메시지 처리기입니다.
