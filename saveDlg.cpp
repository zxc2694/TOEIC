// saveDlg.cpp : implementation file
//

#include "stdafx.h"
#include "MFCApplication.h"
#include "saveDlg.h"
#include "afxdialogex.h"


// saveDlg dialog

IMPLEMENT_DYNAMIC(saveDlg, CDialog)
 
saveDlg::saveDlg(CWnd* pParent /*=NULL*/)
	: CDialog(saveDlg::IDD, pParent)
{

}

saveDlg::~saveDlg()
{
}

void saveDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(saveDlg, CDialog)
	ON_BN_CLICKED(IDOK, &saveDlg::OnBnClickedOk)
END_MESSAGE_MAP()


// saveDlg message handlers


void saveDlg::OnBnClickedOk()
{
	// TODO: Add your control notification handler code here
	CDialog::OnOK();
}
