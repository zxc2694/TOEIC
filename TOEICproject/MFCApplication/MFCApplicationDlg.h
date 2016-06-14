

#pragma once


#include "voiceDlg.h"
#include "test_Dlg.h"
#include "saveDlg.h"
#include "vocabulary.h"


// CMFCApplicationDlg 對話方塊
class CMFCApplicationDlg : public CDialogEx
{
// 建構
public:
	int day[31], getDay[30];
	int push[31];
	Words myWords;
	Words_All allWords;
	HWND m_Video;
	BOOL Pause;
	voiceDlg *voice_Dlg;
	saveDlg *save_Dlg;
	char saveWord[30];
	int saveRank;
	bool menuEND;
	bool chShow;

	int mode; // mode 1: show 30 days; mode 2: show frome a to z

	CMFCApplicationDlg(CWnd* pParent = NULL);	// 標準建構函式

// 對話方塊資料
	enum { IDD = IDD_MFCAPPLICATION_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支援


// 程式碼實作
protected:
	HICON m_hIcon;

	// 產生的訊息對應函式
	virtual BOOL OnInitDialog();
	virtual void OnCancel();
	virtual void PostNcDestroy();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CMenu menu;
	void getAllWords();
	void buttonFunction(int ID);
	void nameID_DAY();
	void nameID_AtoZ();
	void ControlDisplay_DAY(int show);
	void leftButtonControl(int ID);
	afx_msg void OnDestroy();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton10();
	afx_msg void OnBnClickedButton11();
	afx_msg void OnBnClickedButton12();
	afx_msg void OnBnClickedButton13();
	afx_msg void OnBnClickedButton14();
	afx_msg void OnBnClickedButton15();
	afx_msg void OnBnClickedButton16();
	afx_msg void OnBnClickedButton17();
	afx_msg void OnBnClickedButton18();
	afx_msg void OnBnClickedButton19();
	afx_msg void OnBnClickedButton20();
	afx_msg void OnBnClickedButton21();
	afx_msg void OnBnClickedButton22();
	afx_msg void OnBnClickedButton23();
	afx_msg void OnBnClickedButton24();
	afx_msg void OnBnClickedButton25();
	afx_msg void OnBnClickedButton26();
	afx_msg void OnBnClickedButton27();
	afx_msg void OnBnClickedButton28();
	afx_msg void OnBnClickedButton29();
	afx_msg void OnBnClickedButton30();
	afx_msg void OnBnClickedWordshow();
	afx_msg void OnBnClickedTestbn();
	afx_msg void OnBnClickedAns1();
	afx_msg void OnBnClickedAns2();
	afx_msg void OnBnClickedAns3();
	afx_msg void OnBnClickedAns4();
	afx_msg void OnBnClickedAns5();
	afx_msg void OnBnClickedAns6();
	afx_msg void OnBnClickedAns7();
	afx_msg void OnBnClickedAns8();
	afx_msg void OnBnClickedAns9();
	afx_msg void OnBnClickedAns10();
	afx_msg void OnBnClickedAns11();
	afx_msg void OnBnClickedAns12();
	afx_msg void OnBnClickedAns13();
	afx_msg void OnBnClickedAns14();
	afx_msg void OnBnClickedAns15();
	afx_msg void OnBnClickedAns16();
	afx_msg void OnBnClickedAns17();
	afx_msg void OnBnClickedAns18();
	afx_msg void OnBnClickedAns19();
	afx_msg void OnBnClickedAns20();
	afx_msg void OnBnClickedAns21();
	afx_msg void OnBnClickedAns22();
	afx_msg void OnBnClickedAns23();
	afx_msg void OnBnClickedAns24();
	afx_msg void OnBnClickedAns25();
	afx_msg void OnBnClickedAns26();
	afx_msg void OnBnClickedAns27();
	afx_msg void OnBnClickedAns28();
	afx_msg void OnBnClickedAns29();
	afx_msg void OnBnClickedAns30();
	afx_msg void OnBnClickedAns31();
	afx_msg void OnBnClickedAns32();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg void OnMenuDay();
	//void OnPaint();
	afx_msg void OnMenuAll();
	afx_msg void OnMenuEnd();
	afx_msg void OnMenuExplain();
	afx_msg void OnMenuSetting();
	afx_msg void OnBnClickedPron();
	afx_msg void OnBnClickedSave();
	afx_msg void OnStnClickedStaticFig();
};