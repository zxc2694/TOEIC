#pragma once

#include "vfw.h"
// voiceDlg dialog

class voiceDlg : public CDialog
{
	DECLARE_DYNAMIC(voiceDlg)

public:
	HWND m_Video;
	BOOL Pause;
	voiceDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~voiceDlg();
	int mDay;
	

// Dialog Data
	enum { IDD = IDD_VOICE };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual BOOL OnInitDialog();
	virtual void OnCancel();
	virtual void PostNcDestroy();

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedVoicePlay();
	afx_msg void OnBnClickedVoiceStop();
	afx_msg void OnBnClickedVoicePause();
	afx_msg void OnBnClickedVoiceCancel();
	
};
