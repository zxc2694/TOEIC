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
		if(mDay == 1)	m_Video = MCIWndCreate(this->GetSafeHwnd(),
		   AfxGetInstanceHandle(), WS_CHILD | WS_VISIBLE, _T("..\\..\\MP3\\Day 01.mp3"));
		if(mDay == 2)	m_Video = MCIWndCreate(this->GetSafeHwnd(),
		   AfxGetInstanceHandle(), WS_CHILD | WS_VISIBLE, _T("..\\..\\MP3\\Day 02.mp3"));
		if(mDay == 3)	m_Video = MCIWndCreate(this->GetSafeHwnd(),
		   AfxGetInstanceHandle(), WS_CHILD | WS_VISIBLE, _T("..\\..\\MP3\\Day 03.mp3"));
		if(mDay == 4)	m_Video = MCIWndCreate(this->GetSafeHwnd(),
		   AfxGetInstanceHandle(), WS_CHILD | WS_VISIBLE, _T("..\\..\\MP3\\Day 04.mp3"));
		if(mDay == 5)	m_Video = MCIWndCreate(this->GetSafeHwnd(),
		   AfxGetInstanceHandle(), WS_CHILD | WS_VISIBLE, _T("..\\..\\MP3\\Day 05.mp3"));
		if(mDay == 6)	m_Video = MCIWndCreate(this->GetSafeHwnd(),
		   AfxGetInstanceHandle(), WS_CHILD | WS_VISIBLE, _T("..\\..\\MP3\\Day 06.mp3"));
		if(mDay == 7)	m_Video = MCIWndCreate(this->GetSafeHwnd(),
		   AfxGetInstanceHandle(), WS_CHILD | WS_VISIBLE, _T("..\\..\\MP3\\Day 07.mp3"));
		if(mDay == 8)	m_Video = MCIWndCreate(this->GetSafeHwnd(),
		   AfxGetInstanceHandle(), WS_CHILD | WS_VISIBLE, _T("..\\..\\MP3\\Day 08.mp3"));
		if(mDay == 9)	m_Video = MCIWndCreate(this->GetSafeHwnd(),
		   AfxGetInstanceHandle(), WS_CHILD | WS_VISIBLE, _T("..\\..\\MP3\\Day 09.mp3"));
		if(mDay == 10)	m_Video = MCIWndCreate(this->GetSafeHwnd(),
		   AfxGetInstanceHandle(), WS_CHILD | WS_VISIBLE, _T("..\\..\\MP3\\Day 10.mp3"));
		if(mDay == 11)	m_Video = MCIWndCreate(this->GetSafeHwnd(),
		   AfxGetInstanceHandle(), WS_CHILD | WS_VISIBLE, _T("..\\..\\MP3\\Day 11.mp3"));
		if(mDay == 12)	m_Video = MCIWndCreate(this->GetSafeHwnd(),
		   AfxGetInstanceHandle(), WS_CHILD | WS_VISIBLE, _T("..\\..\\MP3\\Day 12.mp3"));
		if(mDay == 13)	m_Video = MCIWndCreate(this->GetSafeHwnd(),
		   AfxGetInstanceHandle(), WS_CHILD | WS_VISIBLE, _T("..\\..\\MP3\\Day 13.mp3"));
		if(mDay == 14)	m_Video = MCIWndCreate(this->GetSafeHwnd(),
		   AfxGetInstanceHandle(), WS_CHILD | WS_VISIBLE, _T("..\\..\\MP3\\Day 14.mp3"));
		if(mDay == 15)	m_Video = MCIWndCreate(this->GetSafeHwnd(),
		   AfxGetInstanceHandle(), WS_CHILD | WS_VISIBLE, _T("..\\..\\MP3\\Day 15.mp3"));
		if(mDay == 16)	m_Video = MCIWndCreate(this->GetSafeHwnd(),
		   AfxGetInstanceHandle(), WS_CHILD | WS_VISIBLE, _T("..\\..\\MP3\\Day 16.mp3"));
		if(mDay == 17)	m_Video = MCIWndCreate(this->GetSafeHwnd(),
		   AfxGetInstanceHandle(), WS_CHILD | WS_VISIBLE, _T("..\\..\\MP3\\Day 17.mp3"));
		if(mDay == 18)	m_Video = MCIWndCreate(this->GetSafeHwnd(),
		   AfxGetInstanceHandle(), WS_CHILD | WS_VISIBLE, _T("..\\..\\MP3\\Day 18.mp3"));
		if(mDay == 19)	m_Video = MCIWndCreate(this->GetSafeHwnd(),
		   AfxGetInstanceHandle(), WS_CHILD | WS_VISIBLE, _T("..\\..\\MP3\\Day 19.mp3"));
		if(mDay == 20)	m_Video = MCIWndCreate(this->GetSafeHwnd(),
		   AfxGetInstanceHandle(), WS_CHILD | WS_VISIBLE, _T("..\\..\\MP3\\Day 20.mp3"));
		if(mDay == 21)	m_Video = MCIWndCreate(this->GetSafeHwnd(),
		   AfxGetInstanceHandle(), WS_CHILD | WS_VISIBLE, _T("..\\..\\MP3\\Day 21.mp3"));
		if(mDay == 22)	m_Video = MCIWndCreate(this->GetSafeHwnd(),
		   AfxGetInstanceHandle(), WS_CHILD | WS_VISIBLE, _T("..\\..\\MP3\\Day 22.mp3"));
		if(mDay == 23)	m_Video = MCIWndCreate(this->GetSafeHwnd(),
		   AfxGetInstanceHandle(), WS_CHILD | WS_VISIBLE, _T("..\\..\\MP3\\Day 23.mp3"));
		if(mDay == 24)	m_Video = MCIWndCreate(this->GetSafeHwnd(),
		   AfxGetInstanceHandle(), WS_CHILD | WS_VISIBLE, _T("..\\..\\MP3\\Day 24.mp3"));
		if(mDay == 25)	m_Video = MCIWndCreate(this->GetSafeHwnd(),
		   AfxGetInstanceHandle(), WS_CHILD | WS_VISIBLE, _T("..\\..\\MP3\\Day 25.mp3"));
		if(mDay == 26)	m_Video = MCIWndCreate(this->GetSafeHwnd(),
		   AfxGetInstanceHandle(), WS_CHILD | WS_VISIBLE, _T("..\\..\\MP3\\Day 26.mp3"));
		if(mDay == 27)	m_Video = MCIWndCreate(this->GetSafeHwnd(),
		   AfxGetInstanceHandle(), WS_CHILD | WS_VISIBLE, _T("..\\..\\MP3\\Day 27.mp3"));
		if(mDay == 28)	m_Video = MCIWndCreate(this->GetSafeHwnd(),
		   AfxGetInstanceHandle(), WS_CHILD | WS_VISIBLE, _T("..\\..\\MP3\\Day 28.mp3"));
		if(mDay == 29)	m_Video = MCIWndCreate(this->GetSafeHwnd(),
		   AfxGetInstanceHandle(), WS_CHILD | WS_VISIBLE, _T("..\\..\\MP3\\Day 29.mp3"));
		if(mDay == 30)	m_Video = MCIWndCreate(this->GetSafeHwnd(),
		   AfxGetInstanceHandle(), WS_CHILD | WS_VISIBLE, _T("..\\..\\MP3\\Day 30.mp3"));
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
			AfxGetInstanceHandle(), NULL, _T("..\\..\\MP3\\Day 01.mp3"));

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

void voiceDlg::OnCancel()
{
	// TODO: 在此加入特定的程式碼和 (或) 呼叫基底類別
	DestroyWindow();

	if (m_Video != NULL)
	{
		MCIWndDestroy(m_Video);
	}

}

void voiceDlg::PostNcDestroy()
{
	// TODO: 在此加入特定的程式碼和 (或) 呼叫基底類別

	CDialog::PostNcDestroy();
	delete this;
}