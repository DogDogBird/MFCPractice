#pragma once


// CSetup ��ȭ �����Դϴ�.

class CSetup : public CDialogEx
{
	DECLARE_DYNAMIC(CSetup)

public:
	CSetup(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CSetup();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SETUP };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};
