// testDlg.cpp : implementation file
//

#include "stdafx.h"
#include "MFCApplication.h"
#include "testDlg.h"
#include "afxdialogex.h"


// testDlg dialog

IMPLEMENT_DYNAMIC(testDlg, CDialog)

testDlg::testDlg(CWnd* pParent /*=NULL*/)
	: CDialog(testDlg::IDD, pParent)
{

}

testDlg::~testDlg()
{
}

void testDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(testDlg, CDialog)
END_MESSAGE_MAP()


// testDlg message handlers
