#pragma once


// CLabelingInspection 대화 상자입니다.

class CLabelingInspection : public CDialogEx
{
	DECLARE_DYNAMIC(CLabelingInspection)

public:
	CLabelingInspection(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~CLabelingInspection();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_LABELINGINSPECTION };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
};
