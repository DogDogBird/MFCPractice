
// TabMFCDlg.cpp : ���� ����
//

#include "stdafx.h"
#include "TabMFC.h"
#include "TabMFCDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ���� ���α׷� ������ ���Ǵ� CAboutDlg ��ȭ �����Դϴ�.

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

// �����Դϴ�.
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CTabMFCDlg ��ȭ ����



CTabMFCDlg::CTabMFCDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_TABMFC_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	m_pwndShow = NULL;
}

void CTabMFCDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	//DDX_Control(pDX, IDC_TAB1, m_Tab);
	DDX_Control(pDX, IDC_LOGINBUTTON, m_LoginButton);
	DDX_Control(pDX, IDC_BUTTON3, m_MainButton);
	DDX_Control(pDX, IDC_BUTTON4, m_MotorDefectDetectionButton);
	DDX_Control(pDX, IDC_BUTTON2, m_GlueGunButton);
	DDX_Control(pDX, IDC_BUTTON5, m_LabelingInspectionButton);
	DDX_Control(pDX, IDC_BUTTON6, m_SetupButton);
	DDX_Control(pDX, IDC_BUTTON7, m_LogButton);
}

BEGIN_MESSAGE_MAP(CTabMFCDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_NOTIFY(TCN_SELCHANGE, IDC_TAB1, &CTabMFCDlg::OnTcnSelchangeTab1)
	ON_BN_CLICKED(IDC_LOGINBUTTON, &CTabMFCDlg::OnBnClickedLoginbutton)
	ON_BN_CLICKED(IDC_BUTTON3, &CTabMFCDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON2, &CTabMFCDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON4, &CTabMFCDlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CTabMFCDlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CTabMFCDlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &CTabMFCDlg::OnBnClickedButton7)
END_MESSAGE_MAP()


// CTabMFCDlg �޽��� ó����

BOOL CTabMFCDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// �ý��� �޴��� "����..." �޴� �׸��� �߰��մϴ�.

	// IDM_ABOUTBOX�� �ý��� ��� ������ �־�� �մϴ�.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// �� ��ȭ ������ �������� �����մϴ�.  ���� ���α׷��� �� â�� ��ȭ ���ڰ� �ƴ� ��쿡��
	//  �����ӿ�ũ�� �� �۾��� �ڵ����� �����մϴ�.
	SetIcon(m_hIcon, TRUE);			// ū �������� �����մϴ�.
	SetIcon(m_hIcon, FALSE);		// ���� �������� �����մϴ�.

	VERIFY(m_Main.Create(IDD_Main, this));

	VERIFY(m_MotorDefect.Create(IDD_MOTORDEFECT, this));
	VERIFY(m_GlueGun.Create(IDD_GLUEGUN, this));
	VERIFY(m_LabelingInspection.Create(IDD_LABELINGINSPECTION, this));
	VERIFY(m_Log.Create(IDD_LOG, this));
	VERIFY(m_Setup.Create(IDD_SETUP, this));
	
	::SetParent(m_Main.GetSafeHwnd(), this->m_hWnd);
	::SetParent(m_MotorDefect.GetSafeHwnd(), this->m_hWnd);
	::SetParent(m_GlueGun.GetSafeHwnd(), this->m_hWnd);
	::SetParent(m_LabelingInspection.GetSafeHwnd(), this->m_hWnd);
	::SetParent(m_Log.GetSafeHwnd(), this->m_hWnd);
	::SetParent(m_Setup.GetSafeHwnd(), this->m_hWnd);

	SetWindowPos(NULL, 0, 0, 1200, 700, SWP_NOZORDER | SWP_NOACTIVATE);
	//child window position ����
	m_Main.SetWindowPos(NULL, 100, 80, 1000, 500, SWP_NOZORDER | SWP_NOACTIVATE);
	m_MotorDefect.SetWindowPos(NULL, 100, 80, 1000, 500, SWP_NOZORDER | SWP_NOACTIVATE);
	m_GlueGun.SetWindowPos(NULL, 100, 80, 1000, 500, SWP_NOZORDER | SWP_NOACTIVATE);
	m_LabelingInspection.SetWindowPos(NULL, 100, 80, 1000, 500, SWP_NOZORDER | SWP_NOACTIVATE);
	m_Log.SetWindowPos(NULL, 100, 80, 1000, 500, SWP_NOZORDER | SWP_NOACTIVATE);
	m_Setup.SetWindowPos(NULL, 100, 80, 1000, 500, SWP_NOZORDER | SWP_NOACTIVATE);

	m_Main.ShowWindow(SW_SHOW);
	/*
	CString strOne = _T("Main");
	CString strTwo = _T("Motor\nDefect\nDetection");
	CString strThree = _T("Glue Gun");
	CString strFour = _T("Labeling\nInspection");
	CString strFive = _T("Setup");
	CString strSix = _T("Log");

	m_Tab.InsertItem(1, strOne);
	m_Tab.InsertItem(2, strTwo);
	m_Tab.InsertItem(3, strThree);
	m_Tab.InsertItem(4, strFour);
	m_Tab.InsertItem(5, strFive);
	m_Tab.InsertItem(6, strSix);
	// TODO: ���⿡ �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
	CRect Rect;
	m_Tab.GetClientRect(&Rect);
	
	m_First.Create(IDD_First, &m_Tab);
	m_First.SetWindowPos(NULL, 5, 25, Rect.Width() - 12, Rect.Height() - 33, SWP_SHOWWINDOW | SWP_NOZORDER);
	m_pwndShow = &m_First;

	m_Second.Create(IDD_Second, &m_Tab);
	m_Second.SetWindowPos(NULL, 5, 25, Rect.Width() - 12, Rect.Height() - 33, SWP_NOZORDER);

	m_Third.Create(IDD_Third, &m_Tab);
	m_Third.SetWindowPos(NULL, 5, 25, Rect.Width() - 12, Rect.Height() - 33, SWP_NOZORDER);
	*/
	return TRUE;  // ��Ŀ���� ��Ʈ�ѿ� �������� ������ TRUE�� ��ȯ�մϴ�.
}

void CTabMFCDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// ��ȭ ���ڿ� �ּ�ȭ ���߸� �߰��� ��� �������� �׸�����
//  �Ʒ� �ڵ尡 �ʿ��մϴ�.  ����/�� ���� ����ϴ� MFC ���� ���α׷��� ��쿡��
//  �����ӿ�ũ���� �� �۾��� �ڵ����� �����մϴ�.

void CTabMFCDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // �׸��⸦ ���� ����̽� ���ؽ�Ʈ�Դϴ�.

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Ŭ���̾�Ʈ �簢������ �������� ����� ����ϴ�.
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// �������� �׸��ϴ�.
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// ����ڰ� �ּ�ȭ�� â�� ���� ���ȿ� Ŀ���� ǥ�õǵ��� �ý��ۿ���
//  �� �Լ��� ȣ���մϴ�.
HCURSOR CTabMFCDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CTabMFCDlg::OnTcnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult)
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	if (m_pwndShow != NULL)
	{
		m_pwndShow->ShowWindow(SW_HIDE);
		m_pwndShow = NULL;
	}

	/*
	int nIndex = m_Tab.GetCurSel();
	switch (nIndex)
	{
	case 0:
		m_First.ShowWindow(SW_SHOW);
		m_pwndShow = &m_First;
		break;
	case 1:
		m_Second.ShowWindow(SW_SHOW);
		m_pwndShow = &m_Second;
		break;
	case 2:
		m_Third.ShowWindow(SW_SHOW);
		m_pwndShow = &m_Third;
		break;
	}
	*/
	*pResult = 0;
}

//Login Ŭ��
void CTabMFCDlg::OnBnClickedLoginbutton()
{
	CLogin login;
	CString tempID;
	
	if (login.DoModal() == IDOK)
	{
		UpdateData(FALSE);
		tempID = login.id;
		if (tempID == L"kyubin")
		{
			m_LoginButton.SetWindowTextW(L"Administrator");
		}
		else if (tempID == L"ana")
		{
			m_LoginButton.SetWindowTextW(L"ana");
		}
	}
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
}

//Main Ŭ��
void CTabMFCDlg::OnBnClickedButton3()
{
	m_Main.ShowWindow(SW_SHOW);
	m_MotorDefect.ShowWindow(SW_HIDE);
	m_GlueGun.ShowWindow(SW_HIDE);
	m_LabelingInspection.ShowWindow(SW_HIDE);
	m_Setup.ShowWindow(SW_HIDE);
	m_Log.ShowWindow(SW_HIDE);
	
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
}

//Glue Gun Ŭ��
void CTabMFCDlg::OnBnClickedButton2()
{
	m_Main.ShowWindow(SW_HIDE);
	m_MotorDefect.ShowWindow(SW_HIDE);
	m_GlueGun.ShowWindow(SW_SHOW);
	m_LabelingInspection.ShowWindow(SW_HIDE);
	m_Setup.ShowWindow(SW_HIDE);
	m_Log.ShowWindow(SW_HIDE);
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
}

//Motor Defect Detection Ŭ��
void CTabMFCDlg::OnBnClickedButton4()
{
	m_Main.ShowWindow(SW_HIDE);
	m_MotorDefect.ShowWindow(SW_SHOW);
	m_GlueGun.ShowWindow(SW_HIDE);
	m_LabelingInspection.ShowWindow(SW_HIDE);
	m_Setup.ShowWindow(SW_HIDE);
	m_Log.ShowWindow(SW_HIDE);
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
}

//Labeling Inspection ��ư Ŭ��
void CTabMFCDlg::OnBnClickedButton5()
{
	m_Main.ShowWindow(SW_HIDE);
	m_MotorDefect.ShowWindow(SW_HIDE);
	m_GlueGun.ShowWindow(SW_HIDE);
	m_LabelingInspection.ShowWindow(SW_SHOW);
	m_Setup.ShowWindow(SW_HIDE);
	m_Log.ShowWindow(SW_HIDE);
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
}

//Setup ��ư Ŭ��
void CTabMFCDlg::OnBnClickedButton6()
{
	m_Main.ShowWindow(SW_HIDE);
	m_MotorDefect.ShowWindow(SW_HIDE);
	m_GlueGun.ShowWindow(SW_HIDE);
	m_LabelingInspection.ShowWindow(SW_HIDE);
	m_Setup.ShowWindow(SW_SHOW);
	m_Log.ShowWindow(SW_HIDE);
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
}

//Log ��ư Ŭ��
void CTabMFCDlg::OnBnClickedButton7()
{
	m_Main.ShowWindow(SW_HIDE);
	m_MotorDefect.ShowWindow(SW_HIDE);
	m_GlueGun.ShowWindow(SW_HIDE);
	m_LabelingInspection.ShowWindow(SW_HIDE);
	m_Setup.ShowWindow(SW_HIDE);
	m_Log.ShowWindow(SW_SHOW);
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
}
