#pragma once


// CLabelingInspection ��ȭ �����Դϴ�.

class CLabelingInspection : public CDialogEx
{
	DECLARE_DYNAMIC(CLabelingInspection)

public:
	CLabelingInspection(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CLabelingInspection();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_LABELINGINSPECTION };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};
