// Log.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "TabMFC.h"
#include "Log.h"
#include "afxdialogex.h"


// CLog ��ȭ �����Դϴ�.

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


// CLog �޽��� ó�����Դϴ�.
