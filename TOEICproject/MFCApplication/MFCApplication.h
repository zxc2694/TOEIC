
// MFCApplication.h : PROJECT_NAME ���ε{�����D�n���Y��
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�� PCH �]�t���ɮ׫e���]�t 'stdafx.h'"
#endif

#include "resource.h"		// �D�n�Ÿ�


// CMFCApplicationApp: 
// �аѾ\��@�����O�� MFCApplication.cpp
//

class CMFCApplicationApp : public CWinApp
{
public:
	CMFCApplicationApp();

// �мg
public:
	virtual BOOL InitInstance();

// �{���X��@

	DECLARE_MESSAGE_MAP()
};

extern CMFCApplicationApp theApp;