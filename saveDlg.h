#pragma once


// saveDlg dialog

class saveDlg : public CDialog
{
	DECLARE_DYNAMIC(saveDlg)

public:
	saveDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~saveDlg();

// Dialog Data
	enum { IDD = IDD_SAVEMSG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
