#pragma once


// CLog ��ȭ �����Դϴ�.

class CLog : public CDialogEx
{
	DECLARE_DYNAMIC(CLog)

public:
	CLog(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CLog();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_LOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};
