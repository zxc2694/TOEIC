// test_Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "MFCApplication.h"
#include "test_Dlg.h"
#include "afxdialogex.h"
#include <stdlib.h>
#include <time.h>
#include <string.h>

CString test_chinese[10];
CString test_English[10];
int test_number[10];
int getDayT[30];
char *chinese[10];
bool testButtonFlag = false;
bool EC = false, CE = false;
int count1 = 0;
int count2 = 0;
int count3 = 0;
int count4 = 0;

IMPLEMENT_DYNAMIC(test_Dlg, CDialogEx)

test_Dlg::test_Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(test_Dlg::IDD, pParent)
{
	srand((int)time(NULL));
}

test_Dlg::~test_Dlg()
{
}

void test_Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(test_Dlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1_T, &test_Dlg::OnBnClickedButton1T)
	ON_BN_CLICKED(IDC_BUTTON2_T, &test_Dlg::OnBnClickedButton2T)
	ON_BN_CLICKED(IDC_BUTTON3_T, &test_Dlg::OnBnClickedButton3T)
	ON_BN_CLICKED(IDC_BUTTON10_T, &test_Dlg::OnBnClickedButton10T)
	ON_BN_CLICKED(IDC_BUTTON9_T, &test_Dlg::OnBnClickedButton9T)
	ON_BN_CLICKED(IDC_BUTTON8_T, &test_Dlg::OnBnClickedButton8T)
	ON_BN_CLICKED(IDC_BUTTON7_T, &test_Dlg::OnBnClickedButton7T)
	ON_BN_CLICKED(IDC_BUTTON6_T, &test_Dlg::OnBnClickedButton6T)
	ON_BN_CLICKED(IDC_BUTTON5_T, &test_Dlg::OnBnClickedButton5T)
	ON_BN_CLICKED(IDC_BUTTON4_T, &test_Dlg::OnBnClickedButton4T)
	ON_BN_CLICKED(IDC_RADIO_E_TO_C, &test_Dlg::OnBnClickedRadioEToC)
	ON_BN_CLICKED(IDC_RADIO_C_TO_E, &test_Dlg::OnBnClickedRadioCToE)
	ON_BN_CLICKED(IDC_BUTTON_UPDATE, &test_Dlg::OnBnClickedButtonUpdate)
END_MESSAGE_MAP()


void test_Dlg::testButtonFlagFunc()
{
	testButtonFlag = false;
}

void test_Dlg::resetCount()
{
	count1 = 0;
	count2 = 0;
	count3 = 0;
	count4 = 0;
}

void test_Dlg::trasferData_chienese(CString string)
{
	test_chinese[count1] = string;
	count1++;
}

void test_Dlg::trasferData_English(CString string)
{
	test_English[count2] = string;
	count2++;
}

void test_Dlg::trasferData_number(int number)
{
	test_number[count3] = number;
	count3++;
}

void test_Dlg::GetDayFunc(int *DAY)
{
	int c = 0;
	for (int i = 0; i < 30; i++)
	{
		if (DAY[i] == 0)
			break;

		getDayT[i] = DAY[i];
	}
	int a = 1;
}

void test_Dlg::buttonFunction(int num)
{
	if (EC == true)
		GetDlgItem(IDC_EDIT_CHIN1 + num - 1)->SetWindowText(test_chinese[num - 1]);

	if (CE == true)
		GetDlgItem(IDC_EDIT1 + num - 1)->SetWindowText(test_English[num - 1]);
}

void test_Dlg::OnBnClickedButton1T()
{
	buttonFunction(1);
}

void test_Dlg::OnBnClickedButton2T()
{
	buttonFunction(2);
}

void test_Dlg::OnBnClickedButton3T()
{
	buttonFunction(3);
}

void test_Dlg::OnBnClickedButton4T()
{
	buttonFunction(4);
}

void test_Dlg::OnBnClickedButton5T()
{
	buttonFunction(5);
}

void test_Dlg::OnBnClickedButton6T()
{
	buttonFunction(6);
}

void test_Dlg::OnBnClickedButton7T()
{
	buttonFunction(7);
}

void test_Dlg::OnBnClickedButton8T()
{
	buttonFunction(8);
}

void test_Dlg::OnBnClickedButton9T()
{
	buttonFunction(9);
}

void test_Dlg::OnBnClickedButton10T()
{
	buttonFunction(10);
}




void test_Dlg::OnBnClickedRadioEToC()
{
	EC = true;
	CE = false;

	for (int i = 0; i < 10; i++)
	{
		CString out_Num;
		out_Num.Format(_T("Rank: %d"), test_number[i]);
		GetDlgItem(IDC_ANSEDIT1 + i)->SetWindowText(out_Num);

		GetDlgItem(IDC_EDIT_CHIN1 + i)->SetWindowText(_T(""));
		GetDlgItem(IDC_EDIT1 + i)->SetWindowText(test_English[i]);
	}

	count1 = 0;
	count2 = 0;
	count3 = 0;
	count4 = 0;
	testButtonFlag = true;
}

void test_Dlg::OnBnClickedRadioCToE()
{
	CE = true;
	EC = false;

	for (int i = 0; i < 10; i++)
	{
		CString out_Num;
		out_Num.Format(_T("Rank: %d"), test_number[i]);
		GetDlgItem(IDC_ANSEDIT1 + i)->SetWindowText(out_Num);

		GetDlgItem(IDC_EDIT1 + i)->SetWindowText(_T(""));
		GetDlgItem(IDC_EDIT_CHIN1 + i)->SetWindowText(test_chinese[i]);
		
		//chinese[i] = test_chinese[i].GetBuffer(test_chinese[i].GetLength());
		//test_chinese[i].ReleaseBuffer();

	}

	count1 = 0;
	count2 = 0;
	count3 = 0;
	count4 = 0;
	testButtonFlag = true;
}


void test_Dlg::OnBnClickedButtonUpdate()
{
	if (testButtonFlag == true)
	{
		// Get random words
		int count = 0, bingoDay = 0, bingoWord = 0, i = 0;

		// How many days are selected
		int c = 0;
		for (int i = 0; i < 30; i++)
		{
			if (getDayT[i] == 0)
				break;
			c++;
		}

		while (count < 10) // Test 10 words
		{
			int X = rand() % c;
			bingoDay = getDayT[X];

			getDayWord(bingoDay, myWords);

			int bingoWord = rand() % 32;

			trasferData_English(myWords.word[bingoWord]);
			trasferData_number(myWords.number[bingoWord]);
			trasferData_chienese(myWords.chinese[bingoWord]);

			i++;
			count++;
		}

		if (EC == true)
		{
			OnBnClickedRadioEToC();
		}
		else
		{
			OnBnClickedRadioCToE();
		}
	}
}