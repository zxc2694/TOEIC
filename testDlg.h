#pragma once


// testDlg dialog

class testDlg : public CDialog
{
	DECLARE_DYNAMIC(testDlg)

public:
	testDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~testDlg();

// Dialog Data
	enum { IDD = IDD_TESTDLG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
