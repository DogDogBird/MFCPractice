#pragma once


// CMotorDefect ��ȭ �����Դϴ�.

class CMotorDefect : public CDialogEx
{
	DECLARE_DYNAMIC(CMotorDefect)

public:
	CMotorDefect(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CMotorDefect();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MOTORDEFECT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};
