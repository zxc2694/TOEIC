// voiceDlg.cpp : implementation file
//

#include "stdafx.h"
#include "MFCApplication.h"
#include "voiceDlg.h"
#include "afxdialogex.h"


// voiceDlg dialog

IMPLEMENT_DYNAMIC(voiceDlg, CDialog)

voiceDlg::voiceDlg(CWnd* pParent /*=NULL*/)
	: CDialog(voiceDlg::IDD, pParent)
{
	m_Video = NULL;
}

voiceDlg::~voiceDlg()
{
}

void voiceDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(voiceDlg, CDialog)
/*	ON_BN_CLICKED(IDC_VOICE_PLAY, &voiceDlg::OnBnClickedVoicePlay)
	ON_BN_CLICKED(IDC_VOICE_STOP, &voiceDlg::OnBnClickedVoiceStop)
	ON_BN_CLICKED(IDC_VOICE_PAUSE, &voiceDlg::OnBnClickedVoicePause)
	ON_BN_CLICKED(IDC_VOICE_CANCEL, &voiceDlg::OnBnClickedVoiceCancel)*/
END_MESSAGE_MAP()


BOOL voiceDlg::OnInitDialog()
{
	m_Video = NULL;

	if (m_Video == NULL)
	{
		m_Video = MCIWndCreate(this->GetSafeHwnd(),
			AfxGetInstanceHandle(), WS_CHILD | WS_VISIBLE, _T("TOEIC\\Day 01.mp3"));



	}
	else
	{
		MCIWndHome(m_Video);
	}

	MCIWndPlay(m_Video);
	Pause = FALSE;


	return TRUE;  // 傳回 TRUE，除非您對控制項設定焦點
}
/*void voiceDlg::OnBnClickedVoicePlay()
{
	m_Video = NULL;

	if (m_Video == NULL)
	{
		m_Video = MCIWndCreate(this->GetSafeHwnd(),
			AfxGetInstanceHandle(), NULL, _T("TOEIC\\Day 01.mp3"));

	}
	else
	{
		MCIWndHome(m_Video);
	}

	MCIWndPlay(m_Video);
	Pause = FALSE;
	GetDlgItem(IDC_VOICE_PLAY)->EnableWindow(FALSE);
}


void voiceDlg::OnBnClickedVoiceStop()
{
	if (Pause)
	{
		GetDlgItem(IDC_VOICE_PAUSE)->SetWindowText(_T("Pause"));
		MCIWndResume(m_Video);
		Pause = FALSE;
	}
	else
	{
		GetDlgItem(IDC_VOICE_PAUSE)->SetWindowText(_T("Resume"));
		MCIWndPause(m_Video);
		Pause = TRUE;
	}
}


void voiceDlg::OnBnClickedVoicePause()
{
	if (m_Video != NULL)
	{
		MCIWndDestroy(m_Video);
		OnOK();
	}
	CDialog::OnCancel();
}


void voiceDlg::OnBnClickedVoiceCancel()
{
	// TODO: Add your control notification handler code here
	MCIWndStop(m_Video);
	if (m_Video != NULL)
	{
		MCIWndDestroy(m_Video);
	}
	GetDlgItem(IDC_VOICE_PLAY)->EnableWindow(TRUE);
}
*/