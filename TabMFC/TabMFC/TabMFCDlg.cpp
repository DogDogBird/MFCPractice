
// TabMFCDlg.cpp : 구현 파일
//

#include "stdafx.h"
#include "TabMFC.h"
#include "TabMFCDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 응용 프로그램 정보에 사용되는 CAboutDlg 대화 상자입니다.

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

// 구현입니다.
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


// CTabMFCDlg 대화 상자



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


// CTabMFCDlg 메시지 처리기

BOOL CTabMFCDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 시스템 메뉴에 "정보..." 메뉴 항목을 추가합니다.

	// IDM_ABOUTBOX는 시스템 명령 범위에 있어야 합니다.
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

	// 이 대화 상자의 아이콘을 설정합니다.  응용 프로그램의 주 창이 대화 상자가 아닐 경우에는
	//  프레임워크가 이 작업을 자동으로 수행합니다.
	SetIcon(m_hIcon, TRUE);			// 큰 아이콘을 설정합니다.
	SetIcon(m_hIcon, FALSE);		// 작은 아이콘을 설정합니다.

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
	//child window position 설정
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
	// TODO: 여기에 추가 초기화 작업을 추가합니다.
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
	return TRUE;  // 포커스를 컨트롤에 설정하지 않으면 TRUE를 반환합니다.
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

// 대화 상자에 최소화 단추를 추가할 경우 아이콘을 그리려면
//  아래 코드가 필요합니다.  문서/뷰 모델을 사용하는 MFC 응용 프로그램의 경우에는
//  프레임워크에서 이 작업을 자동으로 수행합니다.

void CTabMFCDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 그리기를 위한 디바이스 컨텍스트입니다.

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 클라이언트 사각형에서 아이콘을 가운데에 맞춥니다.
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 아이콘을 그립니다.
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// 사용자가 최소화된 창을 끄는 동안에 커서가 표시되도록 시스템에서
//  이 함수를 호출합니다.
HCURSOR CTabMFCDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CTabMFCDlg::OnTcnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult)
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
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

//Login 클릭
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
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}

//Main 클릭
void CTabMFCDlg::OnBnClickedButton3()
{
	m_Main.ShowWindow(SW_SHOW);
	m_MotorDefect.ShowWindow(SW_HIDE);
	m_GlueGun.ShowWindow(SW_HIDE);
	m_LabelingInspection.ShowWindow(SW_HIDE);
	m_Setup.ShowWindow(SW_HIDE);
	m_Log.ShowWindow(SW_HIDE);
	
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}

//Glue Gun 클릭
void CTabMFCDlg::OnBnClickedButton2()
{
	m_Main.ShowWindow(SW_HIDE);
	m_MotorDefect.ShowWindow(SW_HIDE);
	m_GlueGun.ShowWindow(SW_SHOW);
	m_LabelingInspection.ShowWindow(SW_HIDE);
	m_Setup.ShowWindow(SW_HIDE);
	m_Log.ShowWindow(SW_HIDE);
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}

//Motor Defect Detection 클릭
void CTabMFCDlg::OnBnClickedButton4()
{
	m_Main.ShowWindow(SW_HIDE);
	m_MotorDefect.ShowWindow(SW_SHOW);
	m_GlueGun.ShowWindow(SW_HIDE);
	m_LabelingInspection.ShowWindow(SW_HIDE);
	m_Setup.ShowWindow(SW_HIDE);
	m_Log.ShowWindow(SW_HIDE);
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}

//Labeling Inspection 버튼 클릭
void CTabMFCDlg::OnBnClickedButton5()
{
	m_Main.ShowWindow(SW_HIDE);
	m_MotorDefect.ShowWindow(SW_HIDE);
	m_GlueGun.ShowWindow(SW_HIDE);
	m_LabelingInspection.ShowWindow(SW_SHOW);
	m_Setup.ShowWindow(SW_HIDE);
	m_Log.ShowWindow(SW_HIDE);
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}

//Setup 버튼 클릭
void CTabMFCDlg::OnBnClickedButton6()
{
	m_Main.ShowWindow(SW_HIDE);
	m_MotorDefect.ShowWindow(SW_HIDE);
	m_GlueGun.ShowWindow(SW_HIDE);
	m_LabelingInspection.ShowWindow(SW_HIDE);
	m_Setup.ShowWindow(SW_SHOW);
	m_Log.ShowWindow(SW_HIDE);
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}

//Log 버튼 클릭
void CTabMFCDlg::OnBnClickedButton7()
{
	m_Main.ShowWindow(SW_HIDE);
	m_MotorDefect.ShowWindow(SW_HIDE);
	m_GlueGun.ShowWindow(SW_HIDE);
	m_LabelingInspection.ShowWindow(SW_HIDE);
	m_Setup.ShowWindow(SW_HIDE);
	m_Log.ShowWindow(SW_SHOW);
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}
