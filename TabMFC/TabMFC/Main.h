#pragma once


// CMain ��ȭ �����Դϴ�.

class CMain : public CDialogEx
{
	DECLARE_DYNAMIC(CMain)

public:
	CMain(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CMain();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Main };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};
