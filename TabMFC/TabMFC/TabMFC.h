
// TabMFC.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CTabMFCApp:
// �� Ŭ������ ������ ���ؼ��� TabMFC.cpp�� �����Ͻʽÿ�.
//

class CTabMFCApp : public CWinApp
{
public:
	CTabMFCApp();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CTabMFCApp theApp;
