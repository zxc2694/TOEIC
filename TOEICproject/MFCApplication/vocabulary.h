#ifndef __FUNCTION_H__
#define __FUNCTION_H__

#include "stdafx.h"

typedef struct
{
	int number[35];
	CString word[32];
	CString chinese[32];
	CString sentence[32];
	CString ps[32];
	CString ex[200];
	int Rselect;
} Words;

typedef struct
{
	int number[3000];
	CString word[3000];
	CString chinese[3000];
	CString sentence[32];
	CString ps[32];
	CString connect[3000];
	int number_arrange[3000];
	char wordChar[3000][50];
	char word_arrange[3000][50];
} Words_All;

int button_Read(int *d);
void getDayWord(int Day, Words &myWords);
void getWords_Day1(Words &words);
void getWords_Day2(Words &words);
void getWords_Day3(Words &words);
void getWords_Day4(Words &words);
void getWords_Day5(Words &words);
void getWords_Day6(Words &words);
void getWords_Day7(Words &words);
void getWords_Day8(Words &words);
void getWords_Day9(Words &words);
void getWords_Day10(Words &words);
void getWords_Day11(Words &words);
void getWords_Day12(Words &words);
void getWords_Day13(Words &words);
void getWords_Day14(Words &words);
void getWords_Day15(Words &words);
void getWords_Day16(Words &words);
void getWords_Day17(Words &words);
void getWords_Day18(Words &words);
void getWords_Day19(Words &words);
void getWords_Day20(Words &words);
void getWords_Day21(Words &words);
void getWords_Day22(Words &words);
void getWords_Day23(Words &words);
void getWords_Day24(Words &words);
void getWords_Day25(Words &words);
void getWords_Day26(Words &words);
void getWords_Day27(Words &words);
void getWords_Day28(Words &words);
void getWords_Day29(Words &words);
void getWords_Day30(Words &words);

#endif