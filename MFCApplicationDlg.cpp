
// MFCApplicationDlg.cpp : ��@��
//

#include "stdafx.h"
#include "MFCApplication.h"
#include "MFCApplicationDlg.h"
#include "afxdialogex.h"
#include "functions.h"
#include <stdlib.h>
#include <time.h>
#include <string.h>

using namespace std;

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

int changeColor_ID;
// �� App About �ϥ� CAboutDlg ��ܤ��

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// ��ܤ�����
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �䴩

// �{���X��@
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


// CMFCApplicationDlg ��ܤ��



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
END_MESSAGE_MAP()


// CMFCApplicationDlg �T���B�z�`��

BOOL CMFCApplicationDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	
	this->menu.LoadMenu(IDR_MENU1);
	SetMenu(&this->menu);
	//this->menu.CheckMenuRadioItem(ID_MENU_DAY, ID_MENU_ALL, ID_MENU_END, MF_BYCOMMAND);
	Init_hideItem();

	for (int i = 0; i < 30; i++)
	{
		day[i] = 0;
	}
	
	srand((int)time(NULL));

	// IDM_ABOUTBOX �����b�t�ΩR�O�d�򤧤��C
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

	// �]�w����ܤ�����ϥܡC�����ε{�����D�������O��ܤ���ɡA
	// �ج[�|�۰ʱq�Ʀ��@�~
	SetIcon(m_hIcon, TRUE);			// �]�w�j�ϥ�
	SetIcon(m_hIcon, FALSE);		// �]�w�p�ϥ�

	// TODO:  �b���[�J�B�~����l�]�w

	return TRUE;  // �Ǧ^ TRUE�A���D�z�ﱱ��]�w�J�I
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

// �p�G�N�̤p�ƫ��s�[�J�z����ܤ���A�z�ݭn�U�C���{���X�A
// �H�Kø�s�ϥܡC���ϥΤ��/�˵��Ҧ��� MFC ���ε{���A
// �ج[�|�۰ʧ������@�~�C

void CMFCApplicationDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ø�s���˸m���e

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// �N�ϥܸm����Τ�ݯx��
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// �yø�ϥ�
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// ��ϥΪ̩즲�̤p�Ƶ����ɡA
// �t�ΩI�s�o�ӥ\����o�����ܡC
HCURSOR CMFCApplicationDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CMFCApplicationDlg::OnBnClickedTestbn() // ���ճ�r
{
	if (button_Read(day) == 0)
	{
		GetDlgItem(IDC_SOL)->SetWindowText(_T("�п�ܭn���窺DAY�A�̦h����3��"));
	}
	else
	{
		// clean 
		GetDlgItem(IDC_SOL)->SetWindowText(_T(""));
		GetDlgItem(IDC_NUM)->SetWindowText(_T(""));
		for (int i = 0; i < 32; i++)
			GetDlgItem(IDC_EDIT1 + i)->SetWindowText(_T(""));

		// Create test dialog
		test_Dlg *testDlg = new test_Dlg(this);
		BOOL kk = testDlg->Create(IDD_TEST_DIALOG, NULL);
		testDlg->ShowWindow(SW_SHOWNORMAL);  // �`�N: �@�w�n showWindow �_�h�q���X��
		
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

		while (count < 10) // Test 10 words
		{
			int readNum = button_Read(day);
			int X = rand() % readNum;
			bingoDay = getDay[X];						

			getDayWord(bingoDay, myWords);

			int bingoWord = rand() % 32;			

			testDlg->trasferData_English(myWords.word[bingoWord]);
			testDlg->trasferData_number(myWords.number[bingoWord]);
			testDlg->trasferData_chienese(myWords.chinese[bingoWord]);

			/*char *FixChinese, dest[200];
			FixChinese = (char*)(LPCTSTR)myWords.chinese[bingoWord];
			FixChinese = (char*)(LPCTSTR)myWords.word[5];
			char *temp = strstr(FixChinese,"ps.");
			int tempLength = strlen(temp);*/

			count++;
		}	
	}
}

void CMFCApplicationDlg::OnBnClickedWordshow() // ��ܥ�����r���s
{
	for (int i = 0; i < 32; i++)
		myWords.word[i] = _T("");

	int readNum = button_Read(day);
	if (readNum == 1)
	{
		GetDlgItem(IDC_SOL)->SetWindowText(_T(""));

		// Re-draw the color of word
		changeColor_ID = 0;
		for (int i = IDC_EDIT1; i < IDC_EDIT1 + 32; i++)
		{
			GetDlgItem(i)->RedrawWindow();
			GetDlgItem(i)->InvalidateRect(NULL);
		}

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
	else
	{
		//�ë��ɡA��r�椣��ܪF��
		for (int i = 0; i < 32; i++)
			GetDlgItem(IDC_EDIT1 + i)->SetWindowText(_T(""));

		GetDlgItem(IDC_SOL)->SetWindowText(_T("��ܳ�r: �u���ܤ@��DAY\r\n�H������: �i�H��ܦh��DAY�A���H�����10��\r\n\r\n(�ЦA�פ@���w�����DAY�A�i�H����......)"));
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

void CMFCApplicationDlg::OnBnClickedButton1()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON1)->SetWindowText(_T("--�w���--"));
		day[1] = 1;
	}
	else
	{
		GetDlgItem(IDC_BUTTON1)->SetWindowText(_T("DAY1"));
		day[1] = 0;
	}
	n++;
}

void CMFCApplicationDlg::OnBnClickedButton2()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON2)->SetWindowText(_T("--�w���--"));
		day[2] = 1;
	}
	else
	{
		GetDlgItem(IDC_BUTTON2)->SetWindowText(_T("DAY2"));
		day[2] = 0;
	}
	n++;
}

void CMFCApplicationDlg::OnBnClickedButton3()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON3)->SetWindowText(_T("--�w���--"));
		day[3] = 1;
	}
	else
	{
		GetDlgItem(IDC_BUTTON3)->SetWindowText(_T("DAY3"));
		day[3] = 0;
	}
	n++;
}

void CMFCApplicationDlg::OnBnClickedButton4()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON4)->SetWindowText(_T("--�w���--"));
		day[4] = 1;
	}
	else
	{
		GetDlgItem(IDC_BUTTON4)->SetWindowText(_T("DAY4"));
		day[4] = 0;
	}
	n++;
}

void CMFCApplicationDlg::OnBnClickedButton5()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON5)->SetWindowText(_T("--�w���--"));
		day[5] = 1;
	}
	else
	{
		GetDlgItem(IDC_BUTTON5)->SetWindowText(_T("DAY5"));
		day[5] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton6()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON6)->SetWindowText(_T("--�w���--"));
		day[6] = 1;
	}
	else
	{
		GetDlgItem(IDC_BUTTON6)->SetWindowText(_T("DAY6"));
		day[6] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton7()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON7)->SetWindowText(_T("--�w���--"));
		day[7] = 1;
	}
	else
	{
		GetDlgItem(IDC_BUTTON7)->SetWindowText(_T("DAY7"));
		day[7] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton8()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON8)->SetWindowText(_T("--�w���--"));
		day[8] = 1;
	}
	else
	{
		GetDlgItem(IDC_BUTTON8)->SetWindowText(_T("DAY8"));
		day[8] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton9()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON9)->SetWindowText(_T("--�w���--"));
		day[9] = 1;
	}
	else
	{
		GetDlgItem(IDC_BUTTON9)->SetWindowText(_T("DAY9"));
		day[9] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton10()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON10)->SetWindowText(_T("--�w���--"));
		day[10] = 1;
	}
	else
	{
		GetDlgItem(IDC_BUTTON10)->SetWindowText(_T("DAY10"));
		day[10] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton11()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON11)->SetWindowText(_T("--�w���--"));
		day[11] = 1;
	}
	else
	{
		GetDlgItem(IDC_BUTTON11)->SetWindowText(_T("DAY11"));
		day[11] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton12()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON12)->SetWindowText(_T("--�w���--"));
		day[12] = 1;
	}
	else
	{
		GetDlgItem(IDC_BUTTON12)->SetWindowText(_T("DAY12"));
		day[12] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton13()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON13)->SetWindowText(_T("--�w���--"));
		day[13] = 1;
	}
	else
	{
		GetDlgItem(IDC_BUTTON13)->SetWindowText(_T("DAY13"));
		day[13] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton14()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON14)->SetWindowText(_T("--�w���--"));
		day[14] = 1;
	}
	else
	{
		GetDlgItem(IDC_BUTTON14)->SetWindowText(_T("DAY14"));
		day[14] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton15()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON15)->SetWindowText(_T("--�w���--"));
		day[15] = 1;
	}
	else
	{
		GetDlgItem(IDC_BUTTON15)->SetWindowText(_T("DAY15"));
		day[15] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton16()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON16)->SetWindowText(_T("--�w���--"));
		day[16] = 1;
	}
	else
	{
		GetDlgItem(IDC_BUTTON16)->SetWindowText(_T("DAY16"));
		day[16] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton17()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON17)->SetWindowText(_T("--�w���--"));
		day[17] = 1;
	}
	else
	{
		GetDlgItem(IDC_BUTTON17)->SetWindowText(_T("DAY17"));
		day[17] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton18()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON18)->SetWindowText(_T("--�w���--"));
		day[18] = 1;
	}
	else
	{
		GetDlgItem(IDC_BUTTON18)->SetWindowText(_T("DAY18"));
		day[18] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton19()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON19)->SetWindowText(_T("--�w���--"));
		day[19] = 1;
	}
	else
	{
		GetDlgItem(IDC_BUTTON19)->SetWindowText(_T("DAY19"));
		day[19] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton20()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON20)->SetWindowText(_T("--�w���--"));
		day[20] = 1;
	}
	else
	{
		GetDlgItem(IDC_BUTTON20)->SetWindowText(_T("DAY20"));
		day[20] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton21()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON21)->SetWindowText(_T("--�w���--"));
		day[21] = 1;
	}
	else
	{
		GetDlgItem(IDC_BUTTON21)->SetWindowText(_T("DAY21"));
		day[21] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton22()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON22)->SetWindowText(_T("--�w���--"));
		day[22] = 1;
	}
	else
	{
		GetDlgItem(IDC_BUTTON22)->SetWindowText(_T("DAY22"));
		day[22] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton23()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON23)->SetWindowText(_T("--�w���--"));
		day[23] = 1;
	}
	else
	{
		GetDlgItem(IDC_BUTTON23)->SetWindowText(_T("DAY23"));
		day[23] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton24()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON24)->SetWindowText(_T("--�w���--"));
		day[24] = 1;
	}
	else
	{
		GetDlgItem(IDC_BUTTON24)->SetWindowText(_T("DAY24"));
		day[24] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton25()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON25)->SetWindowText(_T("--�w���--"));
		day[25] = 1;
	}
	else
	{
		GetDlgItem(IDC_BUTTON25)->SetWindowText(_T("DAY25"));
		day[25] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton26()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON26)->SetWindowText(_T("--�w���--"));
		day[26] = 1;
	}
	else
	{
		GetDlgItem(IDC_BUTTON26)->SetWindowText(_T("DAY26"));
		day[26] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton27()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON27)->SetWindowText(_T("--�w���--"));
		day[27] = 1;
	}
	else
	{
		GetDlgItem(IDC_BUTTON27)->SetWindowText(_T("DAY27"));
		day[27] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton28()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON28)->SetWindowText(_T("--�w���--"));
		day[28] = 1;
	}
	else
	{
		GetDlgItem(IDC_BUTTON28)->SetWindowText(_T("DAY28"));
		day[28] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton29()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON29)->SetWindowText(_T("--�w���--"));
		day[29] = 1;
	}
	else
	{
		GetDlgItem(IDC_BUTTON29)->SetWindowText(_T("DAY29"));
		day[29] = 0;
	}
	n++;
}


void CMFCApplicationDlg::OnBnClickedButton30()
{
	static int n = 2;
	if (n % 2 == 0)
	{
		GetDlgItem(IDC_BUTTON30)->SetWindowText(_T("--�w���--"));
		day[30] = 1;
	}
	else
	{
		GetDlgItem(IDC_BUTTON30)->SetWindowText(_T("DAY30"));
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
	GetDlgItem(IDC_SOL)->SetWindowText(myWords.chinese[ID - 1] + myWords.ps[ID - 1]);
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
}

HBRUSH CMFCApplicationDlg::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialogEx::OnCtlColor(pDC, pWnd, nCtlColor);

	if (pWnd->GetDlgCtrlID() == changeColor_ID)
	{
		pDC->SetTextColor(RGB(100, 0, 255));  //�]�m�r���C��
		pDC->SetBkMode(TRANSPARENT); //�]�m�r��I�����z��
		// TODO: Return a different brush if the default is not desired
		return (HBRUSH)::GetStockObject(WHITE_BRUSH);  // �]�m�I����
	}
	else
	{
		pDC->SetTextColor(RGB(0, 0, 0));  //�]�m�r���C��
		pDC->SetBkMode(TRANSPARENT); //�]�m�r��I�����z��
		// TODO: Return a different brush if the default is not desired
		return (HBRUSH)::GetStockObject(WHITE_BRUSH);  // �]�m�I����
	}
	//return hbr;
}

void strchrn(char *dest, char *src, char b, char e) 
{
	char *m = strchr(src, b) + 1;
	char *n = strchr(src, e);
	int len = strlen(m) - strlen(n);

	strncpy(dest, m, len);
	dest[len] = '\0';
}


void CMFCApplicationDlg::OnMenuDay()
{
	ControlDisplay_DAY1(SW_SHOW);
}


void CMFCApplicationDlg::OnMenuAll()
{
	Words tempWords;
	int count = 0;
	
	for (int j = 30; j > 22; j--)
	{
		getDayWord(j, tempWords);
		for (int i = 0; i < 32; i++)
		{
			allWords.word[count] = tempWords.word[i];
			allWords.number[count] = tempWords.number[i];
			allWords.chinese[count] = tempWords.chinese[i];
			count++;
		}
	}
	char wordChar[20];
	const TCHAR* unicode_string[3000];
	for (int i = 0; i < count; i++)
	{
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
			}
		}
	}
	int a = 0;
	a++;
}


void CMFCApplicationDlg::OnMenuEnd()
{
	// TODO: Add your command handler code here
}


void CMFCApplicationDlg::OnMenuExplain()
{
	// TODO: Add your command handler code here
}


void CMFCApplicationDlg::OnMenuSetting()
{
	// TODO: Add your command handler code here
}

void CMFCApplicationDlg::Init_hideItem()
{
	ControlDisplay_DAY1(SW_HIDE);
}

void CMFCApplicationDlg::ControlDisplay_DAY1(int show)
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
	GetDlgItem(IDC_NUM)->ShowWindow(show);
	GetDlgItem(IDC_PRON)->ShowWindow(show);
}