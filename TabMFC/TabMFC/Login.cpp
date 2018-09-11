// Login.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "TabMFC.h"
#include "Login.h"
#include "afxdialogex.h"


// CLogin 대화 상자입니다.

IMPLEMENT_DYNAMIC(CLogin, CDialogEx)

CLogin::CLogin(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_LOGIN, pParent)
{

}

CLogin::~CLogin()
{
}

void CLogin::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT_ID, m_ID);
	DDX_Control(pDX, IDC_EDIT_PW, m_Password);
}


BEGIN_MESSAGE_MAP(CLogin, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CLogin::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CLogin::OnBnClickedButton2)
END_MESSAGE_MAP()


// CLogin 메시지 처리기입니다.


void CLogin::OnBnClickedButton1()
{
	UpdateData();
	id = L"";
	pw = L"";
	m_ID.GetWindowTextW(id);
	m_Password.GetWindowTextW(pw);
	if (id == L"kyubin")
	{
		if (pw == L"1234")
		{
			MessageBox(L"Login ok");
			UpdateData(TRUE);
			OnOK();
		}
	}
	else if (id == L"ana")
	{
		if (pw == L"1234")
		{
			UpdateData(TRUE);
			MessageBox(L"Login ok");
			OnOK();
		}
	}
	else
	{
		MessageBox(L"Try again");
		m_ID.Clear();
		m_Password.Clear();
		this->m_ID.SetFocus();
	}
	
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void CLogin::OnBnClickedButton2()
{
	OnClose();
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}
