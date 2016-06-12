
// MFCApplicationDlg.cpp : 實作檔
//

#include "stdafx.h"
#include "MFCApplication.h"
#include "MFCApplicationDlg.h"
#include "afxdialogex.h"
#include "vocabulary.h"
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <iostream>
#include <fstream>
#include<io.h>
#include<stdio.h>
#include "vfw.h"

using namespace std;

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

int changeColor_ID;

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 對話方塊資料
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支援

// 程式碼實作
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CMFCApplicationDlg 對話方塊



CMFCApplicationDlg::CMFCApplicationDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CMFCApplicationDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCApplicationDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CMFCApplicationDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CMFCApplicationDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CMFCApplicationDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CMFCApplicationDlg::OnBnClickedButton3)
	ON_EN_CHANGE(IDC_EDIT1, &CMFCApplicationDlg::OnEnChangeEdit1)
	ON_BN_CLICKED(IDC_BUTTON4, &CMFCApplicationDlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CMFCApplicationDlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CMFCApplicationDlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &CMFCApplicationDlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &CMFCApplicationDlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &CMFCApplicationDlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &CMFCApplicationDlg::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON11, &CMFCApplicationDlg::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON12, &CMFCApplicationDlg::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON13, &CMFCApplicationDlg::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON14, &CMFCApplicationDlg::OnBnClickedButton14)
	ON_BN_CLICKED(IDC_BUTTON15, &CMFCApplicationDlg::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON16, &CMFCApplicationDlg::OnBnClickedButton16)
	ON_BN_CLICKED(IDC_BUTTON17, &CMFCApplicationDlg::OnBnClickedButton17)
	ON_BN_CLICKED(IDC_BUTTON18, &CMFCApplicationDlg::OnBnClickedButton18)
	ON_BN_CLICKED(IDC_BUTTON19, &CMFCApplicationDlg::OnBnClickedButton19)
	ON_BN_CLICKED(IDC_BUTTON20, &CMFCApplicationDlg::OnBnClickedButton20)
	ON_BN_CLICKED(IDC_BUTTON21, &CMFCApplicationDlg::OnBnClickedButton21)
	ON_BN_CLICKED(IDC_BUTTON22, &CMFCApplicationDlg::OnBnClickedButton22)
	ON_BN_CLICKED(IDC_BUTTON23, &CMFCApplicationDlg::OnBnClickedButton23)
	ON_BN_CLICKED(IDC_BUTTON24, &CMFCApplicationDlg::OnBnClickedButton24)
	ON_BN_CLICKED(IDC_BUTTON25, &CMFCApplicationDlg::OnBnClickedButton25)
	ON_BN_CLICKED(IDC_BUTTON26, &CMFCApplicationDlg::OnBnClickedButton26)
	ON_BN_CLICKED(IDC_BUTTON27, &CMFCApplicationDlg::OnBnClickedButton27)
	ON_BN_CLICKED(IDC_BUTTON28, &CMFCApplicationDlg::OnBnClickedButton28)
	ON_BN_CLICKED(IDC_BUTTON29, &CMFCApplicationDlg::OnBnClickedButton29)
	ON_BN_CLICKED(IDC_BUTTON30, &CMFCApplicationDlg::OnBnClickedButton30)
	ON_BN_CLICKED(IDC_WORDSHOW, &CMFCApplicationDlg::OnBnClickedWordshow)
	ON_BN_CLICKED(IDC_TESTBN, &CMFCApplicationDlg::OnBnClickedTestbn)
	ON_BN_CLICKED(IDC_ANS1, &CMFCApplicationDlg::OnBnClickedAns1)
	ON_BN_CLICKED(IDC_ANS2, &CMFCApplicationDlg::OnBnClickedAns2)
	ON_BN_CLICKED(IDC_ANS3, &CMFCApplicationDlg::OnBnClickedAns3)
	ON_BN_CLICKED(IDC_ANS4, &CMFCApplicationDlg::OnBnClickedAns4)
	ON_BN_CLICKED(IDC_ANS5, &CMFCApplicationDlg::OnBnClickedAns5)
	ON_BN_CLICKED(IDC_ANS6, &CMFCApplicationDlg::OnBnClickedAns6)
	ON_BN_CLICKED(IDC_ANS7, &CMFCApplicationDlg::OnBnClickedAns7)
	ON_BN_CLICKED(IDC_ANS8, &CMFCApplicationDlg::OnBnClickedAns8)
	ON_BN_CLICKED(IDC_ANS9, &CMFCApplicationDlg::OnBnClickedAns9)
	ON_BN_CLICKED(IDC_ANS10, &CMFCApplicationDlg::OnBnClickedAns10)
	ON_BN_CLICKED(IDC_ANS11, &CMFCApplicationDlg::OnBnClickedAns11)
	ON_BN_CLICKED(IDC_ANS12, &CMFCApplicationDlg::OnBnClickedAns12)
	ON_BN_CLICKED(IDC_ANS13, &CMFCApplicationDlg::OnBnClickedAns13)
	ON_BN_CLICKED(IDC_ANS14, &CMFCApplicationDlg::OnBnClickedAns14)
	ON_BN_CLICKED(IDC_ANS15, &CMFCApplicationDlg::OnBnClickedAns15)
	ON_BN_CLICKED(IDC_ANS16, &CMFCApplicationDlg::OnBnClickedAns16)
	ON_BN_CLICKED(IDC_ANS17, &CMFCApplicationDlg::OnBnClickedAns17)
	ON_BN_CLICKED(IDC_ANS18, &CMFCApplicationDlg::OnBnClickedAns18)
	ON_BN_CLICKED(IDC_ANS19, &CMFCApplicationDlg::OnBnClickedAns19)
	ON_BN_CLICKED(IDC_ANS20, &CMFCApplicationDlg::OnBnClickedAns20)
	ON_BN_CLICKED(IDC_ANS21, &CMFCApplicationDlg::OnBnClickedAns21)
	ON_BN_CLICKED(IDC_ANS22, &CMFCApplicationDlg::OnBnClickedAns22)
	ON_BN_CLICKED(IDC_ANS23, &CMFCApplicationDlg::OnBnClickedAns23)
	ON_BN_CLICKED(IDC_ANS24, &CMFCApplicationDlg::OnBnClickedAns24)
	ON_BN_CLICKED(IDC_ANS25, &CMFCApplicationDlg::OnBnClickedAns25)
	ON_BN_CLICKED(IDC_ANS26, &CMFCApplicationDlg::OnBnClickedAns26)
	ON_BN_CLICKED(IDC_ANS27, &CMFCApplicationDlg::OnBnClickedAns27)
	ON_BN_CLICKED(IDC_ANS28, &CMFCApplicationDlg::OnBnClickedAns28)
	ON_BN_CLICKED(IDC_ANS29, &CMFCApplicationDlg::OnBnClickedAns29)
	ON_BN_CLICKED(IDC_ANS30, &CMFCApplicationDlg::OnBnClickedAns30)
	ON_BN_CLICKED(IDC_ANS31, &CMFCApplicationDlg::OnBnClickedAns31)
	ON_BN_CLICKED(IDC_ANS32, &CMFCApplicationDlg::OnBnClickedAns32)
	ON_WM_CTLCOLOR()
	ON_COMMAND(ID_MENU_DAY, &CMFCApplicationDlg::OnMenuDay)
	ON_COMMAND(ID_MENU_ALL, &CMFCApplicationDlg::OnMenuAll)
	ON_COMMAND(ID_MENU_END, &CMFCApplicationDlg::OnMenuEnd)
	ON_COMMAND(ID_MENU_EXPLAIN, &CMFCApplicationDlg::OnMenuExplain)
	ON_COMMAND(ID_MENU_SETTING, &CMFCApplicationDlg::OnMenuSetting)
	ON_BN_CLICKED(IDC_PRON, &CMFCApplicationDlg::OnBnClickedPron)
	ON_BN_CLICKED(IDC_SAVE, &CMFCApplicationDlg::OnBnClickedSave)
END_MESSAGE_MAP()


// CMFCApplicationDlg 訊息處理常式

BOOL CMFCApplicationDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	m_Video = NULL;
	menuEND = false;
	chShow = false;
	this->menu.LoadMenu(IDR_MENU1);
	SetMenu(&this->menu);
	
	this->voice_Dlg = NULL;

	//Hide all items at first
	ControlDisplay_DAY(SW_HIDE);

	for (int i = 0; i < 30; i++)
		day[i] = 0;

	for (int i = 0; i < 31; i++)
		push[i] = 2;
	
	srand((int)time(NULL));

	// IDM_ABOUTBOX 必須在系統命令範圍之中。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}


	// 設定此對話方塊的圖示。當應用程式的主視窗不是對話方塊時，
	// 框架會自動從事此作業
	SetIcon(m_hIcon, TRUE);			// 設定大圖示
	SetIcon(m_hIcon, FALSE);		// 設定小圖示

	// TODO:  在此加入額外的初始設定

	return TRUE;  // 傳回 TRUE，除非您對控制項設定焦點
}

void CMFCApplicationDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果將最小化按鈕加入您的對話方塊，您需要下列的程式碼，
// 以便繪製圖示。對於使用文件/檢視模式的 MFC 應用程式，
// 框架會自動完成此作業。

void CMFCApplicationDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 繪製的裝置內容

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 將圖示置中於用戶端矩形
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;
		dc.FillSolidRect(rect, RGB(0, 10, 50));   //设置为背景色   

		// 描繪圖示
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CPaintDC dc(this);
		CRect rect;
		GetClientRect(rect);
		dc.FillSolidRect(rect, RGB(200, 240, 255));   //设置为背景色  
		//dc.FillSolidRect(rect, RGB(255, 255, 255));   //设置为背景色  

		CDialogEx::OnPaint();

		 
	}
}

// 當使用者拖曳最小化視窗時，
// 系統呼叫這個功能取得游標顯示。
HCURSOR CMFCApplicationDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CMFCApplicationDlg::OnBnClickedTestbn() // 測試單字
{
	if (button_Read(day) == 0)
	{
		GetDlgItem(IDC_SOL)->SetWindowText(_T("請選擇要測驗的DAY，最多任選3個"));
	}
	else
	{
		// clean 
		GetDlgItem(IDC_SOL)->SetWindowText(_T(""));
		GetDlgItem(IDC_EX)->SetWindowText(_T(""));
		GetDlgItem(IDC_NUM)->SetWindowText(_T(""));
		for (int i = 0; i < 32; i++)
			GetDlgItem(IDC_EDIT1 + i)->SetWindowText(_T(""));

		// Create test dialog
		test_Dlg *testDlg = new test_Dlg(this);
		BOOL kk = testDlg->Create(IDD_TEST_DIALOG, NULL);
		testDlg->ShowWindow(SW_SHOWNORMAL);  // 注意: 一定要 showWindow 否則秀不出來
		
		testDlg->testButtonFlagFunc();
		
		for (int i = 0, x = 0; i < 31; i++)
		{
			if (day[i] == 1)
			{
				getDay[x] = i;
				x++;
			}
		}

		// Transfer the days user chooses to test dialog
		testDlg->GetDayFunc(getDay);

		// Get random words
		int count = 0, bingoDay = 0, bingoWord = 0;

		// Reset count to avoid error counting
		testDlg->resetCount();

		int getNumArr[10];

		// 不同的數字作為初始值
		getNumArr[0] = 100;
		getNumArr[1] = 101;
		getNumArr[2] = 102;
		getNumArr[3] = 103;
		getNumArr[4] = 104;
		getNumArr[5] = 105;
		getNumArr[6] = 106;
		getNumArr[7] = 107;
		getNumArr[8] = 108;
		getNumArr[9] = 109;

		while (count < 10) // Test 10 words
		{
			int readNum = button_Read(day);
			int X = rand() % readNum;
			bingoDay = getDay[X];						

			getDayWord(bingoDay, myWords);

			int bingoWord = rand() % 32;

			getNumArr[count] = bingoWord;


			// 避免出現重複的單字
			while (1)
			{
				int c = 0;
				for (int i = 0; i < 10; i++)
				{
					for (int j = i + 1; j < 10; j++)
					{
						if (getNumArr[i] == getNumArr[j])
						{
							bingoWord = rand() % 32;
							getNumArr[count] = bingoWord;
							c = 0;
						}
						else
							c++;
					}
				}

				if (c == 45)
					break;
			}

			testDlg->trasferData_English(myWords.word[bingoWord]);
			testDlg->trasferData_number(myWords.number[bingoWord]);
			testDlg->trasferData_chienese(myWords.chinese[bingoWord]);

			count++;
		}	
	}
}

void CMFCApplicationDlg::OnBnClickedWordshow() // 顯示全部單字按鈕
{
	chShow = true;

	for (int i = 0; i < 32; i++)
		myWords.word[i] = _T("");

	int readNum = button_Read(day);

	if (readNum == 1) // 選好一個DAY
	{
		GetDlgItem(IDC_SAVE)->ShowWindow(SW_HIDE);
		GetDlgItem(IDC_SOL)->SetWindowText(_T(""));
		GetDlgItem(IDC_EX)->SetWindowText(_T(""));

		// Re-draw the color of word
		changeColor_ID = 0;
		for (int i = IDC_EDIT1; i < IDC_EDIT1 + 32; i++)
		{
			GetDlgItem(i)->RedrawWindow();
			GetDlgItem(i)->InvalidateRect(NULL);
		}

		if (mode == 1)
		{
			GetDlgItem(IDC_PRON)->ShowWindow(SW_SHOW);
			for (int i = 0, x = 0; i < 31; i++)
			{
				if (day[i] == 1)
				{
					getDay[x] = i;
					break;
				}
			}

			getDayWord(getDay[0], myWords);

			for (int i = 0; i < 32; i++)
				GetDlgItem(IDC_EDIT1 + i)->SetWindowText(myWords.word[i]);
		}
		if (mode == 2)
		{
			GetDlgItem(IDC_PRON)->ShowWindow(SW_HIDE);
			for (int i = 0, x = 0; i < 31; i++)
			{
				if (day[i] == 1)
				{
					getDay[x] = i;
					break;
				}
			}

			for (int i = 0; i < 32; i++)
				GetDlgItem(IDC_EDIT1 + i)->SetWindowText(allWords.word[i + (getDay[0] - 1) * 32]);
		}
	}
	else
	{
		// clean 
		GetDlgItem(IDC_SOL)->SetWindowText(_T(""));
		GetDlgItem(IDC_EX)->SetWindowText(_T(""));
		GetDlgItem(IDC_NUM)->SetWindowText(_T(""));
		for (int i = 0; i < 32; i++)
			GetDlgItem(IDC_EDIT1 + i)->SetWindowText(_T(""));

		if (mode == 1)
		{
			GetDlgItem(IDC_SOL)->SetWindowText(_T("顯示單字: 只能選擇一個DAY\r\n隨機測驗: 可以選擇多個DAY，並隨機抽考10個\r\n\r\n(請再案一次已選取的DAY，可以取消......)"));
		}
		if (mode == 2)
		{
			GetDlgItem(IDC_SOL)->SetWindowText(_T("顯示單字: 只能選擇一個字母\r\n隨機測驗: 可以選擇多個字母，並隨機抽考10個\r\n\r\n(請再案一次已選取的字母，可以取消......)"));
		}

		// Re-draw the color of word
		changeColor_ID = 0; // 還原
		for (int i = IDC_EDIT1; i < IDC_EDIT1 + 32; i++)
		{
			GetDlgItem(i)->RedrawWindow();
			GetDlgItem(i)->InvalidateRect(NULL);
		}
	}
}


void CMFCApplicationDlg::OnEnChangeEdit1()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
}

void CMFCApplicationDlg::leftButtonControl(int ID)
{

////////////////////////// Not done ////////////////////////////////////////////////////////////////////
	const char *ch_DAY[30] = { "DAY1", "DAY2", "DAY3", "DAY4", "DAY5", "DAY6", "DAY7", "DAY8", "DAY9", "DAY10", "DAY11", "DAY12", "DAY13", "DAY14", "DAY15", "DAY16", "DAY17", "DAY18", "DAY19", "DAY20", "DAY21", "DAY22", "DAY23", "DAY24", "DAY25", "DAY26"};
	const char *ch_AtoZ[30] = { "A", "A", "A", "A, B", "B, C", "C", "C", "C", "C, D", "D", "D, E", "E", "E, F", "F", "F, G, H, I", "I", "I, J, K", "L, M", "M, N", "N, O", "O, P", "P", "P, Q, R", "R", "R", "R, S" };

	CString OUTCH;
	
	if (push[ID] % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON5)->SetWindowText(_T("--已選取--"));
		day[ID] = 1;
	}
	else
	{
		if (mode == 1)
		{
			OUTCH.Format(_T("Rank: %d"), ch_DAY[ID - 1]);
			GetDlgItem(IDC_BUTTON5)->SetWindowText(OUTCH);
		}

		if (mode == 2)
		{
			OUTCH.Format(_T("Rank: %d"), ch_AtoZ[ID - 1]);
			GetDlgItem(IDC_BUTTON5)->SetWindowText(OUTCH);
		}

		day[ID] = 0;
	}
	push[ID]++;

	//////////////////////////////////////////////////////////////////////////////////////////////////
}
void CMFCApplicationDlg::OnBnClickedButton1()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON1)->SetWindowText(_T("--已選取--"));
		day[1] = 1;
	}
	else
	{
		if (mode == 1)
			GetDlgItem(IDC_BUTTON1)->SetWindowText(_T("DAY1"));

		if (mode == 2)
			GetDlgItem(IDC_BUTTON1)->SetWindowText(_T("A"));

		day[1] = 0;
	}
	n++;
}

void CMFCApplicationDlg::OnBnClickedButton2()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON2)->SetWindowText(_T("--已選取--"));
		day[2] = 1;
	}
	else
	{
		if (mode == 1)
			GetDlgItem(IDC_BUTTON2)->SetWindowText(_T("DAY2"));

		if (mode == 2)
			GetDlgItem(IDC_BUTTON2)->SetWindowText(_T("A"));

		day[2] = 0;
	}
	n++;
}

void CMFCApplicationDlg::OnBnClickedButton3()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON3)->SetWindowText(_T("--已選取--"));
		day[3] = 1;
	}
	else
	{
		if (mode == 1)
			GetDlgItem(IDC_BUTTON3)->SetWindowText(_T("DAY3"));

		if (mode == 2)
			GetDlgItem(IDC_BUTTON3)->SetWindowText(_T("A"));

		day[3] = 0;
	}
	n++;
}

void CMFCApplicationDlg::OnBnClickedButton4()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON4)->SetWindowText(_T("--已選取--"));
		day[4] = 1;
	}
	else
	{
		if (mode == 1)
			GetDlgItem(IDC_BUTTON4)->SetWindowText(_T("DAY4"));

		if (mode == 2)
			GetDlgItem(IDC_BUTTON4)->SetWindowText(_T("A, B"));

		day[4] = 0;
	}
	n++;
}

void CMFCApplicationDlg::OnBnClickedButton5()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON5)->SetWindowText(_T("--已選取--"));
		day[5] = 1;
	}
	else
	{
		if (mode == 1)
			GetDlgItem(IDC_BUTTON5)->SetWindowText(_T("DAY5"));

		if (mode == 2)
			GetDlgItem(IDC_BUTTON5)->SetWindowText(_T("B, C"));

		day[5] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton6()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON6)->SetWindowText(_T("--已選取--"));
		day[6] = 1;
	}
	else
	{
		if (mode == 1)
			GetDlgItem(IDC_BUTTON6)->SetWindowText(_T("DAY6"));

		if (mode == 2)
			GetDlgItem(IDC_BUTTON6)->SetWindowText(_T("C"));

		day[6] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton7()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON7)->SetWindowText(_T("--已選取--"));
		day[7] = 1;
	}
	else
	{
		if (mode == 1)
			GetDlgItem(IDC_BUTTON7)->SetWindowText(_T("DAY7"));

		if (mode == 2)
			GetDlgItem(IDC_BUTTON7)->SetWindowText(_T("C"));

		day[7] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton8()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON8)->SetWindowText(_T("--已選取--"));
		day[8] = 1;
	}
	else
	{
		if (mode == 1)
			GetDlgItem(IDC_BUTTON8)->SetWindowText(_T("DAY8"));

		if (mode == 2)
			GetDlgItem(IDC_BUTTON8)->SetWindowText(_T("C"));

		day[8] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton9()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON9)->SetWindowText(_T("--已選取--"));
		day[9] = 1;
	}
	else
	{
		if (mode == 1)
			GetDlgItem(IDC_BUTTON9)->SetWindowText(_T("DAY9"));

		if (mode == 2)
			GetDlgItem(IDC_BUTTON9)->SetWindowText(_T("C, D"));

		day[9] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton10()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON10)->SetWindowText(_T("--已選取--"));
		day[10] = 1;
	}
	else
	{
		if (mode == 1)
			GetDlgItem(IDC_BUTTON10)->SetWindowText(_T("DAY10"));

		if (mode == 2)
			GetDlgItem(IDC_BUTTON10)->SetWindowText(_T("D"));

		day[10] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton11()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON11)->SetWindowText(_T("--已選取--"));
		day[11] = 1;
	}
	else
	{
		if (mode == 1)
			GetDlgItem(IDC_BUTTON11)->SetWindowText(_T("DAY11"));

		if (mode == 2)
			GetDlgItem(IDC_BUTTON11)->SetWindowText(_T("D, E"));

		day[11] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton12()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON12)->SetWindowText(_T("--已選取--"));
		day[12] = 1;
	}
	else
	{
		if (mode == 1)
			GetDlgItem(IDC_BUTTON12)->SetWindowText(_T("DAY12"));

		if (mode == 2)
			GetDlgItem(IDC_BUTTON12)->SetWindowText(_T("E"));

		day[12] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton13()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON13)->SetWindowText(_T("--已選取--"));
		day[13] = 1;
	}
	else
	{
		if (mode == 1)
			GetDlgItem(IDC_BUTTON13)->SetWindowText(_T("DAY13"));

		if (mode == 2)
			GetDlgItem(IDC_BUTTON13)->SetWindowText(_T("E, F"));

		day[13] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton14()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON14)->SetWindowText(_T("--已選取--"));
		day[14] = 1;
	}
	else
	{
		if (mode == 1)
			GetDlgItem(IDC_BUTTON14)->SetWindowText(_T("DAY14"));

		if (mode == 2)
			GetDlgItem(IDC_BUTTON14)->SetWindowText(_T("F"));

		day[14] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton15()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON15)->SetWindowText(_T("--已選取--"));
		day[15] = 1;
	}
	else
	{
		if (mode == 1)
			GetDlgItem(IDC_BUTTON15)->SetWindowText(_T("DAY15"));

		if (mode == 2)
			GetDlgItem(IDC_BUTTON15)->SetWindowText(_T("F, G, H, I"));

		day[15] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton16()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON16)->SetWindowText(_T("--已選取--"));
		day[16] = 1;
	}
	else
	{
		if (mode == 1)
			GetDlgItem(IDC_BUTTON16)->SetWindowText(_T("DAY16"));

		if (mode == 2)
			GetDlgItem(IDC_BUTTON16)->SetWindowText(_T("I"));

		day[16] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton17()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON17)->SetWindowText(_T("--已選取--"));
		day[17] = 1;
	}
	else
	{
		if (mode == 1)
			GetDlgItem(IDC_BUTTON17)->SetWindowText(_T("DAY17"));

		if (mode == 2)
			GetDlgItem(IDC_BUTTON17)->SetWindowText(_T("I, J, K"));

		day[17] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton18()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON18)->SetWindowText(_T("--已選取--"));
		day[18] = 1;
	}
	else
	{
		if (mode == 1)
			GetDlgItem(IDC_BUTTON18)->SetWindowText(_T("DAY18"));

		if (mode == 2)
			GetDlgItem(IDC_BUTTON18)->SetWindowText(_T("L, M"));

		day[18] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton19()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON19)->SetWindowText(_T("--已選取--"));
		day[19] = 1;
	}
	else
	{
		if (mode == 1)
			GetDlgItem(IDC_BUTTON19)->SetWindowText(_T("DAY19"));

		if (mode == 2)
			GetDlgItem(IDC_BUTTON19)->SetWindowText(_T("M, N"));

		day[19] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton20()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON20)->SetWindowText(_T("--已選取--"));
		day[20] = 1;
	}
	else
	{
		if (mode == 1)
			GetDlgItem(IDC_BUTTON20)->SetWindowText(_T("DAY20"));

		if (mode == 2)
			GetDlgItem(IDC_BUTTON20)->SetWindowText(_T("N, O"));

		day[20] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton21()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON21)->SetWindowText(_T("--已選取--"));
		day[21] = 1;
	}
	else
	{
		if (mode == 1)
			GetDlgItem(IDC_BUTTON21)->SetWindowText(_T("DAY21"));

		if (mode == 2)
			GetDlgItem(IDC_BUTTON21)->SetWindowText(_T("O, P"));

		day[21] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton22()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON22)->SetWindowText(_T("--已選取--"));
		day[22] = 1;
	}
	else
	{
		if (mode == 1)
			GetDlgItem(IDC_BUTTON22)->SetWindowText(_T("DAY22"));

		if (mode == 2)
			GetDlgItem(IDC_BUTTON22)->SetWindowText(_T("P"));

		day[22] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton23()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON23)->SetWindowText(_T("--已選取--"));
		day[23] = 1;
	}
	else
	{
		if (mode == 1)
			GetDlgItem(IDC_BUTTON23)->SetWindowText(_T("DAY23"));

		if (mode == 2)
			GetDlgItem(IDC_BUTTON23)->SetWindowText(_T("P, Q, R"));

		day[23] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton24()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON24)->SetWindowText(_T("--已選取--"));
		day[24] = 1;
	}
	else
	{
		if (mode == 1)
			GetDlgItem(IDC_BUTTON24)->SetWindowText(_T("DAY24"));

		if (mode == 2)
			GetDlgItem(IDC_BUTTON24)->SetWindowText(_T("R"));

		day[24] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton25()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON25)->SetWindowText(_T("--已選取--"));
		day[25] = 1;
	}
	else
	{
		if (mode == 1)
			GetDlgItem(IDC_BUTTON25)->SetWindowText(_T("DAY25"));

		if (mode == 2)
			GetDlgItem(IDC_BUTTON25)->SetWindowText(_T("R"));

		day[25] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton26()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON26)->SetWindowText(_T("--已選取--"));
		day[26] = 1;
	}
	else
	{
		if (mode == 1)
			GetDlgItem(IDC_BUTTON26)->SetWindowText(_T("DAY26"));

		if (mode == 2)
			GetDlgItem(IDC_BUTTON26)->SetWindowText(_T("R, S"));

		day[26] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton27()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON27)->SetWindowText(_T("--已選取--"));
		day[27] = 1;
	}
	else
	{
		if (mode == 1)
			GetDlgItem(IDC_BUTTON27)->SetWindowText(_T("DAY27"));

		if (mode == 2)
			GetDlgItem(IDC_BUTTON27)->SetWindowText(_T("S"));

		day[27] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton28()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON28)->SetWindowText(_T("--已選取--"));
		day[28] = 1;
	}
	else
	{
		if (mode == 1)
			GetDlgItem(IDC_BUTTON28)->SetWindowText(_T("DAY28"));

		if (mode == 2)
			GetDlgItem(IDC_BUTTON28)->SetWindowText(_T("S"));

		day[28] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton29()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON29)->SetWindowText(_T("--已選取--"));
		day[29] = 1;
	}
	else
	{
		if (mode == 1)
			GetDlgItem(IDC_BUTTON29)->SetWindowText(_T("DAY29"));

		if (mode == 2)
			GetDlgItem(IDC_BUTTON29)->SetWindowText(_T("S, T"));

		day[29] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton30()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON30)->SetWindowText(_T("--已選取--"));
		day[30] = 1;
	}
	else
	{
		if (mode == 1)
			GetDlgItem(IDC_BUTTON30)->SetWindowText(_T("DAY30"));

		if (mode == 2)
			GetDlgItem(IDC_BUTTON30)->SetWindowText(_T("T,U,V,W,Y"));

		day[30] = 0;
	}
	n++;
}

///////////////////////////////// Display chinese words ///////////////////////////////////


void CMFCApplicationDlg::OnBnClickedAns1()
{
	buttonFunction(1);
}


void CMFCApplicationDlg::OnBnClickedAns2()
{
	buttonFunction(2);
}


void CMFCApplicationDlg::OnBnClickedAns3()
{
	buttonFunction(3);
}


void CMFCApplicationDlg::OnBnClickedAns4()
{
	buttonFunction(4);
}


void CMFCApplicationDlg::OnBnClickedAns5()
{
	buttonFunction(5);
}


void CMFCApplicationDlg::OnBnClickedAns6()
{
	buttonFunction(6);
}


void CMFCApplicationDlg::OnBnClickedAns7()
{
	buttonFunction(7);
}


void CMFCApplicationDlg::OnBnClickedAns8()
{
	buttonFunction(8);
}


void CMFCApplicationDlg::OnBnClickedAns9()
{
	buttonFunction(9);
}


void CMFCApplicationDlg::OnBnClickedAns10()
{
	buttonFunction(10);
}


void CMFCApplicationDlg::OnBnClickedAns11()
{
	buttonFunction(11);
}


void CMFCApplicationDlg::OnBnClickedAns12()
{
	buttonFunction(12);
}


void CMFCApplicationDlg::OnBnClickedAns13()
{
	buttonFunction(13);
}


void CMFCApplicationDlg::OnBnClickedAns14()
{
	buttonFunction(14);
}


void CMFCApplicationDlg::OnBnClickedAns15()
{
	buttonFunction(15);
}


void CMFCApplicationDlg::OnBnClickedAns16()
{
	buttonFunction(16);
}


void CMFCApplicationDlg::OnBnClickedAns17()
{
	buttonFunction(17);
}


void CMFCApplicationDlg::OnBnClickedAns18()
{
	buttonFunction(18);
}


void CMFCApplicationDlg::OnBnClickedAns19()
{
	buttonFunction(19);
}


void CMFCApplicationDlg::OnBnClickedAns20()
{
	buttonFunction(20);
}


void CMFCApplicationDlg::OnBnClickedAns21()
{
	buttonFunction(21);
}


void CMFCApplicationDlg::OnBnClickedAns22()
{
	buttonFunction(22);
}


void CMFCApplicationDlg::OnBnClickedAns23()
{
	buttonFunction(23);
}


void CMFCApplicationDlg::OnBnClickedAns24()
{
	buttonFunction(24);
}


void CMFCApplicationDlg::OnBnClickedAns25()
{
	buttonFunction(25);
}


void CMFCApplicationDlg::OnBnClickedAns26()
{
	buttonFunction(26);
}


void CMFCApplicationDlg::OnBnClickedAns27()
{
	buttonFunction(27);
}


void CMFCApplicationDlg::OnBnClickedAns28()
{
	buttonFunction(28);
}


void CMFCApplicationDlg::OnBnClickedAns29()
{
	buttonFunction(29);
}


void CMFCApplicationDlg::OnBnClickedAns30()
{
	buttonFunction(30);
}


void CMFCApplicationDlg::OnBnClickedAns31()
{
	buttonFunction(31);
}


void CMFCApplicationDlg::OnBnClickedAns32()
{
	buttonFunction(32);
}

void CMFCApplicationDlg::buttonFunction(int ID)
{
	if (chShow == false)
	{
		// show
	}
	else
	{
		GetDlgItem(IDC_SAVE)->ShowWindow(SW_SHOW);

		CString temp;
		if (mode == 1)
		{
			GetDlgItem(IDC_SOL)->SetWindowText(myWords.chinese[ID - 1] + myWords.ps[ID - 1]);
			GetDlgItem(IDC_EX)->SetWindowText(myWords.ex[ID - 1]);
			CString out_Num;
			out_Num.Format(_T("Rank: %d"), myWords.number[ID - 1]);
			GetDlgItem(IDC_NUM)->SetWindowText(out_Num);

			// Re-draw the color of word
			int number = IDC_EDIT1 + ID - 1;
			changeColor_ID = number;
			for (int i = IDC_EDIT1; i < IDC_EDIT1 + 32; i++)
			{
				GetDlgItem(i)->RedrawWindow();
				GetDlgItem(i)->InvalidateRect(NULL);
			}

			temp = myWords.word[ID - 1];
			saveRank = myWords.number[ID - 1];
		}
		if (mode == 2)
		{
			GetDlgItem(IDC_SOL)->SetWindowText(allWords.chinese[(getDay[0] - 1) * 32 + ID - 1] + allWords.ps[(getDay[0] - 1) * 32 + ID - 1]);
			CString out_Num;
			out_Num.Format(_T("Rank: %d"), allWords.number_arrange[(getDay[0] - 1) * 32 + ID - 1]);
			GetDlgItem(IDC_NUM)->SetWindowText(out_Num);

			// Re-draw the color of word
			int number = IDC_EDIT1 + ID - 1; // ID is my selecting word
			changeColor_ID = number;
			for (int i = IDC_EDIT1; i < IDC_EDIT1 + 32; i++)
			{
				GetDlgItem(i)->RedrawWindow();
				GetDlgItem(i)->InvalidateRect(NULL);
			}

			temp = allWords.word[(getDay[0] - 1) * 32 + ID - 1];
			saveRank = allWords.number_arrange[(getDay[0] - 1) * 32 + ID - 1];
		}

		//Convert CString to char*, and get the word we select
		const TCHAR* unicode_string;
		unicode_string = (LPCTSTR)temp;
		int size = wcslen(unicode_string);
		wcstombs(saveWord, unicode_string, size + 1);
		int a = 1;
	}
}
HBRUSH CMFCApplicationDlg::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialogEx::OnCtlColor(pDC, pWnd, nCtlColor);

	if (pWnd->GetDlgCtrlID() == changeColor_ID)
	{
		pDC->SetTextColor(RGB(0, 0, 0));  //設置字體顏色
		//pDC->SetBkMode(TRANSPARENT); //設置字體背景為透明

		pDC->SetBkColor(RGB(255, 255, 100)); // 設置背景色
		HBRUSH brush = CreateSolidBrush(RGB(255, 255, 100));
		return brush;
	}
	else
	{
		pDC->SetTextColor(RGB(0, 0, 0));  //設置字體顏色
		//pDC->SetBkMode(TRANSPARENT); //設置字體背景為透明
		pDC->SetBkColor(RGB(240, 255, 240)); // 設置背景色
		HBRUSH brush = CreateSolidBrush(RGB(240, 255, 240));
		return brush;
	}
	//return hbr;
}

void CMFCApplicationDlg::getAllWords()
{
	Words tempWords;
	int count = 0;

	for (int j = 30; j > 0; j--)
	{
		getDayWord(j, tempWords);
		for (int i = 0; i < 32; i++)
		{
			allWords.word[count] = tempWords.word[i];
			allWords.number[count] = tempWords.number[i];
			allWords.chinese[count] = tempWords.chinese[i];
			allWords.ps[count] = tempWords.ps[i];
			count++;
		}
	}
	char wordChar[20];
	const TCHAR* unicode_string[3000];
	for (int i = 0; i < count; i++)
	{
		//Convert CString to char*
		unicode_string[i] = (LPCTSTR)allWords.word[i];
		int size = wcslen(unicode_string[i]);
		wcstombs(wordChar, unicode_string[i], size + 1);
		strcpy(allWords.wordChar[i], wordChar);
	}

	for (int i = 0; i < count; i++)
	{
		strcpy(allWords.word_arrange[i], allWords.wordChar[i]);
		allWords.number_arrange[i] = allWords.number[i];
	}

	char buffer[20];
	int numberBuffer;
	CString tempSCtr;
	CString tempSCtr1;
	CString tempSCtr2;
	for (int i = 0; i < count; ++i)
	{
		for (int j = i + 1; j < count; ++j)
		{
			if (strcmp(allWords.word_arrange[i], allWords.word_arrange[j]) > 0)
			{
				// Directly exchange two values
				strcpy(buffer, allWords.word_arrange[i]);
				strcpy(allWords.word_arrange[i], allWords.word_arrange[j]);
				strcpy(allWords.word_arrange[j], buffer);

				numberBuffer = allWords.number_arrange[i];
				allWords.number_arrange[i] = allWords.number_arrange[j];
				allWords.number_arrange[j] = numberBuffer;

				tempSCtr = allWords.word[i];
				allWords.word[i] = allWords.word[j];
				allWords.word[j] = tempSCtr;

				tempSCtr1 = allWords.chinese[i];
				allWords.chinese[i] = allWords.chinese[j];
				allWords.chinese[j] = tempSCtr1;

				tempSCtr2 = allWords.ps[i];
				allWords.ps[i] = allWords.ps[j];
				allWords.ps[j] = tempSCtr2;
			}
		}
	}
	int qqq = 1;
}





void CMFCApplicationDlg::OnMenuEnd()
{
	menuEND = true;
	DestroyWindow();
}


void CMFCApplicationDlg::OnMenuExplain()
{
	ControlDisplay_DAY(SW_HIDE);
	GetDlgItem(IDC_EDITBIG)->ShowWindow(SW_SHOW);
	GetDlgItem(IDC_EDITBIG)->SetWindowText(_T("1. 此軟體參考多益3000字書本，依照多益考試出現的單字頻率分為DAY1到DAY30。\r\n\r\n2. 軟體功能：\r\n\r\n  a. 單字顯示: 左上角可以選擇以DAY顯示或以A~Z顯示。\r\n\r\n  b. 隨機測驗: 選多個DAY按下隨機測驗按鈕，可以進行英翻中或中翻英的練習。\r\n\r\n  c. 儲存單字: 可將不熟單字儲存下來，會出現在EnglishWords.txt裡面。\r\n\r\n  d. 播放功能: 根據選擇不同的DAY會播放單字的mp3英聽。"));
}


void CMFCApplicationDlg::OnMenuSetting()
{
	ControlDisplay_DAY(SW_HIDE);
	GetDlgItem(IDC_EDITBIG)->ShowWindow(SW_SHOW);
	GetDlgItem(IDC_EDITBIG)->SetWindowText(_T("無"));
}

void CMFCApplicationDlg::ControlDisplay_DAY(int show)
{
	GetDlgItem(IDC_BUTTON1)->ShowWindow(show);
	GetDlgItem(IDC_BUTTON2)->ShowWindow(show);
	GetDlgItem(IDC_BUTTON3)->ShowWindow(show);
	GetDlgItem(IDC_BUTTON4)->ShowWindow(show);
	GetDlgItem(IDC_BUTTON5)->ShowWindow(show);
	GetDlgItem(IDC_BUTTON6)->ShowWindow(show);
	GetDlgItem(IDC_BUTTON7)->ShowWindow(show);
	GetDlgItem(IDC_BUTTON8)->ShowWindow(show);
	GetDlgItem(IDC_BUTTON9)->ShowWindow(show);
	GetDlgItem(IDC_BUTTON10)->ShowWindow(show);
	GetDlgItem(IDC_BUTTON11)->ShowWindow(show);
	GetDlgItem(IDC_BUTTON12)->ShowWindow(show);
	GetDlgItem(IDC_BUTTON13)->ShowWindow(show);
	GetDlgItem(IDC_BUTTON14)->ShowWindow(show);
	GetDlgItem(IDC_BUTTON15)->ShowWindow(show);
	GetDlgItem(IDC_BUTTON16)->ShowWindow(show);
	GetDlgItem(IDC_BUTTON17)->ShowWindow(show);
	GetDlgItem(IDC_BUTTON18)->ShowWindow(show);
	GetDlgItem(IDC_BUTTON19)->ShowWindow(show);
	GetDlgItem(IDC_BUTTON20)->ShowWindow(show);
	GetDlgItem(IDC_BUTTON21)->ShowWindow(show);
	GetDlgItem(IDC_BUTTON22)->ShowWindow(show);
	GetDlgItem(IDC_BUTTON23)->ShowWindow(show);
	GetDlgItem(IDC_BUTTON24)->ShowWindow(show);
	GetDlgItem(IDC_BUTTON25)->ShowWindow(show);
	GetDlgItem(IDC_BUTTON26)->ShowWindow(show);
	GetDlgItem(IDC_BUTTON27)->ShowWindow(show);
	GetDlgItem(IDC_BUTTON28)->ShowWindow(show);
	GetDlgItem(IDC_BUTTON29)->ShowWindow(show);
	GetDlgItem(IDC_BUTTON30)->ShowWindow(show);

	GetDlgItem(IDC_EDIT1)->ShowWindow(show);
	GetDlgItem(IDC_EDIT2)->ShowWindow(show);
	GetDlgItem(IDC_EDIT3)->ShowWindow(show);
	GetDlgItem(IDC_EDIT4)->ShowWindow(show);
	GetDlgItem(IDC_EDIT5)->ShowWindow(show);
	GetDlgItem(IDC_EDIT6)->ShowWindow(show);
	GetDlgItem(IDC_EDIT7)->ShowWindow(show);
	GetDlgItem(IDC_EDIT8)->ShowWindow(show);
	GetDlgItem(IDC_EDIT9)->ShowWindow(show);
	GetDlgItem(IDC_EDIT10)->ShowWindow(show);
	GetDlgItem(IDC_EDIT11)->ShowWindow(show);
	GetDlgItem(IDC_EDIT12)->ShowWindow(show);
	GetDlgItem(IDC_EDIT13)->ShowWindow(show);
	GetDlgItem(IDC_EDIT14)->ShowWindow(show);
	GetDlgItem(IDC_EDIT15)->ShowWindow(show);
	GetDlgItem(IDC_EDIT16)->ShowWindow(show);
	GetDlgItem(IDC_EDIT17)->ShowWindow(show);
	GetDlgItem(IDC_EDIT18)->ShowWindow(show);
	GetDlgItem(IDC_EDIT19)->ShowWindow(show);
	GetDlgItem(IDC_EDIT20)->ShowWindow(show);
	GetDlgItem(IDC_EDIT21)->ShowWindow(show);
	GetDlgItem(IDC_EDIT22)->ShowWindow(show);
	GetDlgItem(IDC_EDIT23)->ShowWindow(show);
	GetDlgItem(IDC_EDIT24)->ShowWindow(show);
	GetDlgItem(IDC_EDIT25)->ShowWindow(show);
	GetDlgItem(IDC_EDIT26)->ShowWindow(show);
	GetDlgItem(IDC_EDIT27)->ShowWindow(show);
	GetDlgItem(IDC_EDIT28)->ShowWindow(show);
	GetDlgItem(IDC_EDIT29)->ShowWindow(show);
	GetDlgItem(IDC_EDIT30)->ShowWindow(show);
	GetDlgItem(IDC_EDIT31)->ShowWindow(show);
	GetDlgItem(IDC_EDIT32)->ShowWindow(show);

	GetDlgItem(IDC_ANS1)->ShowWindow(show);
	GetDlgItem(IDC_ANS2)->ShowWindow(show);
	GetDlgItem(IDC_ANS3)->ShowWindow(show);
	GetDlgItem(IDC_ANS4)->ShowWindow(show);
	GetDlgItem(IDC_ANS5)->ShowWindow(show);
	GetDlgItem(IDC_ANS6)->ShowWindow(show);
	GetDlgItem(IDC_ANS7)->ShowWindow(show);
	GetDlgItem(IDC_ANS8)->ShowWindow(show);
	GetDlgItem(IDC_ANS9)->ShowWindow(show);
	GetDlgItem(IDC_ANS10)->ShowWindow(show);
	GetDlgItem(IDC_ANS11)->ShowWindow(show);
	GetDlgItem(IDC_ANS12)->ShowWindow(show);
	GetDlgItem(IDC_ANS13)->ShowWindow(show);
	GetDlgItem(IDC_ANS14)->ShowWindow(show);
	GetDlgItem(IDC_ANS15)->ShowWindow(show);
	GetDlgItem(IDC_ANS16)->ShowWindow(show);
	GetDlgItem(IDC_ANS17)->ShowWindow(show);
	GetDlgItem(IDC_ANS18)->ShowWindow(show);
	GetDlgItem(IDC_ANS19)->ShowWindow(show);
	GetDlgItem(IDC_ANS20)->ShowWindow(show);
	GetDlgItem(IDC_ANS21)->ShowWindow(show);
	GetDlgItem(IDC_ANS22)->ShowWindow(show);
	GetDlgItem(IDC_ANS23)->ShowWindow(show);
	GetDlgItem(IDC_ANS24)->ShowWindow(show);
	GetDlgItem(IDC_ANS25)->ShowWindow(show);
	GetDlgItem(IDC_ANS26)->ShowWindow(show);
	GetDlgItem(IDC_ANS27)->ShowWindow(show);
	GetDlgItem(IDC_ANS28)->ShowWindow(show);
	GetDlgItem(IDC_ANS29)->ShowWindow(show);
	GetDlgItem(IDC_ANS30)->ShowWindow(show);
	GetDlgItem(IDC_ANS31)->ShowWindow(show);
	GetDlgItem(IDC_ANS32)->ShowWindow(show);

	GetDlgItem(IDC_WORDSHOW)->ShowWindow(show);
	GetDlgItem(IDC_TESTBN)->ShowWindow(show);
	GetDlgItem(IDC_SOL)->ShowWindow(show);
	GetDlgItem(IDC_EX)->ShowWindow(show);
	GetDlgItem(IDC_NUM)->ShowWindow(show);
	GetDlgItem(IDC_PRON)->ShowWindow(show);
	GetDlgItem(IDC_SAVE)->ShowWindow(show);
	GetDlgItem(IDC_EDITBIG)->ShowWindow(show);
}

void CMFCApplicationDlg::nameID_DAY()
{
	GetDlgItem(IDC_BUTTON1)->SetWindowText(_T("DAY1"));
	GetDlgItem(IDC_BUTTON2)->SetWindowText(_T("DAY2"));
	GetDlgItem(IDC_BUTTON3)->SetWindowText(_T("DAY3"));
	GetDlgItem(IDC_BUTTON4)->SetWindowText(_T("DAY4"));
	GetDlgItem(IDC_BUTTON5)->SetWindowText(_T("DAY5"));
	GetDlgItem(IDC_BUTTON6)->SetWindowText(_T("DAY6"));
	GetDlgItem(IDC_BUTTON7)->SetWindowText(_T("DAY7"));
	GetDlgItem(IDC_BUTTON8)->SetWindowText(_T("DAY8"));
	GetDlgItem(IDC_BUTTON9)->SetWindowText(_T("DAY9"));
	GetDlgItem(IDC_BUTTON10)->SetWindowText(_T("DAY10"));
	GetDlgItem(IDC_BUTTON11)->SetWindowText(_T("DAY11"));
	GetDlgItem(IDC_BUTTON12)->SetWindowText(_T("DAY12"));
	GetDlgItem(IDC_BUTTON13)->SetWindowText(_T("DAY13"));
	GetDlgItem(IDC_BUTTON14)->SetWindowText(_T("DAY14"));
	GetDlgItem(IDC_BUTTON15)->SetWindowText(_T("DAY15"));
	GetDlgItem(IDC_BUTTON16)->SetWindowText(_T("DAY16"));
	GetDlgItem(IDC_BUTTON17)->SetWindowText(_T("DAY17"));
	GetDlgItem(IDC_BUTTON18)->SetWindowText(_T("DAY18"));
	GetDlgItem(IDC_BUTTON19)->SetWindowText(_T("DAY19"));
	GetDlgItem(IDC_BUTTON20)->SetWindowText(_T("DAY20"));
	GetDlgItem(IDC_BUTTON21)->SetWindowText(_T("DAY21"));
	GetDlgItem(IDC_BUTTON22)->SetWindowText(_T("DAY22"));
	GetDlgItem(IDC_BUTTON23)->SetWindowText(_T("DAY23"));
	GetDlgItem(IDC_BUTTON24)->SetWindowText(_T("DAY24"));
	GetDlgItem(IDC_BUTTON25)->SetWindowText(_T("DAY25"));
	GetDlgItem(IDC_BUTTON26)->SetWindowText(_T("DAY26"));
	GetDlgItem(IDC_BUTTON27)->SetWindowText(_T("DAY27"));
	GetDlgItem(IDC_BUTTON28)->SetWindowText(_T("DAY28"));
	GetDlgItem(IDC_BUTTON29)->SetWindowText(_T("DAY29"));
	GetDlgItem(IDC_BUTTON30)->SetWindowText(_T("DAY30"));

}

void CMFCApplicationDlg::nameID_AtoZ()
{
	GetDlgItem(IDC_BUTTON1)->SetWindowText(_T("A"));
	GetDlgItem(IDC_BUTTON2)->SetWindowText(_T("A"));
	GetDlgItem(IDC_BUTTON3)->SetWindowText(_T("A"));
	GetDlgItem(IDC_BUTTON4)->SetWindowText(_T("A, B"));
	GetDlgItem(IDC_BUTTON5)->SetWindowText(_T("B, C"));
	GetDlgItem(IDC_BUTTON6)->SetWindowText(_T("C"));
	GetDlgItem(IDC_BUTTON7)->SetWindowText(_T("C"));
	GetDlgItem(IDC_BUTTON8)->SetWindowText(_T("C"));
	GetDlgItem(IDC_BUTTON9)->SetWindowText(_T("C, D"));
	GetDlgItem(IDC_BUTTON10)->SetWindowText(_T("D"));
	GetDlgItem(IDC_BUTTON11)->SetWindowText(_T("D, E"));
	GetDlgItem(IDC_BUTTON12)->SetWindowText(_T("E"));
	GetDlgItem(IDC_BUTTON13)->SetWindowText(_T("E, F"));
	GetDlgItem(IDC_BUTTON14)->SetWindowText(_T("F"));
	GetDlgItem(IDC_BUTTON15)->SetWindowText(_T("F, G, H, I"));
	GetDlgItem(IDC_BUTTON16)->SetWindowText(_T("I"));
	GetDlgItem(IDC_BUTTON17)->SetWindowText(_T("I, J, K"));
	GetDlgItem(IDC_BUTTON18)->SetWindowText(_T("L, M"));
	GetDlgItem(IDC_BUTTON19)->SetWindowText(_T("M, N"));
	GetDlgItem(IDC_BUTTON20)->SetWindowText(_T("N, O"));
	GetDlgItem(IDC_BUTTON21)->SetWindowText(_T("O, P"));
	GetDlgItem(IDC_BUTTON22)->SetWindowText(_T("P"));
	GetDlgItem(IDC_BUTTON23)->SetWindowText(_T("P, Q, R"));
	GetDlgItem(IDC_BUTTON24)->SetWindowText(_T("R"));
	GetDlgItem(IDC_BUTTON25)->SetWindowText(_T("R"));
	GetDlgItem(IDC_BUTTON26)->SetWindowText(_T("R, S"));
	GetDlgItem(IDC_BUTTON27)->SetWindowText(_T("S"));
	GetDlgItem(IDC_BUTTON28)->SetWindowText(_T("S"));
	GetDlgItem(IDC_BUTTON29)->SetWindowText(_T("S, T"));
	GetDlgItem(IDC_BUTTON30)->SetWindowText(_T("T,U,V,W,Y"));
}
void CMFCApplicationDlg::OnMenuDay()
{
	mode = 1;
	ControlDisplay_DAY(SW_SHOW);
	GetDlgItem(IDC_PRON)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_SAVE)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_EDITBIG)->ShowWindow(SW_HIDE);
	nameID_DAY();

	// clean 
	memset(day, 0, 31 * sizeof(int));
	GetDlgItem(IDC_SOL)->SetWindowText(_T(""));
	GetDlgItem(IDC_EX)->SetWindowText(_T(""));
	GetDlgItem(IDC_NUM)->SetWindowText(_T(""));
	for (int i = 0; i < 32; i++)
		GetDlgItem(IDC_EDIT1 + i)->SetWindowText(_T(""));

	for (int i = IDC_BUTTON1; i < IDC_BUTTON1 + 30; i++)
	{
		GetDlgItem(i)->RedrawWindow();
		GetDlgItem(i)->InvalidateRect(NULL);
	}

	// Re-draw the color of word
	changeColor_ID = 0; // 還原
	for (int i = IDC_EDIT1; i < IDC_EDIT1 + 32; i++)
	{
		GetDlgItem(i)->RedrawWindow();
		GetDlgItem(i)->InvalidateRect(NULL);
	}
	chShow = false;
}


void CMFCApplicationDlg::OnMenuAll()
{
	mode = 2;
	ControlDisplay_DAY(SW_SHOW);
	GetDlgItem(IDC_PRON)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_SAVE)->ShowWindow(SW_HIDE);
	GetDlgItem(IDC_EDITBIG)->ShowWindow(SW_HIDE);
	nameID_AtoZ();

	// clean 
	memset(day, 0, 31 * sizeof(int));
	GetDlgItem(IDC_SOL)->SetWindowText(_T(""));
	GetDlgItem(IDC_EX)->SetWindowText(_T(""));
	GetDlgItem(IDC_NUM)->SetWindowText(_T(""));
	for (int i = 0; i < 32; i++)
		GetDlgItem(IDC_EDIT1 + i)->SetWindowText(_T(""));

	for (int i = IDC_BUTTON1; i < IDC_BUTTON1 + 30; i++)
	{
		GetDlgItem(i)->RedrawWindow();
		GetDlgItem(i)->InvalidateRect(NULL);
	}

	// Re-draw the color of word
	changeColor_ID = 0; // 還原
	for (int i = IDC_EDIT1; i < IDC_EDIT1 + 32; i++)
	{
		GetDlgItem(i)->RedrawWindow();
		GetDlgItem(i)->InvalidateRect(NULL);
	}
	chShow = false;
	getAllWords(); // 轉換為紀錄所有單字的陣列


}

// http://www.codeproject.com/Articles/1191/A-very-simple-MP-Player
void CMFCApplicationDlg::OnBnClickedPron()
{
	// Create test dialog
	voice_Dlg = new voiceDlg(this);
	voice_Dlg->mDay = getDay[0];
	BOOL kk = voice_Dlg->Create(IDD_VOICE, NULL);
	voice_Dlg->ShowWindow(SW_SHOWNORMAL);  // 注意: 一定要 showWindow 否則秀不出來

	CString out_Num;
	out_Num.Format(_T("DAY-%d"), getDay[0]);
	voice_Dlg->GetDlgItem(IDC_DAY)->SetWindowText(out_Num);
	
	CRect m_rect;
	this->GetWindowRect(m_rect);
	CRect m_rect2;
	voice_Dlg->GetWindowRect(m_rect2);
	voice_Dlg->SetWindowPos(&wndTop, m_rect.left + m_rect.Width() - m_rect2.Width(), m_rect.bottom, 0, 0, SWP_SHOWWINDOW | SWP_NOSIZE);

}


void CMFCApplicationDlg::OnBnClickedSave()
{
	char line[20000],temp[20000];
	char filename[20] = "EnglishWords.txt"; //========== My English Words List ==========
	fstream fr;
	int j = 0;
	fr.open(filename, ios::in);
	while (fr.getline(line, sizeof(line), '\n')){	
		cout << line << endl;

		for (int i = 0; line[i]!='\0';i++,j++)
			temp[j] = line[i];

		temp[j] = '\n';
		j++;
	}
	fr.close();

	fstream fp;
	fp.open(filename, ios::out);

	// Copy previous text content
	for (int i = 0; i <j; i++)
		fp << temp[i];

	// Storage the word we select, and the rank of the word
	fp << saveRank << "\t" << saveWord << endl;

	fp.close();

	// Create dialog
	save_Dlg = new saveDlg(this);
	BOOL kk = save_Dlg->Create(IDD_SAVEMSG, NULL);
	save_Dlg->ShowWindow(SW_SHOWNORMAL);  // 注意: 一定要 showWindow 否則秀不出來

	CRect m_rect;
	this->GetWindowRect(m_rect);
	CRect m_rect2;
	save_Dlg->GetWindowRect(m_rect2);
	save_Dlg->SetWindowPos(&wndTop, int(m_rect.left + m_rect.Width() / 2 + 10), int(m_rect.Height() / 2 + 80), 0, 0, SWP_SHOWWINDOW | SWP_NOSIZE);

}

void CMFCApplicationDlg::OnCancel()
{
	// TODO: 在此加入特定的程式碼和 (或) 呼叫基底類別
	DestroyWindow();
}

void CMFCApplicationDlg::PostNcDestroy()
{
	// TODO: 在此加入特定的程式碼和 (或) 呼叫基底類別

	CDialog::PostNcDestroy();

	//if (menuEND == false)
		//delete this;
}