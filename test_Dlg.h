#pragma once

#include "functions.h"

class test_Dlg : public CDialogEx
{
	DECLARE_DYNAMIC(test_Dlg)

public:
	test_Dlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~test_Dlg();

// Dialog Data
	enum { IDD = IDD_TEST_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	int day[31];
	Words myWords;

	void trasferData_number(int number);
	void trasferData_English(CString string);
	void trasferData_chienese(CString string);
	void test_Dlg::GetDayFunc(int *DAY);
	void testButtonFlagFunc();
	void resetCount();
	void buttonFunction(int num);
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton10();
	afx_msg void OnBnClickedButton12();
	afx_msg void OnBnClickedButton11();
	afx_msg void OnBnClickedRadio1();
	afx_msg void OnBnClickedRadio2();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton1T();
	afx_msg void OnBnClickedButton2T();
	afx_msg void OnBnClickedButton3T();
	afx_msg void OnBnClickedButton10T();
	afx_msg void OnBnClickedButton9T();
	afx_msg void OnBnClickedButton8T();
	afx_msg void OnBnClickedButton7T();
	afx_msg void OnBnClickedButton6T();
	afx_msg void OnBnClickedButton5T();
	afx_msg void OnBnClickedButton4T();
	afx_msg void OnBnClickedRadioEToC();
	afx_msg void OnBnClickedRadioCToE();
	afx_msg void OnBnClickedButtonUpdate();
};
