#include "stdafx.h"
#include "MFCApplication.h"
#include "MFCApplicationDlg.h"
#include "afxdialogex.h"
#include "vocabulary.h"

int button_Read(int *d) // How many day are selected
{
	int n = 0;
	for (int i = 0; i < 31; i++)
	{
		if (d[i] == 1)
			n++;
	}
	return n;
}

void getDayWord(int Day, Words &myWords)
{
	if (Day == 1)
		getWords_Day1(myWords);

	if (Day == 2)
		getWords_Day2(myWords);

	if (Day == 3)
		getWords_Day3(myWords);

	if (Day == 4)
		getWords_Day4(myWords);

	if (Day == 5)
		getWords_Day5(myWords);

	if (Day == 6)
		getWords_Day6(myWords);

	if (Day == 7)
		getWords_Day7(myWords);

	if (Day == 8)
		getWords_Day8(myWords);

	if (Day == 9)
		getWords_Day9(myWords);

	if (Day == 10)
		getWords_Day10(myWords);

	if (Day == 11)
		getWords_Day11(myWords);

	if (Day == 12)
		getWords_Day12(myWords);

	if (Day == 13)
		getWords_Day13(myWords);

	if (Day == 14)
		getWords_Day14(myWords);

	if (Day == 15)
		getWords_Day15(myWords);

	if (Day == 16)
		getWords_Day16(myWords);

	if (Day == 17)
		getWords_Day17(myWords);

	if (Day == 18)
		getWords_Day18(myWords);

	if (Day == 19)
		getWords_Day19(myWords);

	if (Day == 20)
		getWords_Day20(myWords);

	if (Day == 21)
		getWords_Day21(myWords);

	if (Day == 22)
		getWords_Day22(myWords);

	if (Day == 23)
		getWords_Day23(myWords);

	if (Day == 24)
		getWords_Day24(myWords);

	if (Day == 25)
		getWords_Day25(myWords);

	if (Day == 26)
		getWords_Day26(myWords);

	if (Day == 27)
		getWords_Day27(myWords);

	if (Day == 28)
		getWords_Day28(myWords);

	if (Day == 29)
		getWords_Day29(myWords);

	if (Day == 30)
		getWords_Day30(myWords);
}

void getWords_Day1(Words &words)
{
	words.word[0] = _T("employee"); words.number[0] = 2; words.chinese[0] = _T("n. ���u�B������");	 words.ps[0] = _T("\r\nps. employment (n) ���ΡB�u�@�B�N�~�Femployer (n) ���D");
	words.word[1] = _T("provide"); words.number[1] = 5; words.chinese[1] = _T("v. ���ѡB�ѵ�");	 words.ps[1] = _T("\r\nps. provided (1578)(conj) �H~������B���p�Fprovision (n) �����B�ѵ�");
	words.word[2] = _T("conference"); words.number[2] = 8; words.chinese[2] = _T("n. �|ĳ�B�|��");	 words.ps[2] = _T("");
	words.word[3] = _T("due"); words.number[3] = 11; words.chinese[3] = _T("adj. ������B�w�w���B�ѩ�B�]��~���t�G");	 words.ps[3] = _T("");
	words.word[4] = _T("attend"); words.number[4] = 151; words.chinese[4] = _T("v. �ѥ[�B�X�u�B�`�N");	 words.ps[4] = _T("\r\nps. attendance (n) �ѻP�B�X�u�Fattendee (n) �ѻP�̡B�ѥ[��");
	words.word[5] = _T("account"); words.number[5] = 19; words.chinese[5] = _T("n. �b��B�b�ءFv. �O~����]�B��~����");	 words.ps[5] = _T("\r\nps. accountant (n) �|�p�v");
	words.word[6] = _T("purchase"); words.number[6] = 22; words.chinese[6] = _T("n. �ʶR�B���ʡB�ʶR���Fv. �ʶR�B���o");	 words.ps[6] = _T("");
	words.word[7] = _T("research"); words.number[7] = 25; words.chinese[7] = _T("n. ��s�B�լd�Fv. ��s�B�լd");	 words.ps[7] = _T("");
	words.word[8] = _T("supply"); words.number[8] = 29; words.chinese[8] = _T("v. �ѵ��B���ѡFn. �ѵ��B��Ϋ~");	 words.ps[8] = _T("\r\nps. �ۦ����Gprovide (v)�Csupplier (n) ������");
	words.word[9] = _T("submit"); words.number[9] = 31; words.chinese[9] = _T("v. ����B���e");	 words.ps[9] = _T("\r\nps. submission (n) ����B���e");
	words.word[10] = _T("facility"); words.number[10] = 34; words.chinese[10] = _T("n. �]�ơB�]�I");	 words.ps[10] = _T("");
	words.word[11] = _T("notice"); words.number[11] = 38; words.chinese[11] = _T("n. ���i�B�q���Fv. �`�N��B��ı");	 words.ps[11] = _T("\r\nps. noticeable (adj) ���㪺�B��۪��Fnoticeably (adv) ��ۦa�B����a");
	words.word[12] = _T("available"); words.number[12] = 41; words.chinese[12] = _T("adj. �i�o���B�i�Ϊ��B���Ū�");	 words.ps[12] = _T("\r\nps. avail (v) �ϥΡB�Q�ΡFavailability (n) �i�ΩʡB�i�Ϊ��H/���C\r\n    �ۤϵ��Gunavailable (adj) ���i�Ϊ�");
	words.word[13] = _T("representative"); words.number[13] = 44; words.chinese[13] = _T("n. �N��B�N�z�H�Fadj. �N���B�N�z��");	 words.ps[13] = _T("\r\nps. represent (v) �N��B���");
	words.word[14] = _T("corporation"); words.number[14] = 47; words.chinese[14] = _T("n. ���q�B�k�H");	 words.ps[14] = _T("\r\nps. corporate (adj) �k�H���骺�B���q���Fcooperation (n) �X�@�F\r\n    cooperative (n) �X�@�� (adj) �Mħ�i�˪��B�X�@��");
	words.word[15] = _T("charge"); words.number[15] = 50; words.chinese[15] = _T("n. �O�ΡB�d��");	 words.ps[15] = _T("");
	words.word[16] = _T("process"); words.number[16] = 52; words.chinese[16] = _T("n. �{�ǡB�L�{�Fv. �[�u�B�B�z");	 words.ps[16] = _T("\r\nps. processing (n) �[�u�B�B�z");
	words.word[17] = _T("improve"); words.number[17] = 55; words.chinese[17] = _T("v. �ﵽ�B��}�B�n��");	 words.ps[17] = _T("\r\nps. improvement (n) �ﵽ�B�i�B");
	words.word[18] = _T("prefer"); words.number[18] = 58; words.chinese[18] = _T("v. �����w�B���n");	 words.ps[18] = _T("\r\nps. preferable (adj) ���n���B��i�����Fpreference (n) �ߦn�B���n");
	words.word[19] = _T("inquire"); words.number[19] = 61; words.chinese[19] = _T("v. �߰ݡB�լd");	 words.ps[19] = _T("\r\nps. inquiry (n) �ԸߡB�߰�");
	words.word[20] = _T("apply"); words.number[20] = 64; words.chinese[20] = _T("v. ���x�B�ӽСB�A��");	 words.ps[20] = _T("\r\nps. applicant (n) ���x�̡Fapplication (n) �ӽСB���ΡB�ĥΡB�N��");
	words.word[21] = _T("management"); words.number[21] = 67; words.chinese[21] = _T("n. �޲z�����B�g�綥�h�F�޲z�B�g��");	 words.ps[21] = _T("\r\nps. managerical (1720)(adj) �޲z���B�g�窺�Fmanage (v) �޲z");
	words.word[22] = _T("supervisor"); words.number[22] = 71; words.chinese[22] = _T("n. �D�ޡB�ʷ��̡B�޲z�H");	 words.ps[22] = _T("\r\nps. supervise (v) �ʷ��B�޲z�Fsupervisory (adj) �ʷ����B�޲z��");
	words.word[23] = _T("deliver"); words.number[23] = 74; words.chinese[23] = _T("v. �B�e�B�ǰe");	 words.ps[23] = _T("\r\nps. delivery (n) �B�e�B�뻼");
	words.word[24] = _T("arrange"); words.number[24] = 77; words.chinese[24] = _T("v. �w�ơB�w�ơB�ƦC");	 words.ps[24] = _T("\r\nps. arrangement (n) �w�ơB��z�B�w��\r\n    rearrange (v) ���s�w�ơB����~������");
	words.word[25] = _T("budget"); words.number[25] = 80; words.chinese[25] = _T("n. �w��Fv. �s�C�w��");	 words.ps[25] = _T("");
	words.word[26] = _T("performance"); words.number[26] = 84; words.chinese[26] = _T("n. ���G�B��{�B�t�X");	 words.ps[26] = _T("\r\nps. perform (v) ����B�i��B��t");
	words.word[27] = _T("consider"); words.number[27] = 87; words.chinese[27] = _T("v. �Ҽ{�B�U��");	 words.ps[27] = _T("\r\nps. considerble (896)(adj) �۷��Fconsideration (n) �Ҽ{�B�U�ΡB���");
	words.word[28] = _T("recommend"); words.number[28] = 90; words.chinese[28] = _T("v. ��ĳ�B����");	 words.ps[28] = _T("\r\nps. recommendation (n) ���ˡB��ĳ�Frecommendable (adj) �ȱo���˪�");
	words.word[29] = _T("annual"); words.number[29] = 93; words.chinese[29] = _T("adj. �C�~��");	 words.ps[29] = _T("\r\nps. annually (adv) �C�~�Fbiannual (adj) �C�b�~���B�C�~�⦸��");
	words.word[30] = _T("policy"); words.number[30] = 96; words.chinese[30] = _T("n. �F���B��w�B����");	 words.ps[30] = _T("\r\nps. n. �F���B��w�B����");
	words.word[31] = _T("committee"); words.number[31] = 100; words.chinese[31] = _T("n. �e���|�B�e��");	 words.ps[31] = _T("\r\nps. n. �e���|�B�e��");

	words.ex[0] = _T("Shoes-R-Us Co. recently hired 100 new employees.");
	words.ex[1] = _T("That Italian restaurant provides excellent service for guests.");
	words.ex[2] = _T("Mackey Inc. will hold its annual technology conference in November.");
	words.ex[3] = _T("The next payment is due on February 21.");
	words.ex[4] = _T("Only five people attended the meeting.");
	words.ex[5] = _T("Mr. Scofield opened an account with Foxriver Bank.");
	words.ex[6] = _T("There is a discount on a quantity purchase.");
	words.ex[7] = _T("The marketing  team conducted extensive market research.");
	words.ex[8] = _T("We supply fish to local shops and restaurants.");
	words.ex[9] = _T("Please submit your proposal by tomorrow.");
	words.ex[10] = _T("Phantom Planet hotel has its own leisure facilities.");
	words.ex[11] = _T("Ms. Clementine will post the notice about the conference.");
	words.ex[12] = _T("The government is trying to make more jobs available.");
	words.ex[13] = _T("Our sales representative in the branch office will welcome you.");
	words.ex[14] = _T("Mr. Tylor works for a large multinational corporation.");
	words.ex[15] = _T("You need to pay $20 for the service charge to wash your car.");
	words.ex[16] = _T("Our company has adopted a new work-flow process.");
	words.ex[17] = _T("The financial situation of the shop will not improve.");
	words.ex[18] = _T("Commuters usually prefer public transportation.");
	words.ex[19] = _T("I am calling to inquire about an ad for a downtown apartment.");
	words.ex[20] = _T("Ms. Mika applied for a job with the publishing company.");
	words.ex[21] = _T("All employees should respect management's decision.");
	words.ex[22] = _T("You should receive approval from your direct supervisor.");
	words.ex[23] = _T("The product will be delivered within 48 hours.");
	words.ex[24] = _T("Mr. Thompson arranged a meeting with the sales director.");
	words.ex[25] = _T("The budget for advertising has been cut.");
	words.ex[26] = _T("Any employee can be fired for poor performance.");
	words.ex[27] = _T("The CEO is seriously considering hiring more employees.");
	words.ex[28] = _T("I recommend that you take a rest for a while.");
	words.ex[29] = _T("My annual income is about $45,000.");
	words.ex[30] = _T("All employees should follow the company's policy.");
	words.ex[31] = _T("We will elect the chairman of the committee tomorrow.");

}
void getWords_Day2(Words &words)
{
	words.word[0] = _T("session"); words.number[0] = 103; words.chinese[0] = _T("n. (�V�m�B�ҵ{)�@�q�ɶ��F�|��");	 words.ps[0] = _T("");
	words.word[1] = _T("manufacture"); words.number[1] = 105; words.chinese[1] = _T("v. �s�y�B�s�@�Fn. �s�y�B�Ͳ��B�s�~");	 words.ps[1] = _T("\r\nps. manufacturer (n) �s�y�ӡB�s�y�t�Fmanufacuring (n) �s�y�u�{�B�s�y�~");
	words.word[2] = _T("accept"); words.number[2] = 109; words.chinese[2] = _T("v. �����B�P�N�B�{�i");	 words.ps[2] = _T("\r\nps. acceptable (adj) �i�������B�i�e�\���Facceptance (n) �����B�����B�٦P");
	words.word[3] = _T("concern"); words.number[3] = 112; words.chinese[3] = _T("n. ��ߡB�~�{�Fv. �v�T��B���Y��B�Ͼ�~");	 words.ps[3] = _T("\r\nps. concerned (adj) ��ߪ��B�~�{��");
	words.word[4] = _T("conduct"); words.number[4] = 115; words.chinese[4] = _T("v. �i��B��I�B����(�ֹ�)�Fn. �欰�B���ɡB�޲z�g��");	 words.ps[4] = _T("");
	words.word[5] = _T("resource"); words.number[5] = 118; words.chinese[5] = _T("n. (��a�B���~��)�귽�B�겣�B����");	 words.ps[5] = _T("");
	words.word[6] = _T("access"); words.number[6] = 122; words.chinese[6] = _T("n. �i�J�B�q�D�Fv. ����B(�ιq��)�s����T");	 words.ps[6] = _T("\r\nps. accessible (adj) �i����");
	words.word[7] = _T("candidate"); words.number[7] = 124; words.chinese[7] = _T("n. �Կ�H�B�D¾���x�̡B�ѥ[�Ҹժ��H");	 words.ps[7] = _T("");
	words.word[8] = _T("advance"); words.number[8] = 128; words.chinese[8] = _T("n. (�޳N��)�i�i�B�o�i�Fadj. �ƥ����B�ƫe���Fv. �i�B");	 words.ps[8] = _T("\r\nps. advanced (adj) ���i���B�W�e���Fadvancement (n) �i�B�B�o�i");
	words.word[9] = _T("profit"); words.number[9] = 130; words.chinese[9] = _T("n. ��Q�B�Q��Fv. �o��Q�q");	 words.ps[9] = _T("\r\nps. nonprofit (adj) �D��Q��");
	words.word[10] = _T("mention"); words.number[10] = 132; words.chinese[10] = _T("v. ���A�B����Fn. ���ΡB���_");	 words.ps[10] = _T("");
	words.word[11] = _T("retirement"); words.number[11] = 135; words.chinese[11] = _T("n. �h��B�h��");	 words.ps[11] = _T("\r\nps. retire (v) �h��B�h��");
	words.word[12] = _T("statement"); words.number[12] = 140; words.chinese[12] = _T("n. ��b��B�n���B���z");	 words.ps[12] = _T("");
	words.word[13] = _T("executive"); words.number[13] = 142; words.chinese[13] = _T("n. �D�ޡB����̡Fadj. ��F���B�޲z��");	 words.ps[13] = _T("\r\nps. execute (2703)(v) �I��B����");
	words.word[14] = _T("locate"); words.number[14] = 145; words.chinese[14] = _T("v. �Ϧ��B�]�m��");	 words.ps[14] = _T("\r\nps. location (n) ��m�Flocated (adj) �y��~���B���~��\r\n    relocate (v) �N~�E���O�B�B���s�w�m");
	words.word[15] = _T("participant"); words.number[15] = 148; words.chinese[15] = _T("n. �ѥ[�̡B�ѻP��");	 words.ps[15] = _T("\r\nps. participate (v) �ѥ[�Fparticipation (n) �ѥ[�B�\�P");
	words.word[16] = _T("reserve"); words.number[16] = 153; words.chinese[16] = _T("v. �w�q(�y��B�ж�)�B�O�d(�v�Q��)");	 words.ps[16] = _T("\r\nps. reservation (n) �w�q");
	words.word[17] = _T("expense"); words.number[17] = 156; words.chinese[17] = _T("n. ��X�B��O�B�g�O");	 words.ps[17] = _T("\r\nps. expensive (adj) ���Q���Finexpensive (adj) ���Q��");
	words.word[18] = _T("opportunity"); words.number[18] = 158; words.chinese[18] = _T("n. ���|�B�}��");	 words.ps[18] = _T("");
	words.word[19] = _T("transfer"); words.number[19] = 161; words.chinese[19] = _T("n. �հʡB�ഫ�Fv. ���ഫ�B����");	 words.ps[19] = _T("\r\nps. transferable (adj) �i�ಾ���B�i�հʪ�");
	words.word[20] = _T("refund"); words.number[20] = 165; words.chinese[20] = _T("n. �h�ڡB�v�٪��B�Fv.�h�ڡB�v�I");	 words.ps[20] = _T("\r\nps. refundable (adj) �i�h�٪��B�i�v�٪�");
	words.word[21] = _T("expand"); words.number[21] = 168; words.chinese[21] = _T("v. �X�j�B(�N�Ʒ~)�X�R");	 words.ps[21] = _T("\r\nps. expansion (n) �X�R�B�X�j�Fexpansive (adj) �s�j���B���諸");
	words.word[22] = _T("prepare"); words.number[22] = 171; words.chinese[22] = _T("v. �ǳơB�w�ơB�w��");	 words.ps[22] = _T("\r\nps. preparation (n) �ǳ�");
	words.word[23] = _T("register"); words.number[23] = 175; words.chinese[23] = _T("v. ���U�B�n�O�Fn. �n�O�B���U");	 words.ps[23] = _T("\r\nps. registration (n) ���U�Fregistrar (n) �n�O��");
	words.word[24] = _T("benefit"); words.number[24] = 178; words.chinese[24] = _T("n. ���q�B�o��Q�q�Fn. �Q�q�B�u�f�B�z�K");	 words.ps[24] = _T("\r\nps. beneficial (adj) ���q��");
	words.word[25] = _T("receipt"); words.number[25] = 180; words.chinese[25] = _T("n. ���ڡB����B���쪺�ڶ�");	 words.ps[25] = _T("\r\nps. recepient (1298)(n) ����̡B(adj) �i�������B�౵����");
	words.word[26] = _T("organization"); words.number[26] = 183; words.chinese[26] = _T("n. ��´�B�����B����");	 words.ps[26] = _T("\r\nps. organize (v) ��´�Forganizational (adj) ��´��\r\n    reorganize (v) �A/���s��´");
	words.word[27] = _T("colleague"); words.number[27] = 186; words.chinese[27] = _T("n. �P�ơB�P�� = coworker");	 words.ps[27] = _T("");
	words.word[28] = _T("replace"); words.number[28] = 190; words.chinese[28] = _T("v. ���N�B����");	 words.ps[28] = _T("\r\nps. replacement (n) �󴫡B������");
	words.word[29] = _T("despite"); words.number[29] = 192; words.chinese[29] = _T("prep. ����");	 words.ps[29] = _T("\r\nps. ���� in spite of ");
	words.word[30] = _T("clear"); words.number[30] = 194; words.chinese[30] = _T("v. ���\�q�L�B��\�i�J�����}�Fadj. �M�����B���T��");	 words.ps[30] = _T("");
	words.word[31] = _T("forward"); words.number[31] = 198; words.chinese[31] = _T("v. ��F�B��o�Fadv. �V�e�a�Fadj. �V�e���B�e¤�ʪ�");	 words.ps[31] = _T("");

	words.ex[0] = _T("There will be a Q&A session after the presentation.");
	words.ex[1] = _T("The car is manufactured in a plant near Toulouse.");
	words.ex[2] = _T("The union members agreed to accept the employer's final offer.");
	words.ex[3] = _T("He expressed his concern about the director's plan.");
	words.ex[4] = _T("The marketing team conducted a survey of consumer attitudes.");
	words.ex[5] = _T("Our firm has the resources to compete with overseas companies.");
	words.ex[6] = _T("Access to the research laboratory is restricted to technicians.");
	words.ex[7] = _T("Sue Graham is the leading candidate for the promotion.");
	words.ex[8] = _T("Researchers have made many advances in cell phone technology.");
	words.ex[9] = _T("Planton Inc. is expected to post record profits this year.");
	words.ex[10] = _T("He mentioned the idea of establishing an advisory committee.");
	words.ex[11] = _T("We're going to attend the retirement ceremony for Mr. Wang next week.");
	words.ex[12] = _T("PowerBank provides monthly account statements.");
	words.ex[13] = _T("He is a senior executive for a large company.");
	words.ex[14] = _T("Sandy Motel is conveniently located near highway 81.");
	words.ex[15] = _T("Participants in the workshop will receive an information packet.");
	words.ex[16] = _T("Hotel guests should reserve rooms at least one month in advance.");
	words.ex[17] = _T("All expense reports should be sent directly to accounting.");
	words.ex[18] = _T("Inkel Co. offers plenty of oppoortunities for career development.");
	words.ex[19] = _T("I would like to apply for a transfer to the Boston office.");
	words.ex[20] = _T("Preston Retail offers full refunds on all defective products.");
	words.ex[21] = _T("The manufacturing firm is planning to expand its operations.");
	words.ex[22] = _T("Mr. Wilson needs time to prepare for his presentation.");
	words.ex[23] = _T("Mr. Sucre is registering for the course on software programming.");
	words.ex[24] = _T("The export sector is likely to benefit from the new regulations.");
	words.ex[25] = _T("Refunds will only be given to customers who keep their receipts.");
	words.ex[26] = _T("The charity is the region's largest nonprofit organization.");
	words.ex[27] = _T("Ms. Hunt is respected by all her colleagues here at Ace Ltd.");
	words.ex[28] = _T("The current filing system will be replaced with an automated process.");
	words.ex[29] = _T("Despite the bad weather conditions, the plane was able to take off.");
	words.ex[30] = _T("The traveler cleared airport customs with little trouble.");
	words.ex[31] = _T("I will forward your complaint to my supervisor.");

}
void getWords_Day3(Words &words)
{
	words.word[0] = _T("property"); words.number[0] = 203; words.chinese[0] = _T("n.�]���B�Ҧ����B���ʲ�");	 words.ps[0] = _T("");
	words.word[1] = _T("consumer"); words.number[1] = 206; words.chinese[1] = _T("n. ���O��");	 words.ps[1] = _T("\r\nps. consume (v) ���O�Fconsumption (n) ���O");
	words.word[2] = _T("raise"); words.number[2] = 208; words.chinese[2] = _T("n. �����Fv. �ɰ_�B�ϦV�W");	 words.ps[2] = _T("");
	words.word[3] = _T("indicate"); words.number[3] = 211; words.chinese[3] = _T("v. ��ܡB���X�B�N��B�H�x");	 words.ps[3] = _T("\r\nps. indication (n) ���ܡB�x���Findicator (n) ���ܾ��B���w�F\r\n    indicative (adj) ��ܪ��B�t�ܪ�");
	words.word[4] = _T("permit"); words.number[4] = 214; words.chinese[4] = _T("v. �\�i�B���\�Fn. �\�i(��)");	 words.ps[4] = _T("\r\nps. permission (n) �\�i�B���\");
	words.word[5] = _T("rent"); words.number[5] = 216; words.chinese[5] = _T("v. (�ЫΡB�g�a��)���ɡFn. ���ɡB�����B�Я�");	 words.ps[5] = _T("\r\nps. rental (n) ���ɡB�X��(��)�F(adj) �ѥX����");
	words.word[6] = _T("shipment"); words.number[6] = 218; words.chinese[6] = _T("n. �B�e�B�˹B");	 words.ps[6] = _T("\r\nps. shipping (n) �B��(�~)�Fship (n) ��Bĥ");
	words.word[7] = _T("distribute"); words.number[7] = 222; words.chinese[7] = _T("v. ���o�B���t");	 words.ps[7] = _T("\r\nps. distribution (n) ���o�B���t�Fdistributor (n) ��o��");
	words.word[8] = _T("stock"); words.number[8] = 226; words.chinese[8] = _T("n. �Ѳ� (=share)�B�w�s�B�x�áFv. �s�f");	 words.ps[8] = _T("\r\nps. stockholder (n) �ѪF");
	words.word[9] = _T("regulation"); words.number[9] = 229; words.chinese[9] = _T("n. �W�w�B�W�d�B�k�W");	 words.ps[9] = _T("\r\nps. regulate (v) �W�d�B�޲z�B�վ�");
	words.word[10] = _T("exhibit"); words.number[10] = 233; words.chinese[10] = _T("v. �i�ܡB���S�Fn. �i��");	 words.ps[10] = _T("\r\nps. exhibition (n) �i�ܷ|");
	words.word[11] = _T("estimate"); words.number[11] = 236; words.chinese[11] = _T("n. �����B�����B���p�B�����Fv. ����");	 words.ps[11] = _T("");
	words.word[12] = _T("quarter"); words.number[12] = 241; words.chinese[12] = _T("n. �u�`�B�T�Ӥ�B�|�����@�Fadj. �|�����@���Fv. ��~�|����");	 words.ps[12] = _T("\r\nps. quarterly (adj) �u���F(adv) �@�u�a");
	words.word[13] = _T("necessary"); words.number[13] = 244; words.chinese[13] = _T("adj. ���n���B����S�����Fn. ���ݫ~");	 words.ps[13] = _T("\r\nps. necessity (n) ���n�B���ݫ~�Fnecessitate (v) �Ϧ�������");
	words.word[14] = _T("encourage"); words.number[14] = 245; words.chinese[14] = _T("v. ���y�B�P�i");	 words.ps[14] = _T("\r\nps. encouragement (n) ���y�B�P�i");
	words.word[15] = _T("resume"); words.number[15] = 248; words.chinese[15] = _T("n. �i����Fv. ���s�}�l�B��_�B�~��");	 words.ps[15] = _T("");
	words.word[16] = _T("responsible"); words.number[16] = 253; words.chinese[16] = _T("adj. ���d�����B�i�H�઺");	 words.ps[16] = _T("\r\nps. responsibility (n) �d��");
	words.word[17] = _T("invoice"); words.number[17] = 255; words.chinese[17] = _T("n. �X�f���ӡB�o�f��");	 words.ps[17] = _T("");
	words.word[18] = _T("standard"); words.number[18] = 257; words.chinese[18] = _T("n. �зǡB��ǡB�W��Fadj. �зǪ��B�W�d��");	 words.ps[18] = _T("\r\nps. standardize (v) �ϳW��ơB�ϼзǤơFstandardization (n) �зǤ�");
	words.word[19] = _T("legal"); words.number[19] = 261; words.chinese[19] = _T("adj. �k�ߪ��B�X�k��");	 words.ps[19] = _T("\r\nps. �ۤϵ��Gillegal (adj) ���X�k");
	words.word[20] = _T("confirm"); words.number[20] = 264; words.chinese[20] = _T("v. �T�{�F�ӻ{�B�T�w");	 words.ps[20] = _T("\r\nps. confirmation (n) �T�{�Frecomfirm (v) �A�T�{");
	words.word[21] = _T("extend"); words.number[21] = 266; words.chinese[21] = _T("v. �����B�X�j�B���i");	 words.ps[21] = _T("\r\nps. extensive (adj) �s�諸�B�s�x���B�j�q��");
	words.word[22] = _T("reduce"); words.number[22] = 269; words.chinese[22] = _T("v. ��֡B���C�B�Y�u");	 words.ps[22] = _T("\r\nps. reduction (n) ���");
	words.word[23] = _T("individual"); words.number[23] = 273; words.chinese[23] = _T("adj. �ӤH���B�ӧO���Fn. �ӤH");	 words.ps[23] = _T("\r\nps. individually (adv) �ӧO�a");
	words.word[24] = _T("limit"); words.number[24] = 276; words.chinese[24] = _T("v. ����B���w�Fn. �ɽu�B����B�Ҭ�");	 words.ps[24] = _T("\r\nps. limitation (n) ����B����");
	words.word[25] = _T("appreciate"); words.number[25] = 279; words.chinese[25] = _T("v. �P�¡B�Y��B���T�a����");	 words.ps[25] = _T("\r\nps. appreciation (n) �P�E�B���ѡB�P��");
	words.word[26] = _T("deposit"); words.number[26] = 282; words.chinese[26] = _T("n. �s�ڡB�q���B�O�Ҫ��Fv. �s�J�Ȧ�B�I(�q��)");	 words.ps[26] = _T("");
	words.word[27] = _T("revise"); words.number[27] = 285; words.chinese[27] = _T("v. �ץ��B�׭q");	 words.ps[27] = _T("\r\nps. revision (n) �ץ��B�׭q��");
	words.word[28] = _T("notify"); words.number[28] = 291; words.chinese[28] = _T("v. �q���B�q��");	 words.ps[28] = _T("\r\nps. notification (n) �q���B�q��");
	words.word[29] = _T("regard"); words.number[29] = 293; words.chinese[29] = _T("v. �{���O~�B�����B�Ҽ{�Fn. �Ҽ{�B�L���B�ݭ�");	 words.ps[29] = _T("\r\nps. �ۤϵ��Gdisregard (v) �z���B�����B���L���F(n) �����ߡB�z��");
	words.word[30] = _T("select"); words.number[30] = 297; words.chinese[30] = _T("v. ��ܡB�D��B��ޡFadj. ��諸�Fn. ���");	 words.ps[30] = _T("\r\nps. selection (n) ��ܡB���");
	words.word[31] = _T("identification"); words.number[31] = 299; words.chinese[31] = _T("n. �����ҩ��B���");	 words.ps[31] = _T("\r\nps. identical (2508)(adj) �P�˪��B�@�Ҥ@�˪��F\r\n    identify (v) �T�{�BŲ�O�X�B�o�{");

	words.ex[0] = _T("The company needs to protect its intellectual property.");
	words.ex[1] = _T("The advertisement for jeans is aimed at young consumers.");
	words.ex[2] = _T("The workers are demanding a 5% raise.");
	words.ex[3] = _T("The red light indicates that the batteries are low.");
	words.ex[4] = _T("Manley Hotel doesa not permit guests to bring pets.");
	words.ex[5] = _T("We need to rent a bigger office space.");
	words.ex[6] = _T("Your order will be ready for shipment tomorrow.");
	words.ex[7] = _T("We will distribute pamphlets at the marketing conference.");
	words.ex[8] = _T("The company's stock price increased for the fifth consecutive day.");
	words.ex[9] = _T("Parking here is definitely a violation of the regulation.");
	words.ex[10] = _T("A famous painting of Picasso is being exhibited at the gallery.");
	words.ex[11] = _T("The contractor provided an estimate for the work.");
	words.ex[12] = _T("The sales team is determined to make a profit this quarter.");
	words.ex[13] = _T("The travel agent made the necessary arrangements for your trip.");
	words.ex[14] = _T("Tax incentives will encourage small businesses to invest in new technology.");
	words.ex[15] = _T("Please submit your resume to the personnel manager.");
	words.ex[16] = _T("The manager is responsible for maintaining safety standards.");
	words.ex[17] = _T("Your invoice and our order do not match.");
	words.ex[18] = _T("Our new electric equipment meets current industry standards.");
	words.ex[19] = _T("The company will contact their attorneys to take further legal action.");
	words.ex[20] = _T("Please confirm that you have received our shipment.");
	words.ex[21] = _T("Mr. Collins wants to extend his contract with the company.");
	words.ex[22] = _T("The original budget for the building will be reduced due to financial problems.");
	words.ex[23] = _T("Is that corporate or individual reservation?");
	words.ex[24] = _T("The number of parking spaces is limited.");
	words.ex[25] = _T("We really appreciate your donations.");
	words.ex[26] = _T("The statement indicates that you have made several deposits recently.");
	words.ex[27] = _T("Mr. Don revised his earlier estimate for regional economic growth.");
	words.ex[28] = _T("We'll need to notify passengers of the flight delay.");
	words.ex[29] = _T("The CEO is regarded as an excellent leader.");
	words.ex[30] = _T("Before you print, select the size of the paper.");
	words.ex[31] = _T("Staff should carry their identification cards at all times.");

}
void getWords_Day4(Words &words)
{
	words.word[0] = _T("local"); words.number[0] = 303; words.chinese[0] = _T("adj. ��a���B�a�誺");	 words.ps[0] = _T("\r\nps. localize (v) ��a�ơFlocalization (n) ��a�ơB���g��");
	words.word[1] = _T("contract"); words.number[1] = 305; words.chinese[1] = _T("n. �X��(��)�Bñ�q�X���B�N�u�@�ӥ]��");	 words.ps[1] = _T("");
	words.word[2] = _T("board"); words.number[2] = 309; words.chinese[2] = _T("n. ���Ʒ|�B�z�Ʒ|�B�e���B���B�|�B���Fv. �n�W");	 words.ps[2] = _T("");
	words.word[3] = _T("potential"); words.number[3] = 311; words.chinese[3] = _T("n. ��O�B�i��ʡFadj. �i�઺�B��b��");	 words.ps[3] = _T("");
	words.word[4] = _T("delay"); words.number[4] = 314; words.chinese[4] = _T("v. ����B�����Fn. ����B����");	 words.ps[4] = _T("");
	words.word[5] = _T("procedure"); words.number[5] = 318; words.chinese[5] = _T("n. �{�ǡB����");	 words.ps[5] = _T("");
	words.word[6] = _T("approve"); words.number[6] = 322; words.chinese[6] = _T("v. ���B�{�i�B�٦�");	 words.ps[6] = _T("\r\nps. approval (n) �٦��B�P�N�B���");
	words.word[7] = _T("institute"); words.number[7] = 323; words.chinese[7] = _T("n. ���c�B��|�Fv. �]�ߡB��w");	 words.ps[7] = _T("\r\nps. institution (n) ���c�B�]�ߡB��סB�߫U");
	words.word[8] = _T("issue"); words.number[8] = 327; words.chinese[8] = _T("v. �o�X�B�{���Fn. ��ĳ�B�o��B����");	 words.ps[8] = _T("");
	words.word[9] = _T("branch"); words.number[9] = 328; words.chinese[9] = _T("n. �����q�B����B��K�Fv. ����B����");	 words.ps[9] = _T("");
	words.word[10] = _T("predict"); words.number[10] = 331; words.chinese[10] = _T("v. �w���B�w��");	 words.ps[10] = _T("\r\nps. prediction (n) �w���B�w���Fpredictable (adj) �i�w�ƪ�");
	words.word[11] = _T("maintenance"); words.number[11] = 335; words.chinese[11] = _T("n. �O�i�޲z�B����B����");	 words.ps[11] = _T("\r\nps. maintain (v) ���סB�O�i�B�����B���");
	words.word[12] = _T("entire"); words.number[12] = 339; words.chinese[12] = _T("adj. ��Ӫ��B���骺�B������");	 words.ps[12] = _T("\r\nps. ������ = entirety of�Fentirely (adv) �����a�B�����a");
	words.word[13] = _T("lower"); words.number[13] = 342; words.chinese[13] = _T("v. ���C�B��֡B�S�C�B�X�{�T�e�Fadj. �U�誺�B���Ū�");	 words.ps[13] = _T("");
	words.word[14] = _T("shift"); words.number[14] = 346; words.chinese[14] = _T("n. ���ȯZ�B�ܤơB�ഫ�Fv. ���ܦ�m�Τ�V�B�ಾ");	 words.ps[14] = _T("");
	words.word[15] = _T("attach"); words.number[15] = 349; words.chinese[15] = _T("v. �K�W�B���W�B�Ϫ���");	 words.ps[15] = _T("\r\nps. �ۤϵ��Gdetach (v)(2587) �K�U�Cattached (adj) ���[���B���ݪ��F\r\n    attachment (n) ���a�B����");
	words.word[16] = _T("claim"); words.number[16] = 352; words.chinese[16] = _T("v. �n�١B�n�D�B�D�i�Fn. �D�i�B�n�D");	 words.ps[16] = _T("");
	words.word[17] = _T("promotion"); words.number[17] = 355; words.chinese[17] = _T("n. �ʯšB�ʤɡB�P�P");	 words.ps[17] = _T("");
	words.word[18] = _T("publication"); words.number[18] = 358; words.chinese[18] = _T("n. �X��(�~)�B�o��");	 words.ps[18] = _T("\r\nps. publish (v) �X���B�o��Fpublishing (n) �X���~");
	words.word[19] = _T("suppose"); words.number[19] = 360; words.chinese[19] = _T("v. �{�������B���w�B�Q���B����");	 words.ps[19] = _T("");
	words.word[20] = _T("reference"); words.number[20] = 364; words.chinese[20] = _T("n. �ѦҡB���ΡB���ˮ�");	 words.ps[20] = _T("\r\nps. refer to (v) �ѦҡB����");
	words.word[21] = _T("establish"); words.number[21] = 367; words.chinese[21] = _T("v. �إߡB�]��");	 words.ps[21] = _T("\r\nps. establishment (n) �]�ߡB�ХߡFestablished (adj) ��w���B�]�ߪ�");
	words.word[22] = _T("merchandise"); words.number[22] = 370; words.chinese[22] = _T("n. �ӫ~�B���~");	 words.ps[22] = _T("\r\nps. merchant (n) �ӤH");
	words.word[23] = _T("associate"); words.number[23] = 374; words.chinese[23] = _T("n. �٦�B�P�ơFv. �Ϧ����p�Fadj. �P�ƪ��B¾�Ÿ��p��");	 words.ps[23] = _T("\r\nps. association (n) ����B��|");
	words.word[24] = _T("banquet"); words.number[24] = 378; words.chinese[24] = _T("n. (������)�b�|�B���b");	 words.ps[24] = _T("");
	words.word[25] = _T("lean"); words.number[25] = 381; words.chinese[25] = _T("v. �a�b�B�ϱ׾a�B�ɦV�B�̾a");	 words.ps[25] = _T("");
	words.word[26] = _T("examine"); words.number[26] = 384; words.chinese[26] = _T("v. �˵��B�ˬd�B�E��B����");	 words.ps[26] = _T("\r\nps. examination (n) �լd�B�f�d�B����Fexaminer (n) �f�d���B�D�ҩx");
	words.word[27] = _T("finance"); words.number[27] = 386; words.chinese[27] = _T("v. ���Ѹ���B�w�ڡF�]�F�B�]��");	 words.ps[27] = _T("\r\nps. finacial (adj) �]�F�W���Ffinacing (n) �ի׸��");
	words.word[28] = _T("appropriate"); words.number[28] = 391; words.chinese[28] = _T("adj. �A���B�X�A��");	 words.ps[28] = _T("\r\nps. �ۤϵ��Ginappropriate (adj) ���A�X���C\r\n    appropriately (adv) �A��a�B�X�A�a");
	words.word[29] = _T("warranty"); words.number[29] = 393; words.chinese[29] = _T("n. (�~��)�O�ҡB�O�Ү�");	 words.ps[29] = _T("");
	words.word[30] = _T("investment"); words.number[30] = 396; words.chinese[30] = _T("n. ���B�X��");	 words.ps[30] = _T("\r\nps. invest (v) ���B�X��Finvestor (n) ����");
	words.word[31] = _T("certificate"); words.number[31] = 400; words.chinese[31] = _T("n. �ҩ��ѡB�o�Үѵ�");	 words.ps[31] = _T("\r\nps. certification (n) �{�Ү�");

	words.ex[0] = _T("Visit your local Travel ABC office to inquire about the schedule.");
	words.ex[1] = _T("This contract dosen't work in our favor at all.");
	words.ex[2] = _T("The sales results have not satisfied the board.");
	words.ex[3] = _T("The company has strong potential for growth.");
	words.ex[4] = _T("The shipment has been delayed due to the holidays.");
	words.ex[5] = _T("The bank needs to simplify the complicated procedure for a loan.");
	words.ex[6] = _T("The manager approved my application for leave.");
	words.ex[7] = _T("Dr. Gomez taught at a university before joining the Economic Reserch Institue.");
	words.ex[8] = _T("The company issued an official apology to the dissatisfied customers.");
	words.ex[9] = _T("She manages the new branch in Seattle.");
	words.ex[10] = _T("Financial experts predict that the stock market will crash.");
	words.ex[11] = _T("The accident was due to poor maintenance.");
	words.ex[12] = _T("The enitre division is going to the training session.");
	words.ex[13] = _T("The medication lowers a patient's chances of getting influenza.");
	words.ex[14] = _T("Mr. Thompson works the night shift at the local manufacturing plant.");
	words.ex[15] = _T("I've attached the form to this document.");
	words.ex[16] = _T("Mr. Luala claims that he should get a full refund.");
	words.ex[17] = _T("Ms. Plantini is being considered for the promotion.");
	words.ex[18] = _T("All team members should read shipping industry publications.");
	words.ex[19] = _T("Sales employees are supposed to submit monthly reports.");
	words.ex[20] = _T("Please keep this manual for future reference.");
	words.ex[21] = _T("I can establish good relationships with my clients.");
	words.ex[22] = _T("A variety of Collines' merchandise is now on sale.");
	words.ex[23] = _T("He's currently meeting his business associate.");
	words.ex[24] = _T("Mr. Smyth is making the arrangements for the company banquet.");
	words.ex[25] = _T("The chair is leaning against the wall.");
	words.ex[26] = _T("The marketing specialist will examine the latest report.");
	words.ex[27] = _T("We don't have enough money to finance the proposal.");
	words.ex[28] = _T("The appropriate action in this situtaion is to wait for approval.");
	words.ex[29] = _T("The copy machine's warranty expires next month.");
	words.ex[30] = _T("She has an appointment with her investment advisor.");
	words.ex[31] = _T("Can I see the certificate of origin fo these goods?");
}
void getWords_Day5(Words &words)
{
	words.word[0] = _T("release"); words.number[0] = 403; words.chinese[0] = _T("v. �W���B�o��B���}�B����Fn. �o��");	 words.ps[0] = _T("");
	words.word[1] = _T("concerning"); words.number[1] = 405; words.chinese[1] = _T("prep. ����B�P~����");	 words.ps[1] = _T("\r\nps. �ۦ����Gregarding");
	words.word[2] = _T("departure"); words.number[2] = 407; words.chinese[2] = _T("n. �X�o�B��¾");	 words.ps[2] = _T("\r\nps. depart (v) �X�o�B���}");
	words.word[3] = _T("postpone"); words.number[3] = 410; words.chinese[3] = _T("v. �����B����");	 words.ps[3] = _T("");
	words.word[4] = _T("resident"); words.number[4] = 413; words.chinese[4] = _T("n. �~���F�~��̡Fadj. �~��");	 words.ps[4] = _T("\r\nps. residential (adj) �~�����B������v���Fresidence (n) �~��B�~�d�v");
	words.word[5] = _T("apologize"); words.number[5] = 416; words.chinese[5] = _T("v. �D�p");	 words.ps[5] = _T("\r\nps. apology (n) �D�p");
	words.word[6] = _T("complaint"); words.number[6] = 420; words.chinese[6] = _T("n. ���B�訥");	 words.ps[6] = _T("\r\nps. complain (v) ���X�����B���");
	words.word[7] = _T("suggestion"); words.number[7] = 424; words.chinese[7] = _T("n. ��ĳ�B��ĳ�B�t��");	 words.ps[7] = _T("\r\nps. suggest (v) ��ĳ�B��ĳ");
	words.word[8] = _T("involve"); words.number[8] = 428; words.chinese[8] = _T("v. �o�A�B�s�֡B�]�t�B�ݭn");	 words.ps[8] = _T("\r\nps. involvement (n) �s�֡B�o�s");
	words.word[9] = _T("celebrate"); words.number[9] = 431; words.chinese[9] = _T("v. �y��");	 words.ps[9] = _T("\r\nps. celebration (n) �y�����ʡB�y��");
	words.word[10] = _T("share"); words.number[10] = 435; words.chinese[10] = _T("n. �Ѳ��B�����e���v");	 words.ps[10] = _T("\r\nps. �ۦ����Gstock (266) �Ѳ��Cshareholder (n) �ѪF");
	words.word[11] = _T("promptly"); words.number[11] = 438; words.chinese[11] = _T("adv. ���t�a�B�ӱ��a�B�ߧY�a");	 words.ps[11] = _T("\r\nps. prompt (adj) ���t���B�ӱ����B�Y�ɪ��Fpromptness (n) ���t�m");
	words.word[12] = _T("efficiency"); words.number[12] = 440; words.chinese[12] = _T("n. �Ĳv");	 words.ps[12] = _T("\r\nps. �ۤϵ��Ginefficiency (n) �L�Ĳv�F\r\n    efficient (adj) ���Ĳv���Befficiently (adv) ���Ĳv�a");
	words.word[13] = _T("attention"); words.number[13] = 443; words.chinese[13] = _T("n. �`�N�O�B����");	 words.ps[13] = _T("");
	words.word[14] = _T("convenient"); words.number[14] = 447; words.chinese[14] = _T("adj. �K�Q���B��K��");	 words.ps[14] = _T("\r\nps. �ۤϵ��Ginconvenient (adj) ���K���C\r\n    conveniently (adj) ���K�a");
	words.word[15] = _T("approach"); words.number[15] = 449; words.chinese[15] = _T("v. ����B�a��B�ۤ�B�z�Fn. ����B��k�B����");	 words.ps[15] = _T("");
	words.word[16] = _T("revenue"); words.number[16] = 451; words.chinese[16] = _T("n. ���q�B���J�B�|��");	 words.ps[16] = _T("");
	words.word[17] = _T("secure"); words.number[17] = 454; words.chinese[17] = _T("v. �O�@�B�O�æw���B��o�Fadj. �w����");	 words.ps[17] = _T("\r\nps. �ۤϵ��Ginsecure (adj) ���w�����Csecurely (adv) �w���a");
	words.word[18] = _T("analysis"); words.number[18] = 458; words.chinese[18] = _T("n. ���R�B�ѪR");	 words.ps[18] = _T("\r\nps. analyze (v) ���R�B�ѪR�Fanalyst (n) ���R�v�B���R��");
	words.word[19] = _T("compliance"); words.number[19] = 462; words.chinese[19] = _T("n. ��u");	 words.ps[19] = _T("\r\nps. comply (v) ��q�B�A�q");
	words.word[20] = _T("instrument"); words.number[20] = 465; words.chinese[20] = _T("n. �����B�u��B�־�");	 words.ps[20] = _T("");
	words.word[21] = _T("volunteer"); words.number[21] = 468; words.chinese[21] = _T("v. ���@�A�ȡB���q�u�B���@���Fn. ���@�A�Ȫ̡B�q�u");	 words.ps[21] = _T("\r\nps. voluntary (adj) �۵o���B���@��");
	words.word[22] = _T("accord"); words.number[22] = 471; words.chinese[22] = _T("v. �P~�ŦX�F��~�@�P�Fn. �@�P�B��w");	 words.ps[22] = _T("\r\nps. accordance (n) �@�P�B�M�ӡFaccording to (prep) �ھ�~");
	words.word[23] = _T("collection"); words.number[23] = 474; words.chinese[23] = _T("n. ���áB�����B�Ҫ��B�x��");	 words.ps[23] = _T("\r\nps. collect (v) �����Fcollector (n) �����̡B���|��");
	words.word[24] = _T("launch"); words.number[24] = 477; words.chinese[24] = _T("v. �ϤW���B�϶}�l�B�ϵn���Fn. �W��");	 words.ps[24] = _T("");
	words.word[25] = _T("competitive"); words.number[25] = 480; words.chinese[25] = _T("adj. ���v���O��");	 words.ps[25] = _T("\r\nps. competitively (adv) �㦳�v���O�a�Fcompetition (n) �v��");
	words.word[26] = _T("respond"); words.number[26] = 484; words.chinese[26] = _T("v. �^���B�^��");	 words.ps[26] = _T("\r\nps. response (v) �^���B���СB�����Fresponsive (adj) ���^�����B��������");
	words.word[27] = _T("guarantee"); words.number[27] = 488; words.chinese[27] = _T("n. �O��(��)�B��O(�~)");	 words.ps[27] = _T("\r\nps. �ۦ����Gwarranty (393)");
	words.word[28] = _T("progress"); words.number[28] = 490; words.chinese[28] = _T("n. �i�B�B�e�i�Fv. �i�B�B�i�i");	 words.ps[28] = _T("\r\nps. progressive (adj) ���i���B�i�B���Fprogressively (adv) ��q�W�[�a�B�e�i�a");
	words.word[29] = _T("prevent"); words.number[29] = 493; words.chinese[29] = _T("v. ����B�w��");	 words.ps[29] = _T("\r\nps. prevention (n) �w���Fpreventive = preventative (adj) �w����");
	words.word[30] = _T("lease"); words.number[30] = 496; words.chinese[30] = _T("v. ���ɡFn. ���ɫ���");	 words.ps[30] = _T("");
	words.word[31] = _T("headquarters"); words.number[31] = 498; words.chinese[31] = _T("n. �`���q�B�`��");	 words.ps[31] = _T("\r\nps. headquartered (adj) �]���`���q/�`����~��");

	words.ex[0] = _T("The remote cable for the Canon digital camera was released yesterday.");
	words.ex[1] = _T("There were a number of inquires concerning shipping delays.");
	words.ex[2] = _T("All passengers should arrive one hour before their departure time.");
	words.ex[3] = _T("The concert was postponed because of the bad weather.");
	words.ex[4] = _T("There will be a social event for the new residents of the apartment.");
	words.ex[5] = _T("I would like to appologize for the delay in processing your order.");
	words.ex[6] = _T("There were so many complaints about the service in that store.");
	words.ex[7] = _T("Contact me if you have any suggestions for the project.");
	words.ex[8] = _T("Some senior executives are involved with the scandal.");
	words.ex[9] = _T("The company is celebrating its 28th anniversary.");
	words.ex[10] = _T("The company's share price rose by 10% yesterday.");
	words.ex[11] = _T("We must respond promptly to customer complaints.");
	words.ex[12] = _T("The new equipment will give us increased operational efficiency.");
	words.ex[13] = _T("The new employee has caught the attention of management.");
	words.ex[14] = _T("Pennerton Gas Station offers fast and convenient service.");
	words.ex[15] = _T("According to the weather report, a typhoon is approaching.");
	words.ex[16] = _T("The firm's revenue has increased compared to last quarter.");
	words.ex[17] = _T("Cargo must be safely secured before shipment.");
	words.ex[18] = _T("A poisonous substance was found by chemical analysis.");
	words.ex[19] = _T("The inspector comfirmed that we are in compliance with the building regulations.");
	words.ex[20] = _T("The hospital is equipment with the most up-to-data medical instruments.");
	words.ex[21] = _T("Dr. Tancredi volunteers at the local homeless shelter.");
	words.ex[22] = _T("The vehicle's safety features accord with industry standards.");
	words.ex[23] = _T("The gallery houses an amanzing collection of modern art.");
	words.ex[24] = _T("LK Inc. plans to launch the new mobile phone by next time.");
	words.ex[25] = _T("The Cornell Hotel's room charge is extremely competitive.");
	words.ex[26] = _T("Anyone who responds to this survey will receive discount coupons.");
	words.ex[27] = _T("Holdfix Network gives a lifetime guarantee for their products.");
	words.ex[28] = _T("Progress in technology has changed people's lives dramatically.");
	words.ex[29] = _T("These rubber seals prevent the gas from escaping.");
	words.ex[30] = _T("We are going to lease the Rolls-Royce for 6 months.");
	words.ex[31] = _T("Polaroid Inc. announced the location of the new headquarters.");

}
void getWords_Day6(Words &words)
{
	words.word[0] = _T("proceed"); words.number[0] = 501; words.chinese[0] = _T("v. �e��B�~��i��");	 words.ps[0] = _T("\r\nps. proceeds (n) ���J�B���q�Fproceedings (n) �ƥ�B�L�{");
	words.word[1] = _T("related"); words.number[1] = 505; words.chinese[1] = _T("adj. �������B���p��");	 words.ps[1] = _T("\r\nps. relate (v) �{�P�B�Ϧ����p�Frelation (n) ���Y");
	words.word[2] = _T("fold"); words.number[2] = 507; words.chinese[2] = _T("v. �P�|�B�X�l");	 words.ps[2] = _T("\r\nps. �ۤϵ��Gunfold (v) ½�}�Cfolder (n) ��Ƨ�");
	words.word[3] = _T("qualify"); words.number[3] = 510; words.chinese[3] = _T("v. �Ϧ����B�ҩ��X��");	 words.ps[3] = _T("\r\nps. �ۤϵ��Gdisqualify (v) �������B�Ϥ��X��C\r\n    qualified (adj) ����檺�Fqualification (n) ���B��O");
	words.word[4] = _T("reputation"); words.number[4] = 513; words.chinese[4] = _T("n. �W�A�B�H�A");	 words.ps[4] = _T("\r\nps.  = repute");
	words.word[5] = _T("donate"); words.number[5] = 515; words.chinese[5] = _T("v. ���ءB���U");	 words.ps[5] = _T("\r\nps. donation (n) ���U�B���ءFdonor (n) ���ت�");
	words.word[6] = _T("strategy"); words.number[6] = 519; words.chinese[6] = _T("n. �����B�Բ�");	 words.ps[6] = _T("\r\nps. strategic (adj) �������Fstrategically (adv) �����W�a");
	words.word[7] = _T("acquire"); words.number[7] = 522; words.chinese[7] = _T("v. ���o(�]���B�v�Q��)�B��o");	 words.ps[7] = _T("\r\nps. acquisition (n) ���ʡB��o�B���o�B��o��");
	words.word[8] = _T("vary"); words.number[8] = 526; words.chinese[8] = _T("v. �Ϥ��P�B�e�h�ˤ�");	 words.ps[8] = _T("\r\nps. various (adj) �h�����B���P���Fvariety (n) �h�˩�");
	words.word[9] = _T("accompany"); words.number[9] = 529; words.chinese[9] = _T("v. ���P�B���H�B�P~�P�ɵo��");	 words.ps[9] = _T("");
	words.word[10] = _T("contribute"); words.number[10] = 533; words.chinese[10] = _T("v. ���ءB�ػP");	 words.ps[10] = _T("\r\nps. contribution (n) �^�m�B����");
	words.word[11] = _T("mechanic"); words.number[11] = 536; words.chinese[11] = _T("n. ����u�B�ޮv");	 words.ps[11] = _T("\r\nps. mechanical (adj) ����W��");
	words.word[12] = _T("inventory"); words.number[12] = 540; words.chinese[12] = _T("n. �s�f�B�w�s�B�s�f�M��Fv. �L�s�B�n�J�s�f�ؿ�");	 words.ps[12] = _T("");
	words.word[13] = _T("assembly"); words.number[13] = 543; words.chinese[13] = _T("n. �˰t�B���|�B�P�|��");	 words.ps[13] = _T("\r\nps. �ۤϵ��Gdisassembly (n) ��ѡB���ѡC\r\n    assemble (v) �E��(�H)�B�ո�(����)");
	words.word[14] = _T("upcoming"); words.number[14] = 547; words.chinese[14] = _T("adj. �Y�N��Ӫ�");	 words.ps[14] = _T("");
	words.word[15] = _T("anticipate"); words.number[15] = 550; words.chinese[15] = _T("v. ����B�w�ơB�w����");	 words.ps[15] = _T("\r\nps. anticipation (n) �w�ơB�w���B���ߡFanticipated (adj) �w����");
	words.word[16] = _T("similar"); words.number[16] = 553; words.chinese[16] = _T("adj. �������B�ۦ���");	 words.ps[16] = _T("\r\nps. similarity (n) �����B�ۦ��I");
	words.word[17] = _T("forecast"); words.number[17] = 555; words.chinese[17] = _T("n. �w���B�w�ơFv. �w���B�w��");	 words.ps[17] = _T("");
	words.word[18] = _T("term"); words.number[18] = 559; words.chinese[18] = _T("n. ���ڡB����Fn. �����B�λy");	 words.ps[18] = _T("");
	words.word[19] = _T("significant"); words.number[19] = 561; words.chinese[19] = _T("adj. ��۪��B���n��");	 words.ps[19] = _T("\r\nps. significantly (adv) �۷�a�B��ۦa�Fsignificance (n) ���n��");
	words.word[20] = _T("lecture"); words.number[20] = 564; words.chinese[20] = _T("n. �t���B�½ҡB�i�|�B�d�ơFv. �½ҡB�t��");	 words.ps[20] = _T("\r\nps. lecturer (n) �t���̡B���v");
	words.word[21] = _T("reliable"); words.number[21] = 567; words.chinese[21] = _T("adj. �i�a���B�i�H�઺");	 words.ps[21] = _T("\r\nps. reliably (adv) �i�a�a�Freliability (n) �H��סB�i�H��\r\n    �ۤϵ��Gunreliable (adj) ���i�H�઺");
	words.word[22] = _T("general"); words.number[22] = 571; words.chinese[22] = _T("adj. �j�骺�B�@�몺");	 words.ps[22] = _T("\r\nps. generally (adv) �@��a�Fgeneralize (v) �@���");
	words.word[23] = _T("prior"); words.number[23] = 574; words.chinese[23] = _T("adj. �b�e���B���e���B�u����");	 words.ps[23] = _T("\r\nps. priority (n) �u������B�u���v");
	words.word[24] = _T("initial"); words.number[24] = 576; words.chinese[24] = _T("adj. �̪쪺�B�}�l���Fv. ñ�m�W���_���r��");	 words.ps[24] = _T("\r\nps. initiate (v)(2019) �}�l�B�ۤ�Finitially (adv) �_��a�B�}�Y�a");
	words.word[25] = _T("pour"); words.number[25] = 579; words.chinese[25] = _T("v. ��");	 words.ps[25] = _T("");
	words.word[26] = _T("disappoint"); words.number[26] = 584; words.chinese[26] = _T("v. �ϥ���B�ϸ���");	 words.ps[26] = _T("\r\nps. disappointed (adj) �P�쥢�檺�Fdisappointing (adj) �O�H���檺");
	words.word[27] = _T("attendant"); words.number[27] = 587; words.chinese[27] = _T("n. �A�ȭ��B�H���");	 words.ps[27] = _T("\r\nps. attendance (n) �ѥ[�B�X�u�Fattendee (n) �X�u��");
	words.word[28] = _T("audit"); words.number[28] = 591; words.chinese[28] = _T("n. �]�֡B�d�b�Fv. �]�֡B��ť");	 words.ps[28] = _T("\r\nps. auditor (n) �]�̡֪B��ť��");
	words.word[29] = _T("source"); words.number[29] = 594; words.chinese[29] = _T("n. �ӷ��B�X�B�B�����ӷ�");	 words.ps[29] = _T("");
	words.word[30] = _T("inspection"); words.number[30] = 596; words.chinese[30] = _T("n. �ˬd�B����B����");	 words.ps[30] = _T("\r\nps. inspect (v) �f�d�B�ˬd�Finspector (n) �]�d���B����");
	words.word[31] = _T("attract"); words.number[31] = 600; words.chinese[31] = _T("v. �l�ޡB�ް_");	 words.ps[31] = _T("\r\nps. attractive (adj) ���y�O���B���l�ޤO���Fattraction (n) ���I�B�y�O");

	words.ex[0] = _T("Please make your final selections and proceed to the checkout line.");
	words.ex[1] = _T("Those with backgrounds in engineering or related fields may apply.");
	words.ex[2] = _T("The document is folded in half.");
	words.ex[3] = _T("The guidelines explain how to qualify for a loan.");
	words.ex[4] = _T("The airline company has an excellent reputation for its service.");
	words.ex[5] = _T("The Hunter Foundation donated thousands of dollars to medical research.");
	words.ex[6] = _T("The finance team is developing a new investment strategy.");
	words.ex[7] = _T("Cornerstone Bank was acquired by a foreign bank.");
	words.ex[8] = _T("The application of the regulation varies from state to state.");
	words.ex[9] = _T("Mr. Fukoyami will be accompanied by an inerpreter in the meeting.");
	words.ex[10] = _T("Ms. Scully contributes $100 each month to an orphanage.");
	words.ex[11] = _T("I left my car at the mechanic's shop to be fixed.");
	words.ex[12] = _T("The warehouse has an enormous inventory of building supplies.");
	words.ex[13] = _T("The assembly line became fully automated last year.");
	words.ex[14] = _T("Please inform residents of the upcoming construction work.");
	words.ex[15] = _T("The concert organizers are anticipating a large crowd.");
	words.ex[16] = _T("The two models are quite similar in design and function.");
	words.ex[17] = _T("The economic forecast for next year is promising.");
	words.ex[18] = _T("Please carefully read the terms of the lease.");
	words.ex[19] = _T("We're expecting significant sales increases in every region.");
	words.ex[20] = _T("Dr. Rice will give a lecture on world affairs.");
	words.ex[21] = _T("Mr. Mulder has always been a reliable employee.");
	words.ex[22] = _T("The report gives a general overview of the company structure.");
	words.ex[23] = _T("You must obtain a tourist visa prior to your departure..");
	words.ex[24] = _T("The firm usually delivers products within 48 hours of the initial request.");
	words.ex[25] = _T("He's pouring a drink for the woman.");
	words.ex[26] = _T("The fact that he wasn't offered a promotion disappointed him.");
	words.ex[27] = _T("Flight attendants must ensure the safety of all passengers.");
	words.ex[28] = _T("Most large organizations conduct regular internal audits.");
	words.ex[29] = _T("The country relies on tourism as an important source of revenue.");
	words.ex[30] = _T("The engineers are conducting an inspection of the railway track.");
	words.ex[31] = _T("The marketing team is planning strategies to attract customers.");

}
void getWords_Day7(Words &words)
{
	words.word[0] = _T("income"); words.number[0] = 603; words.chinese[0] = _T("n. ���J�B�ұo");	 words.ps[0] = _T("");
	words.word[1] = _T("recognize"); words.number[1] = 606; words.chinese[1] = _T("v. �֩w�B�{�o�B�ӻ{");	 words.ps[1] = _T("\r\nps. recognizable (adj) �i��{���Frecognition (n) �{�i�B����B�{��");
	words.word[2] = _T("baggage"); words.number[2] = 609; words.chinese[2] = _T("n. ���");	 words.ps[2] = _T("\r\nps. �ۦ����Gluggage");
	words.word[3] = _T("accommodate"); words.number[3] = 612; words.chinese[3] = _T("v. �e�ǡB�ണ��~���J�B�q��");	 words.ps[3] = _T("\r\nps. accommodation (n) ���e�B���J");
	words.word[4] = _T("force"); words.number[4] = 615; words.chinese[4] = _T("v. ���ϡB�j���Fn. �O�B�v�T�O");	 words.ps[4] = _T("");
	words.word[5] = _T("recruit"); words.number[5] = 619; words.chinese[5] = _T("v. �۶ҡB�u�ΡFn. �s�����B�s��");	 words.ps[5] = _T("\r\nps. recruitment (n) �۶�");
	words.word[6] = _T("tend"); words.number[6] = 622; words.chinese[6] = _T("v. �ɦV��B���U");	 words.ps[6] = _T("\r\nps. tendency (n) �ɦV�B����B�Ͷ�");
	words.word[7] = _T("district"); words.number[7] = 625; words.chinese[7] = _T("n. (��F�ϵ���)�ϰ�B�a��");	 words.ps[7] = _T("");
	words.word[8] = _T("reflect"); words.number[8] = 629; words.chinese[8] = _T("v. �ϬM�B�Ϯg");	 words.ps[8] = _T("\r\nps. reflection (n) �ϬM�B�Ϯg�Freflective (adj) �Ϯg���B�ϬM��");
	words.word[9] = _T("frequent"); words.number[9] = 631; words.chinese[9] = _T("adj. �g�`���B�W�c��");	 words.ps[9] = _T("\r\nps. frequently (adv) �𦸦a�C�ۤϵ��Ginfrequenct (adj) ���W�c��");
	words.word[10] = _T("depend"); words.number[10] = 635; words.chinese[10] = _T("v. �̾a�B�H��");	 words.ps[10] = _T("\r\nps. dependable (adj) �i�a���Findependent (adj) �W�ߪ��B�ۥD��");
	words.word[11] = _T("accurate"); words.number[11] = 638; words.chinese[11] = _T("adj. �ǽT���B��T��");	 words.ps[11] = _T("\r\nps. �ۤϵ��Ginaccurate (adj) �����T���Caccurately (adv) ���T�a\r\n    accuracy (n) ���T��");
	words.word[12] = _T("valid"); words.number[12] = 641; words.chinese[12] = _T("adj. ���Ī��B�X�k��");	 words.ps[12] = _T("\r\nps. validity (n) ����ʡB�ĤO�B�X�k��");
	words.word[13] = _T("capacity"); words.number[13] = 644; words.chinese[13] = _T("n. �Ͳ��O�B�e�q�B��O�B�~��B���B�a��");	 words.ps[13] = _T("\r\nps. capable (adj) ��������B����O��");
	words.word[14] = _T("transport"); words.number[14] = 646; words.chinese[14] = _T("v. �B�e�B��e�Fn. �B�e�B��q�u��");	 words.ps[14] = _T("\r\nps. transportation (n) �B�e�B��q�B�B��u��\r\n    transporter (n) �B�e���B�B�e�����Τj���f��������");
	words.word[15] = _T("retail"); words.number[15] = 649; words.chinese[15] = _T("n. �s��Fadj. �s�⪺�Fv. �s��");	 words.ps[15] = _T("\r\nps. retailer (n) �s���");
	words.word[16] = _T("overhead"); words.number[16] = 652; words.chinese[16] = _T("n. �g�`�}��(�����B�q�O�B�~�굥)�Fadv. �b�Y���W�B�����a�Fadj. �b�Y���W��");	 words.ps[16] = _T("");
	words.word[17] = _T("fiscal"); words.number[17] = 656; words.chinese[17] = _T("adj. �|�p���B�]�F�W��");	 words.ps[17] = _T("");
	words.word[18] = _T("immediate"); words.number[18] = 658; words.chinese[18] = _T("adj. �Y�ɪ��B��e���B������");	 words.ps[18] = _T("\r\nps. immediately (adv) �ߧY�a");
	words.word[19] = _T("translation"); words.number[19] = 662; words.chinese[19] = _T("n. ½Ķ�BĶ��B���");	 words.ps[19] = _T("\r\nps. translate (v) ½Ķ�B�����Ftranslator (n) Ķ��");
	words.word[20] = _T("admit"); words.number[20] = 666; words.chinese[20] = _T("v. �\�i�B�ӻ{");	 words.ps[20] = _T("\r\nps. admission (n) �\�i�B�ӻ{");
	words.word[21] = _T("export"); words.number[21] = 669; words.chinese[21] = _T("n. ��X(�~)�Fv. ��X");	 words.ps[21] = _T("\r\nps. �ۤϵ��Gimport (n) �i�f�B(v) �i�f");
	words.word[22] = _T("temporary"); words.number[22] = 671; words.chinese[22] = _T("adj. �{�ɪ��Fn. �{�ɤu�B�{�ɨƪ�");	 words.ps[22] = _T("\r\nps. temporarily (adj) �@�ɦa�B�{�ɦa");
	words.word[23] = _T("enroll"); words.number[23] = 675; words.chinese[23] = _T("v. ���U�B�O���b�W��W");	 words.ps[23] = _T("\r\nps. enrollment (n) ���U�B�n�O");
	words.word[24] = _T("screen"); words.number[24] = 679; words.chinese[24] = _T("v. �z��B�˵��B�f�d�B��M�Fn. �ȹ��B�e���B����");	 words.ps[24] = _T("");
	words.word[25] = _T("enclose"); words.number[25] = 682; words.chinese[25] = _T("v. �@�P�ʤJ(�H�ʡB���姨)�B���B���");	 words.ps[25] = _T("\r\nps. enclosure (n) �ʤJ�B����/��B����");
	words.word[26] = _T("generate"); words.number[26] = 685; words.chinese[26] = _T("v. ���͡B�ް_");	 words.ps[26] = _T("\r\nps. generation (n) �o�͡B�@�N�B�P�ɥN���H�Fgenerator (n) �o�q��");
	words.word[27] = _T("settle"); words.number[27] = 688; words.chinese[27] = _T("v. �ѨM(���D)�B�w�y�B�w�ơB�v�٤�I�B�M�w");	 words.ps[27] = _T("\r\nps. settlement (n) �ѨM�B�v�١B�M��B���b");
	words.word[28] = _T("assist"); words.number[28] = 691; words.chinese[28] = _T("v. ��U�B���U");	 words.ps[28] = _T("\r\nps. assistant (n) �U��B�����H");
	words.word[29] = _T("verify"); words.number[29] = 694; words.chinese[29] = _T("v. �ҹ�B�ҩ��B�T�{");	 words.ps[29] = _T("\r\nps. verification (n) �T�{�B�ҩ�");
	words.word[30] = _T("shortly"); words.number[30] = 698; words.chinese[30] = _T("adj. �Y�N�B���[");	 words.ps[30] = _T("");
	words.word[31] = _T("agenda"); words.number[31] = 700; words.chinese[31] = _T("n. (�|ĳ��)ĳ�{�B��ĳ�ƶ�");	 words.ps[31] = _T("");

	words.ex[0] = _T("The average annual income is expected to rise dramatically.");
	words.ex[1] = _T("Nadia is being recognized for her contribution to the firm.");
	words.ex[2] = _T("The baggage claim area is in the middle of the terminal.");
	words.ex[3] = _T("The conference room can accommodate up to 50 people.");
	words.ex[4] = _T("Many people have been forced to quit their jobs due to the recession.");
	words.ex[5] = _T("The company recruits several top graduates each year.");
	words.ex[6] = _T("Connsumers tend to buy the same product brands repeatedly.");
	words.ex[7] = _T("Many firms are moving out of the crowded business district.");
	words.ex[8] = _T("The new merchandise reflects the current trends in this region.");
	words.ex[9] = _T("The most frequent accidents reported were fires and explosions.");
	words.ex[10] = _T("Newspaper publishers depend on advertising revenue to make a profit.");
	words.ex[11] = _T("We conducted market research to obtain more accurate figures.");
	words.ex[12] = _T("Discount coupons are valid until January 1, 2008.");
	words.ex[13] = _T("Please let me know the production capacity of the plant in Roswell.");
	words.ex[14] = _T("The goods are being transported in a truck to Brunswick.");
	words.ex[15] = _T("Ms. Bell has twenty-five years' experience in retail.");
	words.ex[16] = _T("Overhead costs are higher in winter than summer due to the heating costs.");
	words.ex[17] = _T("Overall, we made a loss for the previous fiscal year.");
	words.ex[18] = _T("Smart investors are not interested in getting immediate results.");
	words.ex[19] = _T("Mr. Watabe is an expert in Japanese-Korean translation.");
	words.ex[20] = _T("Nobody will be admitted to the museum without a valid ticket.");
	words.ex[21] = _T("The UN plans to restrict North Korea's export of missiles.");
	words.ex[22] = _T("We need to hire a temporary worker for the annual event.");
	words.ex[23] = _T("I have decided to enroll in a computer skills course.");
	words.ex[24] = _T("We will carefully screen applicants before the interviews begin.");
	words.ex[25] = _T("I have enclosed an application form with this envelope.");
	words.ex[26] = _T("Many people ecpect that the factory will generate jobs for locals.");
	words.ex[27] = _T("We settled our account with the power company last week.");
	words.ex[28] = _T("Andrea will assist us with the research project.");
	words.ex[29] = _T("Please bring a document that will verify your identity.");
	words.ex[30] = _T("The train for Dunwoody will be leaving shortly.");
	words.ex[31] = _T("Please hand out the agenda before the meeting.");

}
void getWords_Day8(Words &words)
{
	words.word[0] = _T("figure"); words.number[0] = 701; words.chinese[0] = _T("n. �Ʀr�B���B�B�H���B�H�W");	 words.ps[0] = _T("");
	words.word[1] = _T("entitle"); words.number[1] = 704; words.chinese[1] = _T("v. �������/�v�Q�B�R�W");	 words.ps[1] = _T("");
	words.word[2] = _T("specialize"); words.number[2] = 707; words.chinese[2] = _T("v. �M���q�ơB�M��");	 words.ps[2] = _T("\r\nps. specialization (n) �S��ơFspecialized (adj) �M����");
	words.word[3] = _T("decline"); words.number[3] = 710; words.chinese[3] = _T("v. �U���F��֡B���ڡFn. �U�^�B�I�h");	 words.ps[3] = _T("");
	words.word[4] = _T("impress"); words.number[4] = 713; words.chinese[4] = _T("v. �����`��L�H");	 words.ps[4] = _T("\r\nps. impressive (adj) �L�H�`�誺");
	words.word[5] = _T("resign"); words.number[5] = 715; words.chinese[5] = _T("v. ��h�B��¾");	 words.ps[5] = _T("\r\nps. resignation (n) ��¾�B��e");
	words.word[6] = _T("eligible"); words.number[6] = 719; words.chinese[6] = _T("adj. ����檺�B�A�X���Fn. �X��̡B�X�A���H");	 words.ps[6] = _T("\r\nps. �ۤϵ��Gineligible �L��檺");
	words.word[7] = _T("specific"); words.number[7] = 723; words.chinese[7] = _T("adj. �S�w���B���T���B���骺");	 words.ps[7] = _T("\r\nps. specify (v) ������w�B�Բӻ���");
	words.word[8] = _T("treatment"); words.number[8] = 725; words.chinese[8] = _T("n. �v���B��ݡB�B�z�B�ݹJ");	 words.ps[8] = _T("\r\nps. treat (v) �ݫݡB��ݡB�v���B�ЫȡFretreat (v) �M�h�B��~��h");
	words.word[9] = _T("sufficient"); words.number[9] = 729; words.chinese[9] = _T("adj. �R�����B������");	 words.ps[9] = _T("\r\nps. sufficiently (adv) �R���a�F�ۤϵ��Ginsufficient ������");
	words.word[10] = _T("demonstrate"); words.number[10] = 731; words.chinese[10] = _T("v. �i�ܡB�ܽd�B�����B�ҩ��B�ܫ�");	 words.ps[10] = _T("\r\nps. �ۦ����Gprotest (1764) �ܫ�");
	words.word[11] = _T("strike"); words.number[11] = 734; words.chinese[11] = _T("n. �}�u�B�}�ҡB�����B�����Fv. ���B�~�B�}�u");	 words.ps[11] = _T("");
	words.word[12] = _T("prescription"); words.number[12] = 739; words.chinese[12] = _T("n. �B���B�B���ī~");	 words.ps[12] = _T("\r\nps. prescribe (v) �}�߳B��B����");
	words.word[13] = _T("outstanding"); words.number[13] = 742; words.chinese[13] = _T("adj. ���I�M���B���ѨM���B�ǥX���B��}��");	 words.ps[13] = _T("");
	words.word[14] = _T("sweep"); words.number[14] = 745; words.chinese[14] = _T("v. �����B���L�Fn. �M���B����");	 words.ps[14] = _T("");
	words.word[15] = _T("narrow"); words.number[15] = 747; words.chinese[15] = _T("v. �Y�p�B���ܯU��");	 words.ps[15] = _T("\r\nps. narrowly (adv) �]���a�B�J�Ӧa");
	words.word[16] = _T("instruct"); words.number[16] = 751; words.chinese[16] = _T("v. ���ܡB���ɡB�q��");	 words.ps[16] = _T("\r\nps. instruction (n) ���ܡB�оɡB�q���Finstructor (n) �Юv�B���ɪ�");
	words.word[17] = _T("capital"); words.number[17] = 754; words.chinese[17] = _T("n. �ꥻ�B����B�����Fadj. �D�n���B�ꥻ��");	 words.ps[17] = _T("\r\nps. capitalize (v)(2747) ���Ѹꥻ�B�H�j�g�Ѽg");
	words.word[18] = _T("detailed"); words.number[18] = 757; words.chinese[18] = _T("adj. �ԲӪ�");	 words.ps[18] = _T("\r\nps. detail (n) �Ա��B�Ӹ`�F(v) �ԭz");
	words.word[19] = _T("achieve"); words.number[19] = 763; words.chinese[19] = _T("v. �F���B���N�B����");	 words.ps[19] = _T("\r\nps. achievement (n) ���N�B�F��");
	words.word[20] = _T("tenant"); words.number[20] = 765; words.chinese[20] = _T("n. �ЫȡB�ӯ���");	 words.ps[20] = _T("\r\nps. �ۤϵ��Glandlord (n) �ЪF�B�a�D");
	words.word[21] = _T("manuscript"); words.number[21] = 768; words.chinese[21] = _T("n. ��Z�B��Z�Fadj. ��Z���B��ۥ���");	 words.ps[21] = _T("");
	words.word[22] = _T("renovation"); words.number[22] = 772; words.chinese[22] = _T("n. ��s�B½��");	 words.ps[22] = _T("\r\nps. �ۦ����Gremodeling ½�סCrenovate (v) ��s�B�ﵽ");
	words.word[23] = _T("adjust"); words.number[23] = 775; words.chinese[23] = _T("v. �վ�B�ե��B�վA");	 words.ps[23] = _T("\r\nps. adjustment (n) �վ�B�ո`�Fadjustable (adj) �i�վ㪺");
	words.word[24] = _T("grant"); words.number[24] = 778; words.chinese[24] = _T("n. �ɧU���B���y���B�P�N�Fv. �����B�P�N");	 words.ps[24] = _T("");
	words.word[25] = _T("defect"); words.number[25] = 781; words.chinese[25] = _T("n. ���I�B�ʳ�");	 words.ps[25] = _T("\r\nps. defective (adj) ���ʳ���");
	words.word[26] = _T("foundation"); words.number[26] = 784; words.chinese[26] = _T("n. �г]�B�ХߡB��¦�B����|");	 words.ps[26] = _T("\r\nps. found (v) �ХߡB�إߡFfounder (n) �Хߪ�");
	words.word[27] = _T("destination"); words.number[27] = 788; words.chinese[27] = _T("n. �ت��a�B���I");	 words.ps[27] = _T("");
	words.word[28] = _T("bid"); words.number[28] = 792; words.chinese[28] = _T("v. ��СB�X���B�ۻ��B�h�J�Fn. �X���B���");	 words.ps[28] = _T("\r\nps. bidder (n) �X���̡B��Ъ�");
	words.word[29] = _T("cooperate"); words.number[29] = 794; words.chinese[29] = _T("v. �X�@�B���U");	 words.ps[29] = _T("\r\nps. cooperation (n) �X�@�Fcooperative (adj) �X�@��");
	words.word[30] = _T("celebrity"); words.number[30] = 797; words.chinese[30] = _T("n. �W�H�B�W�y");	 words.ps[30] = _T("\r\nps. �ۦ����Gpersonality (1051) �W�y");
	words.word[31] = _T("occupied"); words.number[31] = 800; words.chinese[31] = _T("adj. �ϥΤ���");	 words.ps[31] = _T("\r\nps. occupation (n)(919) ¾�~");

	words.ex[0] = _T("There latest sales figures for the PMP show a significant increase.");
	words.ex[1] = _T("Coupon holders are entitled to one free auto repair service.");
	words.ex[2] = _T("Hi-mart specializes in affordable home appliances.");
	words.ex[3] = _T("The number of tourists visiting the contury has declined markedly.");
	words.ex[4] = _T("The clients seemed very impressed with ohnson's presentation.");
	words.ex[5] = _T("Wolfowitz has resigned from his role as president of the World Bank.");
	words.ex[6] = _T("All team members agree that Kalina is eligible for the promotion.");
	words.ex[7] = _T("Applicants should meet the specific requirements of the position.");
	words.ex[8] = _T("Many senior citizens can't afford the medical treatment they need.");
	words.ex[9] = _T("You will have sufficient time to catch the connection flight.");
	words.ex[10] = _T("Blizzard Co. will demonstrate the features of StarCraft II.");
	words.ex[11] = _T("The construction workers are on strike over working conditions.");
	words.ex[12] = _T("Nathan asked his doctor to write a prescription for sleeping pills.");
	words.ex[13] = _T("You have an outstanding bill payment of $45.70.");
	words.ex[14] = _T("A man is sweeping the shop floor.");
	words.ex[15] = _T("The human resources team has narrowed it down to ten application.");
	words.ex[16] = _T("All passengers are instructed to wait for further announcements.");
	words.ex[17] = _T("He tired to establish a business with little capital.");
	words.ex[18] = _T("Ms. Wells produced a detailed report on the expansion plan.");
	words.ex[19] = _T("He eventually achieved his goal of being promoted to a senior manager.");
	words.ex[20] = _T("The tenants in Room 1612 are moving out next week.");
	words.ex[21] = _T("The original manuscripts are available in the community library.");
	words.ex[22] = _T("The museum renovations are scheduled to be completed next year.");
	words.ex[23] = _T("The technician adjusted the settings on my computer after fixing it.");
	words.ex[24] = _T("The research institute receives an annual government grant.");
	words.ex[25] = _T("The new model eliminated the defect of the previous one.");
	words.ex[26] = _T("The college has contributed to the region since its foundation in 1886.");
	words.ex[27] = _T("Travelplus offers discount fares to many exotic destinations.");
	words.ex[28] = _T("Several firms are bidding for the bridge construction contract.");
	words.ex[29] = _T("The Las Vegas CSI team is currently cooperating with the NY team.");
	words.ex[30] = _T("Many celebrities visit fancy restaurants in Manhattan.");
	words.ex[31] = _T("All of the meeting rooms are currently occupied.");

}
void getWords_Day9(Words &words)
{
	words.word[0] = _T("affordable"); words.number[0] = 802; words.chinese[0] = _T("adj. �t�᪺�_���B�i�t�᪺");	 words.ps[0] = _T("\r\nps. afford (v) �R�o�_�B���������ɶ�");
	words.word[1] = _T("patron"); words.number[1] = 805; words.chinese[1] = _T("n. �D�U�ȡB�٧U�̡B�O�@��");	 words.ps[1] = _T("\r\nps. patronage (n) �٧U�B����Fpatronize (v) �٧U�B���@�B���U");
	words.word[2] = _T("function"); words.number[2] = 808; words.chinese[2] = _T("v. �ΰ��B�B�@�B�_�@�ΡFn. ����B�\��B�b�|�B���|");	 words.ps[2] = _T("\r\nps. �ۤϵ��Gmalfunction (1539) n. �G�� v. �o�ͬG��");
	words.word[3] = _T("concentrate"); words.number[3] = 811; words.chinese[3] = _T("v. �M�ߡB�����B�Ͽ@�Y");	 words.ps[3] = _T("\r\nps. concentration (n) �����B�M�ߡB�@�Y");
	words.word[4] = _T("medication"); words.number[4] = 814; words.chinese[4] = _T("n. �Ī��B�Ī��v��");	 words.ps[4] = _T("\r\nps. medicine (n) ��N�B��ǡB�ġFmedical (adj) ��Ǫ��B������");
	words.word[5] = _T("currency"); words.number[5] = 817; words.chinese[5] = _T("n. �f���B�q�f�B�q�ΡB�y�q");	 words.ps[5] = _T("");
	words.word[6] = _T("separate"); words.number[6] = 821; words.chinese[6] = _T("v. �j�}�B�Ϥ��B�Ϥ����B����B���}");	 words.ps[6] = _T("\r\nps. separation (n) ���}�B����");
	words.word[7] = _T("cancellation"); words.number[7] = 825; words.chinese[7] = _T("n. �����B�Ѱ�");	 words.ps[7] = _T("\r\nps. cancel (v) ����");
	words.word[8] = _T("charity"); words.number[8] = 828; words.chinese[8] = _T("n. �O������B�O��");	 words.ps[8] = _T("\r\nps. charitable (adj) �O�d���B�e�p��");
	words.word[9] = _T("judge"); words.number[9] = 831; words.chinese[9] = _T("v. ���P�B�P�_�B�f�P�Fn. �k�x");	 words.ps[9] = _T("\r\nps. judgment (n) �P�_�B�P�M");
	words.word[10] = _T("alternative"); words.number[10] = 835; words.chinese[10] = _T("adj. ���N���B�D���@���Fn. �ѿ�ܪ��ƪ�");	 words.ps[10] = _T("\r\nps. alternatively (adv) �ܤ@�a");
	words.word[11] = _T("union"); words.number[11] = 838; words.chinese[11] = _T("n. �u�|�B���X�B�p���B���B");	 words.ps[11] = _T("\r\nps. reunion (n) �A���X�B���{�B���E�F\r\n    unite (v) �p�X�B�Ϲε��Funify (v)���p�X");
	words.word[12] = _T("overall"); words.number[12] = 840; words.chinese[12] = _T("adj. ���骺�B�������Fadv. �`���ӻ��B�j��W��");	 words.ps[12] = _T("");
	words.word[13] = _T("imply"); words.number[13] = 842; words.chinese[13] = _T("v. �t�ܡB�N��");	 words.ps[13] = _T("\r\nps. implication (n) �o�s�B���~���N");
	words.word[14] = _T("approximately"); words.number[14] = 845; words.chinese[14] = _T("adv. �j���B�j��W");	 words.ps[14] = _T("\r\nps. �ۦ����Groughly�F�ۤϵ��Gexactly (adv) ��T�a�C\r\n    approximate (v) �j�P���p�B����F(adj) �����");
	words.word[15] = _T("divide"); words.number[15] = 849; words.chinese[15] = _T("v. �����B���t�B�Ϥ��}�Fn. ���[�B���X");	 words.ps[15] = _T("\r\nps. dividend (n)(2181) ���Q�B�Ѯ��B�Q����");
	words.word[16] = _T("authorize"); words.number[16] = 853; words.chinese[16] = _T("v. �ᤩ�v���B���");	 words.ps[16] = _T("\r\nps. authorization (n) ���v�B�{�i�B���F\r\n    authority (n) �v�¡B���v�̡F�x��F��");
	words.word[17] = _T("enhance"); words.number[17] = 856; words.chinese[17] = _T("v. �W�i�B���ɡB�j��");	 words.ps[17] = _T("\r\nps. enhancement (n) �j�ơB�W�[");
	words.word[18] = _T("reimburse"); words.number[18] = 858; words.chinese[18] = _T("v. �h�ڡB�v��");	 words.ps[18] = _T("\r\nps. reimbursement (n) �h�ڡB�v��");
	words.word[19] = _T("confidential"); words.number[19] = 862; words.chinese[19] = _T("adj. ���K���B���K��");	 words.ps[19] = _T("\r\nps. confidentially (adv) ���K�a�B���K�a�Fconfidentiality (n) ���K��");
	words.word[20] = _T("storage"); words.number[20] = 865; words.chinese[20] = _T("n. �x�s�B�O�ޡB�ܮw");	 words.ps[20] = _T("\r\nps. store (n) �ө��F(v) �x�s�B�e��");
	words.word[21] = _T("relocate"); words.number[21] = 868; words.chinese[21] = _T("v. �E���B���s�w�m");	 words.ps[21] = _T("\r\nps. relocation (n) �E��");
	words.word[22] = _T("compensation"); words.number[22] = 872; words.chinese[22] = _T("n. ���v�B���v�B�~���B�z�K");	 words.ps[22] = _T("\r\nps. compensate (v) ���v�B���v");
	words.word[23] = _T("basis"); words.number[23] = 875; words.chinese[23] = _T("n. ��¦�B�򥻡B�ھ�");	 words.ps[23] = _T("\r\nps. basic (adj) ��¦��");
	words.word[24] = _T("reveal"); words.number[24] = 878; words.chinese[24] = _T("v. ���S�B���|�B���o");	 words.ps[24] = _T("\r\nps. revelation (n) ���S�B���");
	words.word[25] = _T("commercial"); words.number[25] = 881; words.chinese[25] = _T("adj. �ӷ~���B��Q���Fn. �ӷ~�s�i");	 words.ps[25] = _T("\r\nps. commerce (n) �ӷ~���ӡB�T��");
	words.word[26] = _T("evaluate"); words.number[26] = 885; words.chinese[26] = _T("v. ���w�B����");	 words.ps[26] = _T("\r\nps. evaluation (n) �����Fevaluator (n) �����̡BŲ�w���F\r\n    evaluative (adj) �������B������");
	words.word[27] = _T("creativity"); words.number[27] = 887; words.chinese[27] = _T("n. �зN�B�гy�O");	 words.ps[27] = _T("\r\nps. creative (adj) �����Ȫ��B�гy��");
	words.word[28] = _T("flyer"); words.number[28] = 891; words.chinese[28] = _T("n. �s�i�ǳ�");	 words.ps[28] = _T("");
	words.word[29] = _T("landscape"); words.number[29] = 894; words.chinese[29] = _T("n. �����B���P");	 words.ps[29] = _T("\r\nps. landscaper (n) �y���~�̡B�x��]�p�v");
	words.word[30] = _T("considerable"); words.number[30] = 896; words.chinese[30] = _T("adj. �۷�j���B���n��");	 words.ps[30] = _T("\r\nps. consider (v)(87) �Ҽ{�B�U�{�Fconsiderably (adv) �۷�a�B��F\r\n    considerate (adj) ��K���B�Ҽ{�P�쪺");
	words.word[31] = _T("extremely"); words.number[31] = 898; words.chinese[31] = _T("adj. ���צa�B�D�`�a");	 words.ps[31] = _T("\r\nps. extreme (adj) ���ת��B���E���Fextremity (n) ����");

	words.ex[0] = _T("LiveHouse offers top-quality appliances at affordable prices.");
	words.ex[1] = _T("We have already informed patrons of the restaurant's temporary closure.");
	words.ex[2] = _T("Nokia 8587 functions as a cell phone and a digital camera.");
	words.ex[3] = _T("I can't concentrate on mywork with so much noise.");
	words.ex[4] = _T("Researchers asy that the medication is helpful for back pain.");
	words.ex[5] = _T("Tourists can exchange currency at the airport.");
	words.ex[6] = _T("The two buildings are separated by a distance of 50 meters.");
	words.ex[7] = _T("You can make reservations and cancellations over the Internet.");
	words.ex[8] = _T("The event was held to raise money for charities in Africa.");
	words.ex[9] = _T("The building design contest was judged by a panel of architects.");
	words.ex[10] = _T("Environmentalists believe that we need to use alternative fuel sources.");
	words.ex[11] = _T("The labor union declined the company's initial wage offer.");
	words.ex[12] = _T("The new government policy will affect the overall economy.");
	words.ex[13] = _T("The director implied that Ms. Pearson would not be promoted this time.");
	words.ex[14] = _T("The examination period lasts for approximately one week on average.");
	words.ex[15] = _T("The profits will be divided among the participating AIDS charities.");
	words.ex[16] = _T("The chairman authorized  the acquisition of the small competitor.");
	words.ex[17] = _T("Moderate exercise enchances one's appetite.");
	words.ex[18] = _T("The company reimburses employees for all business expenses.");
	words.ex[19] = _T("Only authorized personnel have access to confidential documents.");
	words.ex[20] = _T("This bicycle can be folded away for easy storage.");
	words.ex[21] = _T("Hynix is considering relocating to Shanghai, China.");
	words.ex[22] = _T("The shipping firm provided compensation for the damaged camera.");
	words.ex[23] = _T("Employee reviews are conducted on a regular basis.");
	words.ex[24] = _T("The source of the rumor has not yet been revealed.");
	words.ex[25] = _T("The government is building a new commercial district in Song-do.");
	words.ex[26] = _T("The management is going to evaluate employee performance.");
	words.ex[27] = _T("Do you think comic books encourage children's creativity?");
	words.ex[28] = _T("We produce over 50,000 promotional flyers each year.");
	words.ex[29] = _T("Yosemite National Park is well knowm for its beautiful landscape.");
	words.ex[30] = _T("We experienced considerable difficulty in getting the components.");
	words.ex[31] = _T("The hotel's service was extremely disappointing.");

}
void getWords_Day10(Words &words)
{
	words.word[0] = _T("reasonably"); words.number[0] = 901; words.chinese[0] = _T("adv. �X�z�a�B�A��a");	 words.ps[0] = _T("\r\nps. reasonable (adj) �X�z���B���D��(����)");
	words.word[1] = _T("delegate"); words.number[1] = 904; words.chinese[1] = _T("n. �N��B�|ĳ�N��Fv. ��~���N��B�e���B���v");	 words.ps[1] = _T("\r\nps. delegation (v) �e���B�N���");
	words.word[2] = _T("atmosphere"); words.number[2] = 905; words.chinese[2] = _T("n. ��^�B�j��");	 words.ps[2] = _T("");
	words.word[3] = _T("nearby"); words.number[3] = 909; words.chinese[3] = _T("adj. ���񪺡Fadv. �b����a");	 words.ps[3] = _T("");
	words.word[4] = _T("former"); words.number[4] = 912; words.chinese[4] = _T("adj. �H�e���B�e����");	 words.ps[4] = _T("\r\nps. formerly (adv) �ƥ��a�B���e�a");
	words.word[5] = _T("appliance"); words.number[5] = 917; words.chinese[5] = _T("n. �q���]�ơB�a�q�Ϋ~");	 words.ps[5] = _T("");
	words.word[6] = _T("occupation"); words.number[6] = 919; words.chinese[6] = _T("n. ¾�~�B�u�@�B�e��");	 words.ps[6] = _T("\r\nps. occupy (v) �e�ΡB���ڡB�Ϧ���");
	words.word[7] = _T("administration"); words.number[7] = 920; words.chinese[7] = _T("n. ��F�B�޲z");	 words.ps[7] = _T("\r\nps. administrative (adj) ��F���B�޲z���F\r\n    administrator (n) �޲z�̡B��F�x��");
	words.word[8] = _T("federal"); words.number[8] = 926; words.chinese[8] = _T("adj. �p�����B�p���F����");	 words.ps[8] = _T("");
	words.word[9] = _T("eliminate"); words.number[9] = 928; words.chinese[9] = _T("v. ���h�B�^�O�B����");	 words.ps[9] = _T("\r\nps. elimination (n) ���h�B�ڰ��B�^�O");
	words.word[10] = _T("complement"); words.number[10] = 930; words.chinese[10] = _T("v. �ɥR�B�ɨ��Fn. �ɥR���B�ɥR");	 words.ps[10] = _T("\r\nps. complementary (adj) �ɥR���B���ɪ�");
	words.word[11] = _T("tow"); words.number[11] = 934; words.chinese[11] = _T("v. (���B�)�즲�B�o�ޡB�ԵۡFn. ��B�ԡB�쨮");	 words.ps[11] = _T("");
	words.word[12] = _T("undergo"); words.number[12] = 939; words.chinese[12] = _T("v. �g���B�D��");	 words.ps[12] = _T("");
	words.word[13] = _T("workspace"); words.number[13] = 941; words.chinese[13] = _T("n. �u�@����");	 words.ps[13] = _T("");
	words.word[14] = _T("regardless of"); words.number[14] = 945; words.chinese[14] = _T("prep. ���סB����");	 words.ps[14] = _T("\r\nps. regard (v)(293) ��~�ݧ@�Fregarding (prep) ����~");
	words.word[15] = _T("aisle"); words.number[15] = 946; words.chinese[15] = _T("n. ���D�B�q�D");	 words.ps[15] = _T("");
	words.word[16] = _T("transit"); words.number[16] = 951; words.chinese[16] = _T("n. ��e�B�B�e�B�q�L�Fv. �q�L�B�B�e��");	 words.ps[16] = _T("");
	words.word[17] = _T("commission"); words.number[17] = 953; words.chinese[17] = _T("n. �����B���ȡB�e���|�Fv. �e���B�e�U�B���R");	 words.ps[17] = _T("\r\nps. commissioner (n) �e���B���x");
	words.word[18] = _T("hesitate"); words.number[18] = 956; words.chinese[18] = _T("v. �S�ݡB�C�ܡB���ü{");	 words.ps[18] = _T("\r\nps. hesitation (n) �C�ܡB�S�ݡFhesitant (adj) �S�ݪ��B��ê�");
	words.word[19] = _T("packet"); words.number[19] = 958; words.chinese[19] = _T("n. �p�]�B�p���B�p�]�q�Fv. ��~�����p�]");	 words.ps[19] = _T("");
	words.word[20] = _T("transaction"); words.number[20] = 964; words.chinese[20] = _T("n. ����B(�~�ȵ���)�B�z");	 words.ps[20] = _T("\r\nps. transactional (adj) (�~��)������B�~�ȤW��");
	words.word[21] = _T("payroll"); words.number[21] = 966; words.chinese[21] = _T("n. �~��W��B��I�~���`�B");	 words.ps[21] = _T("");
	words.word[22] = _T("strict"); words.number[22] = 972; words.chinese[22] = _T("adj. �Y�檺�B�Y�F���B��T��");	 words.ps[22] = _T("\r\nps. strictly (adv) �Y��a�B�Y�Ԧa");
	words.word[23] = _T("ingredient"); words.number[23] = 973; words.chinese[23] = _T("n. ���ơB�����B�n��");	 words.ps[23] = _T("");
	words.word[24] = _T("familiar"); words.number[24] = 980; words.chinese[24] = _T("adj. ���x���B���Ѫ��B�˪�");	 words.ps[24] = _T("\r\nps. familiarize (v) �ϼ��x�B�Ͽ˪�C�ۤϵ��Gunfamiliar (adj) �����x���C");
	words.word[25] = _T("influence"); words.number[25] = 982; words.chinese[25] = _T("n. �v�T�B�@�ΡFv. �v�T�B���k");	 words.ps[25] = _T("");
	words.word[26] = _T("estate"); words.number[26] = 985; words.chinese[26] = _T("n. �a���B�]���B����B�����B�a��");	 words.ps[26] = _T("");
	words.word[27] = _T("adequate"); words.number[27] = 988; words.chinese[27] = _T("adj. �������B�R�����B�A��");	 words.ps[27] = _T("\r\nps. adequately (adv) �R���a�B�A��a�C\r\n    �ۤϵ��Ginadequate ���R�����B�����檺");
	words.word[28] = _T("implement"); words.number[28] = 993; words.chinese[28] = _T("v. ����B��I�Fn. �u��B����B��q");	 words.ps[28] = _T("\r\nps. implementation (n) ���B����");
	words.word[29] = _T("accomplish"); words.number[29] = 994; words.chinese[29] = _T("v. �����B��{�B�F��");	 words.ps[29] = _T("\r\nps. accomplishment (n) ���N�B�����Faccomplished (adj) ���\���B�w��{��");
	words.word[30] = _T("portion"); words.number[30] = 997; words.chinese[30] = _T("n. �@�����Fv. ���t�B�����h��");	 words.ps[30] = _T("");
	words.word[31] = _T("blueprint"); words.number[31] = 1000; words.chinese[31] = _T("n. �ŹϡB�]�p�ϡB�p�e");	 words.ps[31] = _T("");

	words.ex[0] = _T("The tickets for the musical were reasonably priced.");
	words.ex[1] = _T("He met with delegates from several large corporations.");
	words.ex[2] = _T("It is important to create a friendly atmosphere at the office.");
	words.ex[3] = _T("I left my car in a nearby parking lot.");
	words.ex[4] = _T("Louis Anderson is a former employee of this company.");
	words.ex[5] = _T("Housework has become easier because of household appliances.");
	words.ex[6] = _T("Please write your name, age and occupation on the form.");
	words.ex[7] = _T("Betty has worked in office administration for nearly 10 years.");
	words.ex[8] = _T("Federal regulations require office buildings to have fire exits.");
	words.ex[9] = _T("We're trying eliminate safety hazards from the construction site.");
	words.ex[10] = _T("The governor developed incentives to complement the tax plan.");
	words.ex[11] = _T("The vehicle is being towed away from the lot.");
	words.ex[12] = _T("Since he'd left, the company had undergone drastic changes.");
	words.ex[13] = _T("They rolled out a campaign to prevent sexual harassment in the workplace.");
	words.ex[14] = _T("You must record all company expenses, regardless of the amount.");
	words.ex[15] = _T("The aisles are lined with chairs.");
	words.ex[16] = _T("The shipment you inquired about is currently in transit.");
	words.ex[17] = _T("On every sale you'll receive a 20% commission.");
	words.ex[18] = _T("If you have any questions, please don't hesitate to get in touch with me.");
	words.ex[19] = _T("Conference attendees will receive information packets this morning.");
	words.ex[20] = _T("We have had no transactions with the company for several months.");
	words.ex[21] = _T("Contact the payroll manager if you don't receive your salary.");
	words.ex[22] = _T("The company has a strict policy on frequent absences.");
	words.ex[23] = _T("Chicken and potatoes are the main ingredients of this dish.");
	words.ex[24] = _T("All staff members should be familiar with reporting procedures.");
	words.ex[25] = _T("The senior executive has strong influence within the company.");
	words.ex[26] = _T("Mr. Rich has own house on a neat housing estate in Marietta.");
	words.ex[27] = _T("The R&D division does not receive adequate funding.");
	words.ex[28] = _T("We're planninga to implement a new advertising strategy.");
	words.ex[29] = _T("Mr. Charon accomplished a great deal during his career.");
	words.ex[30] = _T("Large portions of his time are spent handling customer complaints.");
	words.ex[31] = _T("The architect is making the blueprints for the new building.");

}
void getWords_Day11(Words &words)
{
	words.word[0] = _T("refuse"); words.number[0] = 1001; words.chinese[0] = _T("n. �ڵ��B�^��");	 words.ps[0] = _T("\r\nps. refusal (n) �ڵ�");
	words.word[1] = _T("memorandum"); words.number[1] = 1005; words.chinese[1] = _T("n. �Ƨѿ��B���� = memo");	 words.ps[1] = _T("");
	words.word[2] = _T("outline"); words.number[2] = 1009; words.chinese[2] = _T("n. �����B���n�B���I�B�����Fv. ���z�B���z�B�e����");	 words.ps[2] = _T("");
	words.word[3] = _T("duplicate"); words.number[3] = 1010; words.chinese[3] = _T("n. �ƥ��B�ƻs�Fv. �ƻs�Fadj. �ƻs���B�����@�˪�");	 words.ps[3] = _T("\r\nps. duplication (n) �ƻs�B����");
	words.word[4] = _T("insulation"); words.number[4] = 1014; words.chinese[4] = _T("n. �j���B�j���B���t");	 words.ps[4] = _T("\r\nps. insulate (v) �j���B�ϵ��t�B�Ϲj��");
	words.word[5] = _T("assign"); words.number[5] = 1016; words.chinese[5] = _T("v. �����B���t�B���R");	 words.ps[5] = _T("\r\nps. assignment (n) ���ȡB�a�x�@�~");
	words.word[6] = _T("critical"); words.number[6] = 1019; words.chinese[6] = _T("adj. ����ʪ��B���n���B�M�檺�B��P���B�j��D����");	 words.ps[6] = _T("\r\nps. criticize (v) ����B�D���B�V�D�Fcritic (n) ����a�B���׭�");
	words.word[7] = _T("expire"); words.number[7] = 1022; words.chinese[7] = _T("v. ����B�����B���`");	 words.ps[7] = _T("\r\nps. expiration (n) ����B�����B�פ�");
	words.word[8] = _T("oversee"); words.number[8] = 1026; words.chinese[8] = _T("v. �ʷ��B�޲z");	 words.ps[8] = _T("\r\nps. �ۦ����Gsupervise �޲z�Coverseer (n) �u�Y�B�ʤu");
	words.word[9] = _T("conclusion"); words.number[9] = 1027; words.chinese[9] = _T("n. ���סB�M�w�B����");	 words.ps[9] = _T("\r\nps. conclude (v) �U���סB���X(�̫�)�M�w�B�����F\r\n    conclusive (adj) ���ת��B�M�w�ʪ�");
	words.word[10] = _T("respect"); words.number[10] = 1031; words.chinese[10] = _T("v. �L�q�B�q���B��u");	 words.ps[10] = _T("\r\nps. respectful (adj) ���q���B�L�q���Frespective (adj) �U�۪��B�ӧO��");
	words.word[11] = _T("admission"); words.number[11] = 1035; words.chinese[11] = _T("n. �J���\�i�B�J�ǳ\�i�B�J����B�ӻ{");	 words.ps[11] = _T("\r\nps. admit (v)(666) �ӻ{�B�\�i");
	words.word[12] = _T("satisfactory"); words.number[12] = 1040; words.chinese[12] = _T("adj. �O�H���N���B�ŦX�n�D��");	 words.ps[12] = _T("\r\nps. �ۤϵ��Gunsatisfactory (adj) �O�H���������C satisfaction (n) �����B���N");
	words.word[13] = _T("paycheck"); words.number[13] = 1041; words.chinese[13] = _T("n. �~��(�䲼)�B�u��");	 words.ps[13] = _T("");
	words.word[14] = _T("suburban"); words.number[14] = 1045; words.chinese[14] = _T("adj. ���ϡB�񭥪��B�h��");	 words.ps[14] = _T("\r\nps. �ۤϵ��Gurban (adj) �������Csuburb (n) ���ϡB����");
	words.word[15] = _T("tariff"); words.number[15] = 1048; words.chinese[15] = _T("n. ���|�B�|�v�B���|��");	 words.ps[15] = _T("");
	words.word[16] = _T("personality"); words.number[16] = 1051; words.chinese[16] = _T("n. �өʡB�ʮ�B�W�H");	 words.ps[16] = _T("\r\nps. �ۦ����Gcelebrity (797) �W�H�Cpersonal (adj) �ӤH�B�p�H���F\r\n    interpersonal (adj)(2378) �H�����Y���B�H�P�H������");
	words.word[17] = _T("domestic"); words.number[17] = 1053; words.chinese[17] = _T("adj. �ꤺ���B�a�x��");	 words.ps[17] = _T("\r\nps. domestically (adv) �ꤺ�a�C�ۤϵ��Gabroad ��~�a�F\r\n    ��~���Gforeign�Boversea");
	words.word[18] = _T("suspend"); words.number[18] = 1058; words.chinese[18] = _T("v. �Ȯɰ�¾/�ǡB�Ȱ��B�Ƚw����");	 words.ps[18] = _T("\r\nps. suspension (n) �Ȱ��B����B��¾�B����");
	words.word[19] = _T("coverage"); words.number[19] = 1061; words.chinese[19] = _T("n. �O�I�d��B�[�\�d��");	 words.ps[19] = _T("");
	words.word[20] = _T("interfere"); words.number[20] = 1066; words.chinese[20] = _T("v. �z�Z�B��ê�B��Ĳ");	 words.ps[20] = _T("");
	words.word[21] = _T("keynote"); words.number[21] = 1070; words.chinese[21] = _T("n. ��աB�D���B�򥻤�w�Fv. ���D���o��");	 words.ps[21] = _T("");
	words.word[22] = _T("qualification"); words.number[22] = 1071; words.chinese[22] = _T("n. ���B����");	 words.ps[22] = _T("\r\nps. qualify (v)(510) ���㦳���B�ϦX��");
	words.word[23] = _T("substantial"); words.number[23] = 1075; words.chinese[23] = _T("adj. �j�q���B�۷�h���B��b��");	 words.ps[23] = _T("\r\nps. substantially (adv) �۷�h�a�B���j�a");
	words.word[24] = _T("prospective"); words.number[24] = 1077; words.chinese[24] = _T("adj. ���Ʊ檺�B�w�����B�i��o�ͪ�");	 words.ps[24] = _T("\r\nps. prospect (v) ���ɡF(n) �i��B�e���B����");
	words.word[25] = _T("content"); words.number[25] = 1081; words.chinese[25] = _T("n. ���e�B�e�q�Fadj. �������B���N���Fv. �Ϻ���");	 words.ps[25] = _T("\r\nps. contentment (n) �����B����");
	words.word[26] = _T("proof"); words.number[26] = 1083; words.chinese[26] = _T("n. �ҩ��B�ҾڡFadj. ���ת�");	 words.ps[26] = _T("");
	words.word[27] = _T("commitment"); words.number[27] = 1087; words.chinese[27] = _T("n. �^�m�B��J�B�P�O�B�ӿ�");	 words.ps[27] = _T("\r\nps. commit (v) ����B��J�B�O�ҡB��(����)�B��(�o)");
	words.word[28] = _T("extensive"); words.number[28] = 1091; words.chinese[28] = _T("adj. �j�q���B�s�x���B�j�W�Ҫ�");	 words.ps[28] = _T("\r\nps. extension (n) �����B����");
	words.word[29] = _T("pollution"); words.number[29] = 1094; words.chinese[29] = _T("n. ���V");	 words.ps[29] = _T("\r\nps. pollutant (n) ���V��");
	words.word[30] = _T("commute"); words.number[30] = 1096; words.chinese[30] = _T("v. �q�ԡB�q�ǡFn. �q�ԡB�q��");	 words.ps[30] = _T("\r\nps. commuter (n) �q�Ԫ�");
	words.word[31] = _T("merge"); words.number[31] = 1099; words.chinese[31] = _T("v. �ϦX�֡B�ϿĦX");	 words.ps[31] = _T("\r\nps. merger (n) (���q����)�X��");

	words.ex[0] = _T("The union leaders refused to accept the offer.");
	words.ex[1] = _T("My secretary sent the memorandum to the whole staff.");
	words.ex[2] = _T("The new CEO gave an outline of his plans for the company.");
	words.ex[3] = _T("You can keep the original but give me the duplicate.");
	words.ex[4] = _T("Effective insulation can keep your house warm in winter.");
	words.ex[5] = _T("The manager assigned the Larson contract to William.");
	words.ex[6] = _T("Agriculture is a critical part of New Zealand's economy.");
	words.ex[7] = _T("Your subscription to Vogue magazine expires next month.");
	words.ex[8] = _T("It's the supervisor's job to oversee the assembly line.");
	words.ex[9] = _T("We came to the conclusion that the marketing campaign was unnecessary.");
	words.ex[10] = _T("Mr. Shepherd is highly respected fot his charity work.");
	words.ex[11] = _T("There is a 3 dollar admission fee for children.");
	words.ex[12] = _T("The results were not as satisfactory as expected.");
	words.ex[13] = _T("New employees will receive their first paycheck on May 10.");
	words.ex[14] = _T("The real estate agent advised us to buy property in suburban areas.");
	words.ex[15] = _T("The government plans to reduce tariffs on imports.");
	words.ex[16] = _T("You need a friendly personality to work on the customer service team.");
	words.ex[17] = _T("Kimpo is for domestic flights while Incheon is for international ones.");
	words.ex[18] = _T("The employee is suspended until further notice.");
	words.ex[19] = _T("The policy gives customers full life insurance coverage.");
	words.ex[20] = _T("High temperatures can interfere with the operation of the equipment.");
	words.ex[21] = _T("Mr. Boswell will be our keynote speaker at this conference.");
	words.ex[22] = _T("The applicant for the marketing vacancy has outstanding qualifications.");
	words.ex[23] = _T("A substantial amount of time and money was put into the construction project.");
	words.ex[24] = _T("We should always keep a list of prospective customers.");
	words.ex[25] = _T("Can you tell me the contents of the package?");
	words.ex[26] = _T("Customers must keep the receipt as proof of purchase.");
	words.ex[27] = _T("I appreciate all our employees' commitment to NY Inc.");
	words.ex[28] = _T("This dictionary includes an extensive vocabulary.");
	words.ex[29] = _T("The new legislation aimes to reduce inner-city air pollution.");
	words.ex[30] = _T("Most of the company staff commute to work by subway.");
	words.ex[31] = _T("Bentley Motors and Dixon Motors will merge later this year.");

}
void getWords_Day12(Words &words)
{
	words.word[0] = _T("suitable"); words.number[0] = 1102; words.chinese[0] = _T("adj. �A�X���B�A�y��");	 words.ps[0] = _T("\r\nps. suitably (adv) �A��a�Fsuitability (n) �A�X�B�۰t");
	words.word[1] = _T("exceed"); words.number[1] = 1105; words.chinese[1] = _T("v. �W�L�B�W�L�B�u��");	 words.ps[1] = _T("\r\nps. exceedingly (adv) ���צa�B�D�`�a");
	words.word[2] = _T("crew"); words.number[2] = 1109; words.chinese[2] = _T("n. (��B��������) ����խ�");	 words.ps[2] = _T("\r\nps. �ۦ����Gflight attendants�F");
	words.word[3] = _T("dedicated"); words.number[3] = 1112; words.chinese[3] = _T("adj. �m�����B�P�O���B�M�`��");	 words.ps[3] = _T("\r\nps. dedicate (v) �m���B�P�O�Fdedication (n) �m���B�M�߭P�O");
	words.word[4] = _T("stack"); words.number[4] = 1115; words.chinese[4] = _T("v. ���|�B�|����Fn. �@��B���|��");	 words.ps[4] = _T("");
	words.word[5] = _T("otherwise"); words.number[5] = 1117; words.chinese[5] = _T("adv. ���M�B�_�h�B�������~");	 words.ps[5] = _T("");
	words.word[6] = _T("courier"); words.number[6] = 1118; words.chinese[6] = _T("n. �ֻ��B�ֻ��~��");	 words.ps[6] = _T("");
	words.word[7] = _T("expedite"); words.number[7] = 1122; words.chinese[7] = _T("v. �[�t���B�z�B�[�t�i��");	 words.ps[7] = _T("\r\nps. �ۦ����Gspeed up�Cexpedition (n) ���I�B�����B������");
	words.word[8] = _T("steering"); words.number[8] = 1125; words.chinese[8] = _T("n. �޲�˸m�B��V�L�B����");	 words.ps[8] = _T("\r\nps. steer (v) �x��B�a��B���ɡB���a");
	words.word[9] = _T("experiment"); words.number[9] = 1127; words.chinese[9] = _T("v. �i�����Fn. ����");	 words.ps[9] = _T("\r\nps. experimental (adj) ���窺�Fexperimentally (adv) ����a");
	words.word[10] = _T("booklet"); words.number[10] = 1131; words.chinese[10] = _T("n. �p�U�l�B��ƥ�");	 words.ps[10] = _T("");
	words.word[11] = _T("comprehensive"); words.number[11] = 1136; words.chinese[11] = _T("adj. �������B�s�x��");	 words.ps[11] = _T("\r\nps. comprehend (v) ��|�B�z��");
	words.word[12] = _T("polish"); words.number[12] = 1141; words.chinese[12] = _T("v. ���G�B�i���Fn. ���A�B���G");	 words.ps[12] = _T("");
	words.word[13] = _T("grocery"); words.number[13] = 1145; words.chinese[13] = _T("n. ���~���f�B���~���f�~");	 words.ps[13] = _T("");
	words.word[14] = _T("retain"); words.number[14] = 1147; words.chinese[14] = _T("v. �O�d�B�O���B�O��");	 words.ps[14] = _T("\r\nps. retainer (n) (���߮v��)�u�йw�I��");
	words.word[15] = _T("assure"); words.number[15] = 1148; words.chinese[15] = _T("v. �V~�O�ҡB�Ϧw�ߡB�ϽT�w");	 words.ps[15] = _T("\r\nps. assurance (n) �T�H�B�O��");
	words.word[16] = _T("status"); words.number[16] = 1152; words.chinese[16] = _T("n. ���p�B���A�B�a��B����");	 words.ps[16] = _T("");
	words.word[17] = _T("utility"); words.number[17] = 1155; words.chinese[17] = _T("n. ���ΨƷ~�B��Ω�");	 words.ps[17] = _T("\r\nps. utilize (v)(1352) �Q��");
	words.word[18] = _T("publicity"); words.number[18] = 1156; words.chinese[18] = _T("n. �ŶǡB�s�i�B(������)�`�N");	 words.ps[18] = _T("");
	words.word[19] = _T("draft"); words.number[19] = 1160; words.chinese[19] = _T("v. �����Fn. ��Z�B��סB�״ڳ�");	 words.ps[19] = _T("");
	words.word[20] = _T("paperwork"); words.number[20] = 1166; words.chinese[20] = _T("n. ��Ѥu�@�B�ѭ��@�~");	 words.ps[20] = _T("");
	words.word[21] = _T("complete"); words.number[21] = 1169; words.chinese[21] = _T("v. �����B�ϧ����Fadj. ���㪺�B������");	 words.ps[21] = _T("\r\nps. �ۤϵ��Gimcomplete (adj) ���������B�����㪺�C\r\n    completion (n) ��{�B����");
	words.word[22] = _T("occur"); words.number[22] = 1173; words.chinese[22] = _T("v. �o�͡B�X�{�B�Q�Q�_");	 words.ps[22] = _T("\r\nps. occurance (n) (�ƥ�)�o��");
	words.word[23] = _T("auditorium"); words.number[23] = 1175; words.chinese[23] = _T("n. �t���U�B§��B�|��B�[���u");	 words.ps[23] = _T("");
	words.word[24] = _T("relevant"); words.number[24] = 1179; words.chinese[24] = _T("adj. �������B���D��");	 words.ps[24] = _T("\r\nps. �ۤϵ��Girrelevant (adj) �L�����B�����D���Crelevance (n) ���p");
	words.word[25] = _T("protective"); words.number[25] = 1180; words.chinese[25] = _T("adj. �O�@���B���@��");	 words.ps[25] = _T("\r\nps. protection (n) �O�@�B���@");
	words.word[26] = _T("transmission"); words.number[26] = 1185; words.chinese[26] = _T("n. (�H���B�s����)�ǿ�B�ǻ��B�ܳt��");	 words.ps[26] = _T("\r\nps. transmit (v) �ǰe�B�Ǽ�");
	words.word[27] = _T("equip"); words.number[27] = 1188; words.chinese[27] = _T("v. �t�ơB�˳ơB�Ϧ���O��");	 words.ps[27] = _T("\r\nps. equipment (n) �t�ơB�˳�");
	words.word[28] = _T("portable"); words.number[28] = 1192; words.chinese[28] = _T("adj. ��a�����B�K����a���Fn. �ⴣ���s�~");	 words.ps[28] = _T("");
	words.word[29] = _T("vacancy"); words.number[29] = 1193; words.chinese[29] = _T("n. ¾�ʡB�ůʡB�ũСF");	 words.ps[29] = _T("\r\nps. vacate (v)(1466) �ťX�B�h�X�B���}�B��¾�F\r\n    vacant (adj) �ŵ۪��B���Q�e�Ϊ�");
	words.word[30] = _T("emphasize"); words.number[30] = 1196; words.chinese[30] = _T("v. �j��");	 words.ps[30] = _T("\r\nps. emphasis (n) �j�աB���I�Femphatic (adj) �j�ժ��B�[�j�y��");
	words.word[31] = _T("prohibit"); words.number[31] = 1200; words.chinese[31] = _T("v. �T��B����");	 words.ps[31] = _T("\r\nps. prohibition (n) �T��B����");

	words.ex[0] = _T("We still haven't found anyone suitable for the role.");
	words.ex[1] = _T("Sarah Potter always exceeds her monthly sales goals.");
	words.ex[2] = _T("I'm writing this letter to thank the entire cabin crew.");
	words.ex[3] = _T("The marketing team consists of very dedicated and talented members.");
	words.ex[4] = _T("The baskets are stacked on top of each other.");
	words.ex[5] = _T("Hurry up, otherwise you'll be late for your appointment.");
	words.ex[6] = _T("FedEx is so proud of its worldwide courier service.");
	words.ex[7] = _T("We would like to expedite the delivery date to October 30.");
	words.ex[8] = _T("Turn the steering wheel all the way to the left.");
	words.ex[9] = _T("The HR team is experimenting with a flexible work roster.");
	words.ex[10] = _T("He distributed booklets at the start of the seminar.");
	words.ex[11] = _T("The local government devised a comprehensive crime prevention plan.");
	words.ex[12] = _T("The maintenance crew is polishing the wooden floor.");
	words.ex[13] = _T("L Mart is one of the largest grocery stores in Korea.");
	words.ex[14] = _T("The Food&Drug Administration still retains control of food imports.");
	words.ex[15] = _T("InkFast assured me that they would finish the documents on time.");
	words.ex[16] = _T("I will check the status of the flight before leaving.");
	words.ex[17] = _T("The residents in 4B haven't paid their utilities bill.");
	words.ex[18] = _T("The publicity manager arranged a press conference.");
	words.ex[19] = _T("The journalist only drafted a rough copy of the story.");
	words.ex[20] = _T("The management is seeking to reduce the amount of paperwork.");
	words.ex[21] = _T("It will take a month to complete the building.");
	words.ex[22] = _T("If any problems occur, please contact me right away.");
	words.ex[23] = _T("The London Orchestra is set to play in our local auditorium.");
	words.ex[24] = _T("That case has been handed over to the relevant department.");
	words.ex[25] = _T("Factory staff should wear protective clothing at all times.");
	words.ex[26] = _T("The company handles the national transmission of all broadcasts.");
	words.ex[27] = _T("The hotel is equipped to handle large funcitons.");
	words.ex[28] = _T("Our MP3 player can be used as a portable storage device.");
	words.ex[29] = _T("I heard there is a vacancy on the advertising team.");
	words.ex[30] = _T("The mayor emphasized that he is committed to cutting taxes.");
	words.ex[31] = _T("Smoking is prohibited throughout the airport terminal.");

}
void getWords_Day13(Words &words)
{
	words.word[0] = _T("correspondence"); words.number[0] = 1204; words.chinese[0] = _T("n. �q�H�B�@�P�B�ŦX");	 words.ps[0] = _T("\r\nps. correspond (v) �q�H�B�M~�ŦX�B�۷�F\r\n    corresponding (adj) �������B�@�P��");
	words.word[1] = _T("absolute"); words.number[1] = 1206; words.chinese[1] = _T("adj. ���諸�B�T�ꪺ");	 words.ps[1] = _T("\r\nps. absolutely (adv) ����a�B�����a");
	words.word[2] = _T("streamline"); words.number[2] = 1207; words.chinese[2] = _T("v. ²�ơB�X�z�ơFn. �y�u��");	 words.ps[2] = _T("");
	words.word[3] = _T("lack"); words.number[3] = 1211; words.chinese[3] = _T("v. �ʥF�B�u�ʡFn. ���F�B����");	 words.ps[3] = _T("");
	words.word[4] = _T("itinerary"); words.number[4] = 1215; words.chinese[4] = _T("n. ��{��B�Ȧ�p�e");	 words.ps[4] = _T("");
	words.word[5] = _T("compose"); words.number[5] = 1218; words.chinese[5] = _T("v. �զ��B�c���B�@���B�c��");	 words.ps[5] = _T("\r\nps. composition (n) �֦��B�@��B�c���Fcomposer (n) �@���a");
	words.word[6] = _T("confidence"); words.number[6] = 1220; words.chinese[6] = _T("n. �H�ߡB�ⴤ�B�۫H�B���K");	 words.ps[6] = _T("\r\nps. comfident (adj) ���H�ߪ��B���ⴤ��");
	words.word[7] = _T("affair"); words.number[7] = 1225; words.chinese[7] = _T("n. �H��B�ưȡB�פl�B�~�J");	 words.ps[7] = _T("");
	words.word[8] = _T("raw"); words.number[8] = 1227; words.chinese[8] = _T("adj. �ͪ��B�L�[�u���B�s�A��");	 words.ps[8] = _T("");
	words.word[9] = _T("thorough"); words.number[9] = 1232; words.chinese[9] = _T("adj. �������B������");	 words.ps[9] = _T("\r\nps. thoroughly (adv) �����a�Fthoroughness (n) �����B����");
	words.word[10] = _T("superior"); words.number[10] = 1236; words.chinese[10] = _T("adj. ���n���B�W�����B���u�V�P��");	 words.ps[10] = _T("\r\nps. superiority (n) �u�V�B�u��");
	words.word[11] = _T("assume"); words.number[11] = 1237; words.chinese[11] = _T("v. �Ӿ�B�H���B���w");	 words.ps[11] = _T("\r\nps. assumption (n) �����B���w�B�Ӿ�");
	words.word[12] = _T("routine"); words.number[12] = 1241; words.chinese[12] = _T("adj. �Ҧ檺�B��`���Fn. �Ҧ椽�ơB�D��");	 words.ps[12] = _T("\r\nps. routinely (adv) �D�`�a�B�Ҧ�a");
	words.word[13] = _T("clarify"); words.number[13] = 1244; words.chinese[13] = _T("v. ��M�B�˲M���B�b��");	 words.ps[13] = _T("\r\nps. clarification (n) �b�ơB��M");
	words.word[14] = _T("appraisal"); words.number[14] = 1246; words.chinese[14] = _T("n. �����B���q�B�Ү�");	 words.ps[14] = _T("\r\nps. appraise (v) �����B�����B����");
	words.word[15] = _T("restructuring"); words.number[15] = 1249; words.chinese[15] = _T("n. ��աB����");	 words.ps[15] = _T("\r\nps. restructure (v) ���ءB���");
	words.word[16] = _T("complimentary"); words.number[16] = 1254; words.chinese[16] = _T("adj. �K�O�ذe���B���g���B��q�N��");	 words.ps[16] = _T("\r\nps. compliment (n)(1381) �g�����ܡB�q�N�B�P�N�F(v) �g���B���g");
	words.word[17] = _T("compile"); words.number[17] = 1257; words.chinese[17] = _T("v. �J��B�`��");	 words.ps[17] = _T("");
	words.word[18] = _T("inflation"); words.number[18] = 1261; words.chinese[18] = _T("n. �q�f���ȡB�W��");	 words.ps[18] = _T("\r\nps. �ۤϵ��Gdeflation (n) �q�f���Y�Cinflate (v) �Ͽ��ȡB�ﰪ�B�R��");
	words.word[19] = _T("urgent"); words.number[19] = 1262; words.chinese[19] = _T("adj. ��檺�B�止��");	 words.ps[19] = _T("\r\nps. urgently (adv) ���a�Furgency (n) ���B�止");
	words.word[20] = _T("designate"); words.number[20] = 1265; words.chinese[20] = _T("v. ���w�B�����B�Щ��Fadj. ���w���B�Q���R��");	 words.ps[20] = _T("");
	words.word[21] = _T("surround"); words.number[21] = 1269; words.chinese[21] = _T("v. ��¶�B�]��");	 words.ps[21] = _T("\r\nps. surrounding (adj) �P�򪺡B���񪺡Fsurroundings (n) ���ҡB�P�򪺨ƪ�");
	words.word[22] = _T("durable"); words.number[22] = 1272; words.chinese[22] = _T("adj. �@�Ϊ��B�g�[��");	 words.ps[22] = _T("\r\nps. durablility (n) �@�[��");
	words.word[23] = _T("customize"); words.number[23] = 1275; words.chinese[23] = _T("v. �q���B�q�s");	 words.ps[23] = _T("\r\nps. customer (n) ���O��");
	words.word[24] = _T("finding"); words.number[24] = 1279; words.chinese[24] = _T("n. �լd/��s���G�B�o�{");	 words.ps[24] = _T("");
	words.word[25] = _T("pharmaceutical"); words.number[25] = 1283; words.chinese[25] = _T("adj. �s�Ī��B�t�Ī��Fn. �Ī�");	 words.ps[25] = _T("");
	words.word[26] = _T("steady"); words.number[26] = 1285; words.chinese[26] = _T("adj. í�w���B�w�w���Fv. ��í�T�Fadv. í�T�a");	 words.ps[26] = _T("\r\nps. steadily (adv) í�w�a");
	words.word[27] = _T("reject"); words.number[27] = 1288; words.chinese[27] = _T("v. �_�M�B�ڵ�");	 words.ps[27] = _T("\r\nps. rejection (n) �ڵ��B�ƥ�");
	words.word[28] = _T("motivation"); words.number[28] = 1291; words.chinese[28] = _T("n. �ʾ��B�ʤO�B���]");	 words.ps[28] = _T("\r\nps. motivate (v) �ᤩ�ʾ��B�E�o�Fmotivated (adj) ���ʾ���");
	words.word[29] = _T("acknowledge"); words.number[29] = 1295; words.chinese[29] = _T("v. �i������B�ӻ{�B�P��");	 words.ps[29] = _T("");
	words.word[30] = _T("spokesperson"); words.number[30] = 1297; words.chinese[30] = _T("n. �o���H");	 words.ps[30] = _T("");
	words.word[31] = _T("recipient"); words.number[31] = 1298; words.chinese[31] = _T("n. ����̡B������");	 words.ps[31] = _T("\r\nps. receipt (n)(180) ���ڡB����");

	words.ex[0] = _T("I'm sending this in regards to your recent correspondence.");
	words.ex[1] = _T("The company requires absolute commitment from all its employees.");
	words.ex[2] = _T("The personnel manager wants to streamline the recruitment process.");
	words.ex[3] = _T("The job candidate lacks the necessary interpersonal skills.");
	words.ex[4] = _T("The agent will forward your travel itinerary.");
	words.ex[5] = _T("The organization is composed of various people of different ages.");
	words.ex[6] = _T("I have complete confidence in Ms. Gilmore's ability to manage the team.");
	words.ex[7] = _T("I keep up-to-date with news and current affairs.");
	words.ex[8] = _T("Cacao is the raw material of chocolate.");
	words.ex[9] = _T("The inspector conducted a thorough investigation of the building.");
	words.ex[10] = _T("Computech's supplies are superior to anything else on the market.");
	words.ex[11] = _T("She had to assume her boss's responsibilities.");
	words.ex[12] = _T("A serious problem was found during a routine maintenance check.");
	words.ex[13] = _T("We need to clarify where the responsibility lies.");
	words.ex[14] = _T("Management will conduct employee performance appraisals soon,");
	words.ex[15] = _T("The company is laying off half of the employees during the restructuring.");
	words.ex[16] = _T("All hotel guests are entitled to a complimentary breakfast.");
	words.ex[17] = _T("The figures were compiled from a survey of 10,000 respondents.");
	words.ex[18] = _T("Steel worker's wages have barely kept up with inflation.");
	words.ex[19] = _T("The chairperson called the directors together for an urgent meeting.");
	words.ex[20] = _T("City Hall is designated as a protected heritage site.");
	words.ex[21] = _T("The new town is surrounded by a greenbelt.");
	words.ex[22] = _T("These plastic gloves are made using a durable material.");
	words.ex[23] = _T("We can customize the product according to the customer's needs.");
	words.ex[24] = _T("The professor published his findings in a business journal.");
	words.ex[25] = _T("Pharmaceutical companies direct most of their advertising toward doctors.");
	words.ex[26] = _T("In spite of the recession, the economic growth rate has remained steady.");
	words.ex[27] = _T("The IT company rejected the manager proposal.");
	words.ex[28] = _T("Due to the pay cut, the employees have lost their motivation to work.");
	words.ex[29] = _T("Please acknowledge receipt of the books you ordered.");
	words.ex[30] = _T("The White House spokesperson will adress the media this afternoon.");
	words.ex[31] = _T("Recipients of the Arthur Scholarship will receive $3,000 each.");

}
void getWords_Day14(Words &words)
{
	words.word[0] = _T("remark"); words.number[0] = 1303; words.chinese[0] = _T("n. �P��B�t���B�N���B����");	 words.ps[0] = _T("");
	words.word[1] = _T("cautious"); words.number[1] = 1305; words.chinese[1] = _T("adj. �ԷV���B�p�ߪ�");	 words.ps[1] = _T("\r\nps. cautiously (adv) �p���l�l�a�B�ԷV�a");
	words.word[2] = _T("persuade"); words.number[2] = 1309; words.chinese[2] = _T("v. ���A�B�U�A");	 words.ps[2] = _T("\r\nps. persuasive (adj) �����A�O���Fpersuasion (n) ���A");
	words.word[3] = _T("overlook"); words.number[3] = 1310; words.chinese[3] = _T("v. �����B����B�����B�e�e");	 words.ps[3] = _T("");
	words.word[4] = _T("specification"); words.number[4] = 1314; words.chinese[4] = _T("n. �W��B�Բӳ]�p����");	 words.ps[4] = _T("");
	words.word[5] = _T("incorporate"); words.number[5] = 1317; words.chinese[5] = _T("v. �ǤJ�B�]�t(��´�B�t�ΡB�p�e��)�B��~�X��");	 words.ps[5] = _T("\r\nps. corporate (adj) �k�H���B���Ϊ��Fcoporation (n) ���q�F\r\n    incorporation (n) �X�֡B�k�H��´�B���q�Fcooperation �X�@");
	words.word[6] = _T("detour"); words.number[6] = 1318; words.chinese[6] = _T("n. ¶�檺���B���j���Fv. ���j�B¶��B��¶��");	 words.ps[6] = _T("");
	words.word[7] = _T("statistic"); words.number[7] = 1320; words.chinese[7] = _T("n. �έp�B�έp�ƾ�");	 words.ps[7] = _T("\r\nps. statistical (adj) �έp�Ǫ��B�έp���Fstatistician (n) �έp�M�a");
	words.word[8] = _T("sculpture"); words.number[8] = 1327; words.chinese[8] = _T("n. �J��~�B�J���B�J��N�Fv. �J��B�q���J��");	 words.ps[8] = _T("");
	words.word[9] = _T("carton"); words.number[9] = 1330; words.chinese[9] = _T("n. �w�Ȳ��B�콦��");	 words.ps[9] = _T("");
	words.word[10] = _T("broaden"); words.number[10] = 1334; words.chinese[10] = _T("v. �X�i�B���ܼe");	 words.ps[10] = _T("\r\nps. �ۦ����Gexpand (168)�C \r\n    broad (adj) �e���Fbroadly (adv) �e�s�a�B�j��W�a");
	words.word[11] = _T("abstract"); words.number[11] = 1338; words.chinese[11] = _T("n. �K�n�B�Ѩ����Fv. �Ѩ��Fadj. ��H��");	 words.ps[11] = _T("");
	words.word[12] = _T("outdated"); words.number[12] = 1340; words.chinese[12] = _T("adj. �¦����B�L�ɪ�");	 words.ps[12] = _T("");
	words.word[13] = _T("consistent"); words.number[13] = 1344; words.chinese[13] = _T("adj. �@�e���B�e��@�P���B�l�צp�@��");	 words.ps[13] = _T("\r\nps. �ۤϵ��Ginconsistent (adj) ���@�P���B�e��٬ު��C\r\n    consistently (adv) �@�e�a�Fconsistency (n) �@�e�ʡB���");
	words.word[14] = _T("premier"); words.number[14] = 1348; words.chinese[14] = _T("adj. �̨Ϊ��B���n���F�̵ۦW���Fn. ���ۡB�`�z");	 words.ps[14] = _T("");
	words.word[15] = _T("shortage"); words.number[15] = 1349; words.chinese[15] = _T("n. �u�ʡB���F");	 words.ps[15] = _T("");
	words.word[16] = _T("utilize"); words.number[16] = 1352; words.chinese[16] = _T("v. �Q��");	 words.ps[16] = _T("\r\nps. utility (n) (���B�q�B�˴���)���@�Ʒ~");
	words.word[17] = _T("improper"); words.number[17] = 1356; words.chinese[17] = _T("adj. ���A���B���~��");	 words.ps[17] = _T("\r\nps. �ۤϵ��Gproper (adj) �A���Cimproperly (adv) ���A��a");
	words.word[18] = _T("pledge"); words.number[18] = 1358; words.chinese[18] = _T("v. �ӿաB�o�}�Fn. �}���B�O��");	 words.ps[18] = _T("");
	words.word[19] = _T("favorable"); words.number[19] = 1362; words.chinese[19] = _T("adj. ���Q���B�A�X���B�٦P���B�g�\��");	 words.ps[19] = _T("");
	words.word[20] = _T("overdue"); words.number[20] = 1365; words.chinese[20] = _T("adj. �O�ɪ��B�L����");	 words.ps[20] = _T("\r\nps. favorably (adv) �g�\�a�B���Q�a");
	words.word[21] = _T("signature"); words.number[21] = 1368; words.chinese[21] = _T("n. �ݦW�Bñ�W");	 words.ps[21] = _T("");
	words.word[22] = _T("comform"); words.number[22] = 1371; words.chinese[22] = _T("v. �ŦX�B���q�B��ӡB��u");	 words.ps[22] = _T("\r\nps. sign (n) �O���B�Ÿ��B�лx�B�e���F(v) ñ�W");
	words.word[23] = _T("allowance"); words.number[23] = 1375; words.chinese[23] = _T("n. ���B�B�s�ο��B�z�K�B�{�i�B�e��");	 words.ps[23] = _T("\r\nps. allowable (adj) �i���\��");
	words.word[24] = _T("resolve"); words.number[24] = 1380; words.chinese[24] = _T("v. �ѨM�B�M�ߡFn. �M�ߡB�M�N");	 words.ps[24] = _T("\r\nps. resolution (n) �M�ߡB�ѨM�B�Mĳ");
	words.word[25] = _T("compliment"); words.number[25] = 1381; words.chinese[25] = _T("v. ���g�B���P�B��ܷq�N�Fn. �g���B�q�N�B�P�N");	 words.ps[25] = _T("\r\nps. complimentary (adj)(1254) ���g���B�K�O�ذe��");
	words.word[26] = _T("relative"); words.number[26] = 1382; words.chinese[26] = _T("adj. �۹諸�B����W���B�������Fn. �˱�");	 words.ps[26] = _T("\r\nps. relatively (adv) �۹�a�B����W�a");
	words.word[27] = _T("informative"); words.number[27] = 1387; words.chinese[27] = _T("adj. ���Ѧ��θ�T���B�������Ѫ�");	 words.ps[27] = _T("\r\nps. informatively (adv) �W�i���Ѧa");
	words.word[28] = _T("coordinate"); words.number[28] = 1389; words.chinese[28] = _T("v. ��աB�Ϭ۰t�X");	 words.ps[28] = _T("\r\nps. coordination (n) ���");
	words.word[29] = _T("faculty"); words.number[29] = 1393; words.chinese[29] = _T("n. (�j��)����Э��B(�j��)�t�B��B�|");	 words.ps[29] = _T("");
	words.word[30] = _T("encounter"); words.number[30] = 1397; words.chinese[30] = _T("v. �J��B�D�J�B�N�~�J���Fn. ���M�I��");	 words.ps[30] = _T("");
	words.word[31] = _T("occasionally"); words.number[31] = 1400; words.chinese[31] = _T("adv. �����a");	 words.ps[31] = _T("\r\nps. occasional (adj) �������B�D�g�`���Foccasion (n) ���X�B���|�F(v) �ް_");

	words.ex[0] = _T("The CEO will make the closing remarks at the stockholder's meeting.");
	words.ex[1] = _T("Motorists should be cautious when driving in poor weather conditions.");
	words.ex[2] = _T("The salesperson persuaded me to buy an expensive photocopier.");
	words.ex[3] = _T("The tall building overlooks the park.");
	words.ex[4] = _T("You should install software according to the specifications of your computer.");
	words.ex[5] = _T("Many safety features have been incorporated into the new design.");
	words.ex[6] = _T("The tour bus had to take a detour at Cardiff due to the construction.");
	words.ex[7] = _T("According to statistics, Seoul has a population of 10 million.");
	words.ex[8] = _T("An ice sculpture was displayed at the entrance of the event hall.");
	words.ex[9] = _T("We ordered 15 cartons of low-fat yogurt.");
	words.ex[10] = _T("The company's new line of computers will broaden its market share.");
	words.ex[11] = _T("Please send us a short abstract of your presentation.");
	words.ex[12] = _T("All outdated pay phones are being replaced.");
	words.ex[13] = _T("The context of this writing is not consistent.");
	words.ex[14] = _T("Many people prefer a premier wine from Bordeaux.");
	words.ex[15] = _T("The residents fo the farming area are suffering from a water shortage.");
	words.ex[16] = _T("All employees should utilize their time more efficiently at work.");
	words.ex[17] = _T("Improper installation caused the problem with the computer network.");
	words.ex[18] = _T("The oil companies pledge to lower the cost of fuel.");
	words.ex[19] = _T("With favorable market conditions, investors are making large profits.");
	words.ex[20] = _T("Payment for July's electricity bill is two weeks overdue.");
	words.ex[21] = _T("Your signature must be clearly visible on every page.");
	words.ex[22] = _T("All buildings must comform to the safety regulations.");
	words.ex[23] = _T("The maximum luggage allowance is 25 kilograms per person.");
	words.ex[24] = _T("The dispute between the two sides was resolved by the committee.");
	words.ex[25] = _T("The guest complimented the hotel employees on their friendly service.");
	words.ex[26] = _T("He is weighing the relative merits of the two proposals.");
	words.ex[27] = _T("Attendees found the human resources seminar very informative.");
	words.ex[28] = _T("The manager is responsible for coordinating the project.");
	words.ex[29] = _T("The college has modern facilities and an excellent faculty.");
	words.ex[30] = _T("If you encounter any problem with the shipment, please call me.");
	words.ex[31] = _T("Dr. Cullen occasionally speaks at industry events.");

}
void getWords_Day15(Words &words)
{
	words.word[0] = _T("interpret"); words.number[0] = 1403; words.chinese[0] = _T("v. �fĶ�B�����B�z�Ѭ�");	 words.ps[0] = _T("\r\nps. �ۤϵ��Gmisinterpret (v) �~�ѡC \r\n    interpreter (n) �fĶ���Finterpretation (n) �fĶ�B����");
	words.word[1] = _T("remote"); words.number[1] = 1407; words.chinese[1] = _T("adj. �������B�������B���Z��");	 words.ps[1] = _T("\r\nps. remotely (adv) (��/�Ŷ��W)�����a�B(�i���)���p�a");
	words.word[2] = _T("hospitality"); words.number[2] = 1410; words.chinese[2] = _T("n. ���ѭ��J���A�ȡB�����ګݡB�n��");	 words.ps[2] = _T("\r\nps. hospitable (adj) �����۫ݪ��B�n�Ȫ��B�A�y��");
	words.word[3] = _T("restrict"); words.number[3] = 1411; words.chinese[3] = _T("v. ����(�ƶq�B�j�p)�B���w");	 words.ps[3] = _T("\r\nps. restricted (adj) �������B�Q���w���Frestriction (n) ����B���w�B����");
	words.word[4] = _T("seasonal"); words.number[4] = 1414; words.chinese[4] = _T("adj. �u�`�ʪ��B��O��");	 words.ps[4] = _T("");
	words.word[5] = _T("precaution"); words.number[5] = 1417; words.chinese[5] = _T("n. �w�����I�B�w���B�w��");	 words.ps[5] = _T("");
	words.word[6] = _T("freight"); words.number[6] = 1419; words.chinese[6] = _T("n. (��B�B�ŹB��)�f���Fv. �B��");	 words.ps[6] = _T("\r\nps. freighter (n) �f���B�B���");
	words.word[7] = _T("spacious"); words.number[7] = 1424; words.chinese[7] = _T("adj. �e����");	 words.ps[7] = _T("");
	words.word[8] = _T("stimulate"); words.number[8] = 1428; words.chinese[8] = _T("v. ��E�B�Ϧ����O���B�P��");	 words.ps[8] = _T("\r\nps. stimulation (n) ��E�B�E�y�Fstimulating (adj) �E�y�H��");
	words.word[9] = _T("advisory"); words.number[9] = 1431; words.chinese[9] = _T("adj. �Ըߪ��B�U�ݪ��B�U�i��");	 words.ps[9] = _T("\r\nps. advise (v) ���i�B�U�i�Fadvice (n) ���i�B�U�i�F\r\n    advisable (adj) �i�Ϊ��B������");
	words.word[10] = _T("expertise"); words.number[10] = 1435; words.chinese[10] = _T("n. �M�~�޳N�B�M������");	 words.ps[10] = _T("\r\nps. expert (n) �M�a");
	words.word[11] = _T("consensus"); words.number[11] = 1438; words.chinese[11] = _T("n. �@�ѡB(�N��)�@�P");	 words.ps[11] = _T("");
	words.word[12] = _T("appoint"); words.number[12] = 1442; words.chinese[12] = _T("v. ���R�B�����B���w");	 words.ps[12] = _T("\r\nps. appointment (n)  (������)���|�B���w�B���R");
	words.word[13] = _T("pursue"); words.number[13] = 1446; words.chinese[13] = _T("v. �q�ơB�l�D�B�l���B�l��");	 words.ps[13] = _T("\r\nps. pursuit (n) �q�ơB�l�D�B�l�ܡB�R�n");
	words.word[14] = _T("fluctuation"); words.number[14] = 1448; words.chinese[14] = _T("n. �i�ʡB�ܰ�");	 words.ps[14] = _T("\r\nps. fluctuate (v) �ܰʡB�i�ʡB�n��");
	words.word[15] = _T("transcribe"); words.number[15] = 1449; words.chinese[15] = _T("v. �üg�B�ۿ�");	 words.ps[15] = _T("\r\nps. transcript (n)(2391) �å��B�ۥ��B��r�Z");
	words.word[16] = _T("partial"); words.number[16] = 1453; words.chinese[16] = _T("adj. �������B�������B���R���B��R��");	 words.ps[16] = _T("\r\nps. �ۤϵ��Gimpartial (adj) �������B�������ʪ��C partially (adv) �����a");
	words.word[17] = _T("abandon"); words.number[17] = 1456; words.chinese[17] = _T("v. ���B�߱�B���");	 words.ps[17] = _T("");
	words.word[18] = _T("innovation"); words.number[18] = 1459; words.chinese[18] = _T("�зs�B���s");	 words.ps[18] = _T("\r\nps. innovate (v) ���s�B�ﭲ�Finnovative (adj) �зs��");
	words.word[19] = _T("numerous"); words.number[19] = 1462; words.chinese[19] = _T("adj. ���h���B�ܦh��");	 words.ps[19] = _T("\r\nps. numerously (adv) �h�Ʀa�B�L�Ʀa�F\r\n    numerical (adj)(1927) �H�Ʀr��ܪ��B�ƭȪ�");
	words.word[20] = _T("vacate"); words.number[20] = 1466; words.chinese[20] = _T("v. �h�X(�a�B�Фl)�B�ťX�B��(¾)");	 words.ps[20] = _T("\r\nps. vacancy (n)(1193) �Ŧ�B�ůʡB¾�ʡFvacant (adj) �ŵ۪��B���Q�e�Ϊ�");
	words.word[21] = _T("combine"); words.number[21] = 1468; words.chinese[21] = _T("v. �ϵ��X�B���p��");	 words.ps[21] = _T("\r\nps. combination (n) �p�X�B���X��");
	words.word[22] = _T("enforce"); words.number[22] = 1472; words.chinese[22] = _T("v. ����B��I�B�j���B�j��");	 words.ps[22] = _T("\r\nps. enforcement (n) ����B�j���B�j��");
	words.word[23] = _T("distinguish"); words.number[23] = 1475; words.chinese[23] = _T("v. �ϧO�B�ѧO�B�ϳǥX�B����X�S��");	 words.ps[23] = _T("");
	words.word[24] = _T("investigate"); words.number[24] = 1478; words.chinese[24] = _T("v. �լd�B��s");	 words.ps[24] = _T("\r\nps. investigation (n) �լd�B��s�Finvestigative (adj) �լd��");
	words.word[25] = _T("circumstance"); words.number[25] = 1479; words.chinese[25] = _T("n. ���p�B���ҡB����");	 words.ps[25] = _T("");
	words.word[26] = _T("negotiate"); words.number[26] = 1483; words.chinese[26] = _T("v. ��ӡB�ͧP");	 words.ps[26] = _T("\r\nps. negotiation (n) ��ӡB�ͧP�Fnegotiable (adj) �i��Ӫ��B�i�Ӷq��");
	words.word[27] = _T("confer"); words.number[27] = 1485; words.chinese[27] = _T("v. �ӰQ�B��ӡB�»P(�Ǧ쵥)");	 words.ps[27] = _T("\r\nps. conferecnce (n) ��Q�|�B(����)�|ĳ");
	words.word[28] = _T("capability"); words.number[28] = 1490; words.chinese[28] = _T("n. �ʯ�B��O�B�~��");	 words.ps[28] = _T("\r\nps. capable (adj) ����O���B��F��");
	words.word[29] = _T("recline"); words.number[29] = 1493; words.chinese[29] = _T("v. �V��ɡB�׭ʡB�׽�");	 words.ps[29] = _T("");
	words.word[30] = _T("integrity"); words.number[30] = 1496; words.chinese[30] = _T("n. �������B�۹�B����B������");	 words.ps[30] = _T("");
	words.word[31] = _T("substitute"); words.number[31] = 1499; words.chinese[31] = _T("v. ��~�N���Fn. �N���̡B�N�Ϋ~�Fadj. ���N��");	 words.ps[31] = _T("\r\nps. substitution (n) �N�ΡB����");

	words.ex[0] = _T("We found a Russian translator to interpret for Ms. Leveskov.");
	words.ex[1] = _T("This remote park is not accessible by road.");
	words.ex[2] = _T("Mr. Lupert has worked in the hospitality industry for 20 years.");
	words.ex[3] = _T("The stage area is restricted to theater staff only.");
	words.ex[4] = _T("The prices vary according to the level of seasonal demand.");
	words.ex[5] = _T("Please take safety precautions when working on construction sites.");
	words.ex[6] = _T("The freight is scheduled to reach the warehouse tomorrow.");
	words.ex[7] = _T("The two-bedroom apartment is light and spacious.");
	words.ex[8] = _T("The government expects tax cuts to help stimulate the domestic economy.");
	words.ex[9] = _T("Pierre Le Blanc couldn't attend the advisory committee meeting.");
	words.ex[10] = _T("I can offer an exceptional level of expertise in IT.");
	words.ex[11] = _T("The stockholders reached a consensus on the M&A proposal.");
	words.ex[12] = _T("She was appointed as the new marketing manager.");
	words.ex[13] = _T("He decided to pursue a career in photography after graduation.");
	words.ex[14] = _T("There was a lot of fluctuation on the stock market yesterday.");
	words.ex[15] = _T("I had my secretary transcribe the recorded message.");
	words.ex[16] = _T("If you cancel your reservation at the last minute, you only get a partial refund.");
	words.ex[17] = _T("We abandoned the expansion plan because the costs were excessive.");
	words.ex[18] = _T("The company has developed several technological innovaitons.");
	words.ex[19] = _T("We received numerous complaints about customer service.");
	words.ex[20] = _T("The tenants were ordered to vacate the apartment.");
	words.ex[21] = _T("The development team combined these two different design elements.");
	words.ex[22] = _T("The authorities intend to strictly enforce the new environmental laws.");
	words.ex[23] = _T("Quality distinguishes our products from those of our competitors.");
	words.ex[24] = _T("The police are investigating the cause of the traffic accident.");
	words.ex[25] = _T("The meeting was put off due to unavoidable circumstances.");
	words.ex[26] = _T("The union negotiated with the management for a pay raise.");
	words.ex[27] = _T("He conferred with another department before purchasing the equipment.");
	words.ex[28] = _T("The purchasing manager tested the capabilities of the software program.");
	words.ex[29] = _T("We bought a reclining chair at the furniture store.");
	words.ex[30] = _T("People began to question the integrity of the investigation.");
	words.ex[31] = _T("You can substitute plastic for rubber to make this part.");

}
void getWords_Day16(Words &words)
{
	words.word[0] = _T("interruption"); words.number[0] = 1503; words.chinese[0] = _T("n. (��ʡB���p��)���_�B����B���Z");	 words.ps[0] = _T("\r\nps. interrupt (v) ���_�B���Z�B���_");
	words.word[1] = _T("aspect"); words.number[1] = 1505; words.chinese[1] = _T("n. �[�I�B�譱�B�˻��B�ˤl");	 words.ps[1] = _T("");
	words.word[2] = _T("gratitude"); words.number[2] = 1509; words.chinese[2] = _T("n. �P�E");	 words.ps[2] = _T("\r\nps. grateful (adj)(1872) �P�E���B��ܷP�ª�");
	words.word[3] = _T("earnings"); words.number[3] = 1512; words.chinese[3] = _T("n. ���q�B�ұo�B�~��");	 words.ps[3] = _T("\r\nps. earn (v) ��(��)");
	words.word[4] = _T("diagnosis"); words.number[4] = 1515; words.chinese[4] = _T("n. (��e�f�B���D)�E�_�B�P�_�B�E�_��");	 words.ps[4] = _T("\r\nps. diagnose (v) �E�_�B�P�_�Fdiagnostic (adj) �E�_��");
	words.word[5] = _T("output"); words.number[5] = 1518; words.chinese[5] = _T("n. ���q�B�Ͳ��B�H����X");	 words.ps[5] = _T("\r\nps. �ۤϵ��Ginput (v)(n) ��J�B��J");
	words.word[6] = _T("intensive"); words.number[6] = 1521; words.chinese[6] = _T("adj. �K�����B�[�j���B������");	 words.ps[6] = _T("\r\nps. �ۤϵ��Gextensive (adj) �s�x���B�j�W�Ҫ�");
	words.word[7] = _T("asset"); words.number[7] = 1524; words.chinese[7] = _T("n. �����Ȫ��H/�ƪ��B�]���B�겣");	 words.ps[7] = _T("");
	words.word[8] = _T("awareness"); words.number[8] = 1526; words.chinese[8] = _T("n. �N�ѡB�{�ѡB��{");	 words.ps[8] = _T("\r\nps. aware (adj) ���D���B��ı��");
	words.word[9] = _T("calculate"); words.number[9] = 1528; words.chinese[9] = _T("v. �p��B����");	 words.ps[9] = _T("\r\nps. calculation (n) �p��B���p�B��p�Fcalculator (n) �p����B�p���");
	words.word[10] = _T("overcome"); words.number[10] = 1533; words.chinese[10] = _T("v. �J�A�B�Գ�");	 words.ps[10] = _T("");
	words.word[11] = _T("component"); words.number[11] = 1536; words.chinese[11] = _T("n. (�����B�]�ƪ�)�s��B����B�c���n��");	 words.ps[11] = _T("");
	words.word[12] = _T("malfunction"); words.number[12] = 1539; words.chinese[12] = _T("n. (�����B�{��)�G�١B���F");	 words.ps[12] = _T("");
	words.word[13] = _T("subsidiary"); words.number[13] = 1543; words.chinese[13] = _T("n. �l���q�Fadj. �q�ݪ��B���U���B���n��");	 words.ps[13] = _T("");
	words.word[14] = _T("costly"); words.number[14] = 1546; words.chinese[14] = _T("adj. ��O�����B���Q��");	 words.ps[14] = _T("\r\nps. cost (n) �O�ΡB�����B�N���F(v) ��O");
	words.word[15] = _T("disturb"); words.number[15] = 1550; words.chinese[15] = _T("v. �z�Z�B��ê�B�Z��");	 words.ps[15] = _T("\r\nps. disturbing (adj) ���Z���Fdisturbance (n) �Z�áB���Z");
	words.word[16] = _T("internal"); words.number[16] = 1553; words.chinese[16] = _T("adj. �������B�ꤺ��");	 words.ps[16] = _T("\r\nps. �ۤϵ��Gexternal (adj) �~�����B�~�Ӫ�");
	words.word[17] = _T("modify"); words.number[17] = 1555; words.chinese[17] = _T("v. �׭q�B�ק�B�վ�");	 words.ps[17] = _T("\r\nps. modification (n) �ק�B����");
	words.word[18] = _T("oppose"); words.number[18] = 1556; words.chinese[18] = _T("v. �Ϲ�(�p�e�B����)�B�ϧ�");	 words.ps[18] = _T("\r\nps. opposition (n) �Ϲ�B��ߡB���F\r\n    opposing (adj) ��ߪ��B�Ϲ諸�Fopposed (adj) �Ϲ諸�B���P�N��");
	words.word[19] = _T("bankrupt"); words.number[19] = 1560; words.chinese[19] = _T("adj. �}���� = insolvent");	 words.ps[19] = _T("\r\nps. bankruptcy (n) �}���B�˳� = insolvency");
	words.word[20] = _T("payable"); words.number[20] = 1565; words.chinese[20] = _T("adj. �i��I���B����I��");	 words.ps[20] = _T("\r\nps. pay (v) ��I�Fpayment (n) ��I(���B)�B�I��");
	words.word[21] = _T("reinforce"); words.number[21] = 1567; words.chinese[21] = _T("v. �j�ơB�[�j");	 words.ps[21] = _T("\r\nps. reinforcement  (n) �[�j�B�d�T�B�W��");
	words.word[22] = _T("restore"); words.number[22] = 1571; words.chinese[22] = _T("v. �^�_�B��_�B�ϴ_��");	 words.ps[22] = _T("\r\nps. restoration (n) ��_�B�_��");
	words.word[23] = _T("adopt"); words.number[23] = 1574; words.chinese[23] = _T("v. �ĥΡB�į�");	 words.ps[23] = _T("\r\nps. adoption (n) �ĥΡB���i");
	words.word[24] = _T("promising"); words.number[24] = 1576; words.chinese[24] = _T("adj. ���e�~���B�j���i����");	 words.ps[24] = _T("\r\nps. promise (v) �ӿաF(n) �ӿաB�ը�");
	words.word[25] = _T("provided"); words.number[25] = 1578; words.chinese[25] = _T("conj. ���p�B�H~������");	 words.ps[25] = _T("\r\nps. provide (v)(5) ���ѡB�ѵ�");
	words.word[26] = _T("leak"); words.number[26] = 1580; words.chinese[26] = _T("v. ���|�B���|");	 words.ps[26] = _T("");
	words.word[27] = _T("congestion"); words.number[27] = 1584; words.chinese[27] = _T("n. �먮�B�ֶ�");	 words.ps[27] = _T("\r\nps. congested (adj) �ö몺�B�R�媺");
	words.word[28] = _T("alternate"); words.number[28] = 1589; words.chinese[28] = _T("adj. ���N���B���y���Fv. ����Fn. ���N�̡B�Ըɪ�");	 words.ps[28] = _T("\r\nps. �ۦ����Galternative (835) ���N��");
	words.word[29] = _T("contend"); words.number[29] = 1591; words.chinese[29] = _T("v. �v���B���ܡB�D�i�B�n��");	 words.ps[29] = _T("\r\nps. contender (n) �v���̡B���ܪ�");
	words.word[30] = _T("terminate"); words.number[30] = 1595; words.chinese[30] = _T("v. �פ�B����");	 words.ps[30] = _T("\r\nps. termination (n) �פF�B����");
	words.word[31] = _T("duration"); words.number[31] = 1598; words.chinese[31] = _T("n. (���ʡB�ƥ�)����");	 words.ps[31] = _T("");

	words.ex[0] = _T("There was a service interruption due to server maintenance on Friday.");
	words.ex[1] = _T("The report includes some negative aspects of the merger.");
	words.ex[2] = _T("I'd like to express my gratitude to all of you.");
	words.ex[3] = _T("The company's earnings have increased by 15 percent from last year.");
	words.ex[4] = _T("This equipment will enable doctors to make an accurate diagnosis of the disease.");
	words.ex[5] = _T("Output in the fourth quarter has slightly increased.");
	words.ex[6] = _T("The intensive Spanish course will last for three weeks.");
	words.ex[7] = _T("Mr. Hinder is a valuable asset to the company.");
	words.ex[8] = _T("There is an increasing awareness of environmental problems.");
	words.ex[9] = _T("Overall costs need to be calculated as soon as possible.");
	words.ex[10] = _T("Ricon Corp. failed to overcome managerial difficulties.");
	words.ex[11] = _T("Hyundai Mobis manufactures various vehicle components.");
	words.ex[12] = _T("The customer complained about frequent system malfunction.");
	words.ex[13] = _T("IBM has a lot of subsidiaries in Asia.");
	words.ex[14] = _T("The costly project was not approved.");
	words.ex[15] = _T("The noise has been disturbing office workers.");
	words.ex[16] = _T("The Security Department inspected the internal communications system.");
	words.ex[17] = _T("We decided to modify the design.");
	words.ex[18] = _T("The labor union opposed the restructuring plan.");
	words.ex[19] = _T("A lot of companies went bankrupt during the depression.");
	words.ex[20] = _T("Checks should be made payable to Drico Inc.");
	words.ex[21] = _T("Structures are reinforced to withstand earthquakes.");
	words.ex[22] = _T("Once files are deleted, it is hard to restore them.");
	words.ex[23] = _T("All banks have adopted the online system.");
	words.ex[24] = _T("The online game industry seems to be very promising.");
	words.ex[25] = _T("The plan will be implemented provided that there are no objections.");
	words.ex[26] = _T("The roof started to leak after the storm.");
	words.ex[27] = _T("We are searching for ways to wase congestion.");
	words.ex[28] = _T("The guide suggested an alternate means of transportation.");
	words.ex[29] = _T("Several teams are contending for the prize.");
	words.ex[30] = _T("The contract was terminated on July 20.");
	words.ex[31] = _T("This area will be closed fot the duration of the construction.");

}
void getWords_Day17(Words &words)
{
	words.word[0] = _T("debate"); words.number[0] = 1603; words.chinese[0] = _T("v. �G�סB���סB�Q�סFn. �G�סB���סB�Q��");	 words.ps[0] = _T("");
	words.word[1] = _T("remit"); words.number[1] = 1605; words.chinese[1] = _T("v. �״ڡB�K���B�ŧK(�ŰȡB�q�ȵ�)");	 words.ps[1] = _T("\r\nps. remittance (n) �ױH�B�״ڪ��B");
	words.word[2] = _T("souvenir"); words.number[2] = 1609; words.chinese[2] = _T("n. �����~");	 words.ps[2] = _T("");
	words.word[3] = _T("documentation"); words.number[3] = 1611; words.chinese[3] = _T("n. (������)���");	 words.ps[3] = _T("\r\nps. documentary (adj) ��󪺡B�������Fn. ������");
	words.word[4] = _T("monopoly"); words.number[4] = 1614; words.chinese[4] = _T("n. �b�_�B�W���B�M��(�v)");	 words.ps[4] = _T("\r\nps. monopolize (v) �W���B�֦�~�M���v�B�b�_");
	words.word[5] = _T("exception"); words.number[5] = 1615; words.chinese[5] = _T("n. �ҥ~�B�ҥ~���ƪ�");	 words.ps[5] = _T("\r\nps. exceptional (adj) �ǥX���B�S���B�ҥ~��");
	words.word[6] = _T("premium"); words.number[6] = 1620; words.chinese[6] = _T("n. �O�I�O�B���[�O�ΡFadj. ���Ū�");	 words.ps[6] = _T("");
	words.word[7] = _T("inspire"); words.number[7] = 1625; words.chinese[7] = _T("v. �E�y�B�����F�P");	 words.ps[7] = _T("\r\nps. inspiration (n) �F�P");
	words.word[8] = _T("abundant"); words.number[8] = 1629; words.chinese[8] = _T("adj. �״I���B�R����");	 words.ps[8] = _T("\r\nps. abundance (n) �I�ǡB�R��");
	words.word[9] = _T("collaborate"); words.number[9] = 1632; words.chinese[9] = _T("v. �X�@�B��O");	 words.ps[9] = _T("\r\nps. collaboration (n) ��O�B�X�@�Fcollaborative (adj) �X�@��");
	words.word[10] = _T("layout"); words.number[10] = 1635; words.chinese[10] = _T("n. (�����B�ؿv����)�t�m�ϡB�����s�ơB�w�ơB�G��");	 words.ps[10] = _T("");
	words.word[11] = _T("meantime"); words.number[11] = 1638; words.chinese[11] = _T("n. �����Fadv. �����B�P��");	 words.ps[11] = _T("");
	words.word[12] = _T("subsequent"); words.number[12] = 1641; words.chinese[12] = _T("adj. �H�᪺�B���᪺");	 words.ps[12] = _T("\r\nps. subsequently (adv) �M��B���");
	words.word[13] = _T("phase"); words.number[13] = 1644; words.chinese[13] = _T("n. ���q�B�ɴ��Fv. �����q��I");	 words.ps[13] = _T("");
	words.word[14] = _T("eager"); words.number[14] = 1647; words.chinese[14] = _T("adj. �߱檺�B���檺");	 words.ps[14] = _T("\r\nps. eagerly (adv) ����a");
	words.word[15] = _T("explore"); words.number[15] = 1650; words.chinese[15] = _T("v. �ɬd�B���I�B���s�B����(���D)");	 words.ps[15] = _T("\r\nps. exploration (n) �����B��s");
	words.word[16] = _T("withdraw"); words.number[16] = 1651; words.chinese[16] = _T("v. �����B��^�B�M�P");	 words.ps[16] = _T("\r\nps. withdrawal (n) ���ڡB�M�^");
	words.word[17] = _T("flexible"); words.number[17] = 1654; words.chinese[17] = _T("adj. ���u�ʪ��B�i�ܳq��");	 words.ps[17] = _T("\r\nps. flexibility (n) �F���ʡB�u��");
	words.word[18] = _T("fulfill"); words.number[18] = 1657; words.chinese[18] = _T("v. �ŦX�B�F���B��{");	 words.ps[18] = _T("\r\nps. fulfillment (n) �����B��{�B�����Ffulfilling (adj) �O�H�����B \r\n    ���{��t���Ffulfilled (adj) ������");
	words.word[19] = _T("reluctant"); words.number[19] = 1662; words.chinese[19] = _T("adj. �����@���B�j�j��");	 words.ps[19] = _T("\r\nps. reluctantly (adv) �j�j�a�B�����@�a�F \r\n    reluctance (n) �j�j�B�����@");
	words.word[20] = _T("mandatory"); words.number[20] = 1665; words.chinese[20] = _T("adj. �j��B�q�Ȫ�");	 words.ps[20] = _T("\r\nps. �ۦ����Gcompulsory �q�Ȫ��Cmandate (n)(2675) �R�O");
	words.word[21] = _T("crate"); words.number[21] = 1667; words.chinese[21] = _T("n. ���O�c�B�ˤJ���O�c");	 words.ps[21] = _T("");
	words.word[22] = _T("obstruct"); words.number[22] = 1670; words.chinese[22] = _T("v. ���סB��ê�B����");	 words.ps[22] = _T("\r\nps. obstruction (n) ��ê�B��ê�B��ê�� = obstacle (2307)");
	words.word[23] = _T("profitable"); words.number[23] = 1674; words.chinese[23] = _T("adj. ���Q���B���q��");	 words.ps[23] = _T("\r\nps. profitability (n) ���q�ʡB���q�v");
	words.word[24] = _T("preliminary"); words.number[24] = 1677; words.chinese[24] = _T("adj. ��B���B�w�ƪ��Fn. �ƫe�ǳơB��B��");	 words.ps[24] = _T("");
	words.word[25] = _T("recession"); words.number[25] = 1681; words.chinese[25] = _T("n. (�g��) �I�h�B������");	 words.ps[25] = _T("");
	words.word[26] = _T("formula"); words.number[26] = 1686; words.chinese[26] = _T("n. �t��B�����B��{���B�ǫh");	 words.ps[26] = _T("");
	words.word[27] = _T("deduct"); words.number[27] = 1688; words.chinese[27] = _T("v. �����B��h");	 words.ps[27] = _T("\r\nps. deduction (n) ����(�B)�Fdeductible (adj) �i�������B�i��K��");
	words.word[28] = _T("preserve"); words.number[28] = 1690; words.chinese[28] = _T("v. �O�s�B�O�@");	 words.ps[28] = _T("\r\nps. �ۦ����Gconserve �O�@�C\r\n    preservation (n) �O�@�B�O�s = conservation (2320)");
	words.word[29] = _T("realistic"); words.number[29] = 1691; words.chinese[29] = _T("adj. ���{���B��ڪ�");	 words.ps[29] = _T("\r\nps. �ۤϵ��Gunrealistic (adj) ������ڪ��C\r\n    realistically (adv) �g��a�B�G�u�a");
	words.word[30] = _T("comparision"); words.number[30] = 1696; words.chinese[30] = _T("n. ����B���");	 words.ps[30] = _T("\r\nps. compare (v) ����B�P~�۸��Fcomparable (adj) �i������B��o�W��");
	words.word[31] = _T("devote"); words.number[31] = 1697; words.chinese[31] = _T("v. �^�m�B�P�O��B�M�ߩ�");	 words.ps[31] = _T("\r\nps. devoted (adj) �^�m���B�M�߭P�O���Fdevotion (n) �^�m�B���R");

	words.ex[0] = _T("They debated the merits of the proposed environmental law.");
	words.ex[1] = _T("Please remit payment to us before January 11.");
	words.ex[2] = _T("You can pick up gifts at the souvenir shop at the end of the tour.");
	words.ex[3] = _T("Applicants must submit all necessary documentation by Friday.");
	words.ex[4] = _T("Mastercom has a monopoly on local telecommunications services.");
	words.ex[5] = _T("With the exception of him, the sales employees all exceeded their targets.");
	words.ex[6] = _T("If you have an accident, your insurance premium will go up.");
	words.ex[7] = _T("The main role of a manager is to inspire his or her employees.");
	words.ex[8] = _T("The nation's economy depends on its abundant coal supplies.");
	words.ex[9] = _T("We're going to collaborate with another firm on the design project.");
	words.ex[10] = _T("Peter showed the investors the proposed layout of the building.");
	words.ex[11] = _T("In the meantime, feel free to use the airport's business facilities.");
	words.ex[12] = _T("A penalty fee will be charged on all subsequent bills.");
	words.ex[13] = _T("Mr. Joubert will oversee the first phase of the project.");
	words.ex[14] = _T("The recruits are eager to start in their new roles.");
	words.ex[15] = _T("I'd like to explore other opportunities outside the company.");
	words.ex[16] = _T("Ms. Rogers withdraw $100 from th company account yesterday.");
	words.ex[17] = _T("Walker Banking offers flexible working hours.");
	words.ex[18] = _T("The candidate fulfills all the requirements of the position.");
	words.ex[19] = _T("Connercial banks are reluctant to lend money to small businesses.");
	words.ex[20] = _T("Attendance at the annual company meeting is mandatory.");
	words.ex[21] = _T("A man is moving crates into a warehouse.");
	words.ex[22] = _T("The protesters are obstructing the road outside the convention hall.");
	words.ex[23] = _T("India has been our most profitable market for many years.");
	words.ex[24] = _T("I've prepared a preliminary agenda for tomorrow's meeting.");
	words.ex[25] = _T("The recession has led to the bankruptcy of many businesses.");
	words.ex[26] = _T("This product is made using a special chemical formula.");
	words.ex[27] = _T("Taxes are deduted from employees' wages.");
	words.ex[28] = _T("The association helps preserve the region's oldest buildings.");
	words.ex[29] = _T("Setting realistic targets is very important at the first stage.");
	words.ex[30] = _T("LanceSoft Inc. is performing well in comparision with its competitors.");
	words.ex[31] = _T("The scientist devoted his life to research.");

}
void getWords_Day18(Words &words)
{
	words.word[0] = _T("bear"); words.number[0] = 1702; words.chinese[0] = _T("v. �a���B�㦳�B�Ԩ��B�Ӿ�B��(�p��)");	 words.ps[0] = _T("\r\nps. bearer (n) �����̡B�ǻ��̡Fbearable (adj) �i�Ԩ����F\r\n    unbearably (adv) �L�k�Ԩ��a");
	words.word[1] = _T("consent"); words.number[1] = 1704; words.chinese[1] = _T("n. �P�N�B�٦��B�����Fv. �P�N�B�٦��B����");	 words.ps[1] = _T("");
	words.word[2] = _T("outage"); words.number[2] = 1707; words.chinese[2] = _T("n. (���B�q��)���_����");	 words.ps[2] = _T("");
	words.word[3] = _T("deserve"); words.number[3] = 1711; words.chinese[3] = _T("v. ���o(��@)�B�ӱo");	 words.ps[3] = _T("");
	words.word[4] = _T("foreman"); words.number[4] = 1714; words.chinese[4] = _T("n. (�u�a)�D���B��Z");	 words.ps[4] = _T("");
	words.word[5] = _T("largely"); words.number[5] = 1717; words.chinese[5] = _T("adv. �D�n�a�B�j�j�a�B�j����");	 words.ps[5] = _T("\r\nps. �ۦ����Gmainly�Bmostly");
	words.word[6] = _T("managerial"); words.number[6] = 1720; words.chinese[6] = _T("adj. �޲z���B�g�z�H��");	 words.ps[6] = _T("\r\nps. management (n) �޲z�B�޲z�����Fmanageable (adj) �i�޲z���B�i�ޱ���");
	words.word[7] = _T("omission"); words.number[7] = 1725; words.chinese[7] = _T("n. ��|�B�ٲ��B�R��");	 words.ps[7] = _T("\r\nps. omit (v) �ٲ��B��|�B�R�h");
	words.word[8] = _T("province"); words.number[8] = 1727; words.chinese[8] = _T("n. (��F��쪺)�١B�{");	 words.ps[8] = _T("\r\nps. provincial (adj) �٪��B�a�誺�B�u�ª��F(n) �m�U�H�B�������H");
	words.word[9] = _T("emerge"); words.number[9] = 1729; words.chinese[9] = _T("v. �X�{�B�B�{�B���S");	 words.ps[9] = _T("\r\nps. emerging (adj) �s�����Femergence (n) �X�{");
	words.word[10] = _T("flavor"); words.number[10] = 1735; words.chinese[10] = _T("n. ���D�B�����Fv. ��~�ը�");	 words.ps[10] = _T("\r\nps. flavoring (n) ���ơB�ը��ơFflavored (adj) ��~������");
	words.word[11] = _T("hazard"); words.number[11] = 1737; words.chinese[11] = _T("n. �M�I�B���`��");	 words.ps[11] = _T("\r\nps. hazardous (adj) ���M�I���Bbiohazard (n) �ͤƦM��");
	words.word[12] = _T("advocate"); words.number[12] = 1740; words.chinese[12] = _T("n. ���Ҫ̡B���@�̡B�G�@�̡B�߮v");	 words.ps[12] = _T("");
	words.word[13] = _T("classified"); words.number[13] = 1742; words.chinese[13] = _T("adj. �������B���K���Fn. �����s�i");	 words.ps[13] = _T("\r\nps. classify (v) �N~�����Fclassification (n) �����B����");
	words.word[14] = _T("embassy"); words.number[14] = 1745; words.chinese[14] = _T("n. �j���]�B�j���]����H��");	 words.ps[14] = _T("\r\nps. ambassador (n) �j��");
	words.word[15] = _T("violation"); words.number[15] = 1750; words.chinese[15] = _T("n. ��Ĳ�B�H�ϡB�I��");	 words.ps[15] = _T("\r\nps. violate (v) �H�ϡB�H�I�B�I��");
	words.word[16] = _T("proofread"); words.number[16] = 1751; words.chinese[16] = _T("v. �չ�");	 words.ps[16] = _T("\r\nps. proofreading (n) �չ�u�@");
	words.word[17] = _T("subcontractor"); words.number[17] = 1753; words.chinese[17] = _T("n. ���]�ӡB���]��");	 words.ps[17] = _T("\r\nps. subcontract (v) ��]�B���]�F(n)��/���]����");
	words.word[18] = _T("adapt"); words.number[18] = 1758; words.chinese[18] = _T("v. �ק�B�ϾA�X");	 words.ps[18] = _T("\r\nps. adaptation (n) �A���B�վ�Fadaptable (adj) �i�A�����B�A���O�j��");
	words.word[19] = _T("venue"); words.number[19] = 1759; words.chinese[19] = _T("n. (�|ĳ�B��t��) �a�I�B���a");	 words.ps[19] = _T("");
	words.word[20] = _T("protest"); words.number[20] = 1764; words.chinese[20] = _T("v. ��ĳ�B���X��ĳ�Fn. ��ĳ�B�Ϲ�");	 words.ps[20] = _T("\r\nps. protester (n) �Ϲ�̡B��ĳ��");
	words.word[21] = _T("argument"); words.number[21] = 1766; words.chinese[21] = _T("n. ���I�B���סB�G�סB�z��");	 words.ps[21] = _T("\r\nps. argue (v) ���G�B���n�Farguable (adj) �i�G�ת��B�iĳ��");
	words.word[22] = _T("cordial"); words.number[22] = 1772; words.chinese[22] = _T("adj. �ͦn���B�u����");	 words.ps[22] = _T("\r\nps. cordially (adv) �u���a�B�ͦn�a");
	words.word[23] = _T("liability"); words.number[23] = 1775; words.chinese[23] = _T("n. (�k�ߤW��)�d���B�t�šB�Ű�");	 words.ps[23] = _T("\r\nps. liable (adj) �t���k�߳d�����B�i�వ~��");
	words.word[24] = _T("poll"); words.number[24] = 1777; words.chinese[24] = _T("n. ���N�լd�B�벼�ơFv. �i����N�լd�B���(����)");	 words.ps[24] = _T("");
	words.word[25] = _T("privilege"); words.number[25] = 1779; words.chinese[25] = _T("n. �S�v�B�u�f");	 words.ps[25] = _T("");
	words.word[26] = _T("subscribe"); words.number[26] = 1781; words.chinese[26] = _T("v. �q�\");	 words.ps[26] = _T("\r\nps. subscription (n) �q�\�Fsubscriber (n) �q�\��");
	words.word[27] = _T("assess"); words.number[27] = 1786; words.chinese[27] = _T("v. �����B���w");	 words.ps[27] = _T("\r\nps. assessment (n)�����B���w");
	words.word[28] = _T("disposal"); words.number[28] = 1789; words.chinese[28] = _T("n. �B�z�B�B�m");	 words.ps[28] = _T("\r\nps. dispose (v) �B�z�B�B�m");
	words.word[29] = _T("boost"); words.number[29] = 1794; words.chinese[29] = _T("v. �W�[�B���ɡB���ʡFn. �����B���U�B�W�[");	 words.ps[29] = _T("");
	words.word[30] = _T("conventional"); words.number[30] = 1797; words.chinese[30] = _T("adj. �ǲΪ��B�̺D�Ҫ�");	 words.ps[30] = _T("\r\nps. convention (n) �|ĳ�B�߫U�B�D�ҡB�`�W");
	words.word[31] = _T("intermission"); words.number[31] = 1800; words.chinese[31] = _T("n. �����𮧡B�ȷ�");	 words.ps[31] = _T("");

	words.ex[0] = _T("Only buy products bearing the KS mark of approval.");
	words.ex[1] = _T("Survey participants' comments won't be used without consent.");
	words.ex[2] = _T("In case of a power outage, use this flashlight.");
	words.ex[3] = _T("Long-term customers deserve a reward for their loyalty.");
	words.ex[4] = _T("The foreman said the work is behind schedule.");
	words.ex[5] = _T("Our success is due large to our outstanding employees.");
	words.ex[6] = _T("She quickly rose to a managerial position.");
	words.ex[7] = _T("The report had a number of important omission.");
	words.ex[8] = _T("Denver is now the largest city in the province.");
	words.ex[9] = _T("He is emerging as a strong contender for the promotion.");
	words.ex[10] = _T("Baskin Robbins has over 31 flavors of ice cream.");
	words.ex[11] = _T("We need to eliminate potential hazards from the workspace.");
	words.ex[12] = _T("Simon Singh is a leading advocate of human rights.");
	words.ex[13] = _T("They inquired about the property advertised in the classified section.");
	words.ex[14] = _T("Please contract the embassy in case of emergency while traveling.");
	words.ex[15] = _T("This is a clear violation of our existing contact.");
	words.ex[16] = _T("Please proofread the document before making copies.");
	words.ex[17] = _T("They hired a local subcontractor to do the plumbing work.");
	words.ex[18] = _T("T-Auto Inc. is adapting its products for the Chinese market.");
	words.ex[19] = _T("The exhibition and sale will be at the following venue.");
	words.ex[20] = _T("Campaigners are protesting against the FTA.");
	words.ex[21] = _T("Mr. Garnet's argument is certainly very persuasive.");
	words.ex[22] = _T("We're developed a cordial relationship with the supplier.");
	words.ex[23] = _T("Our organization has no legal liability in this matter.");
	words.ex[24] = _T("The television network conducts regular opinion polls.");
	words.ex[25] = _T("Skyline members enjoy special privileges whenever they fly.");
	words.ex[26] = _T("The Marketing Department subscribes to several online newsletters.");
	words.ex[27] = _T("The insurance company will send someone to assess the damage.");
	words.ex[28] = _T("The supervisor oversee the safe disposal of all waste materials.");
	words.ex[29] = _T("We were able to boost sales significantly last quarter.");
	words.ex[30] = _T("Our products use less electricity than conventional light bulbs.");
	words.ex[31] = _T("There will be a short intermission between performances.");

}
void getWords_Day19(Words &words)
{
	words.word[0] = _T("remainder"); words.number[0] = 1802; words.chinese[0] = _T("n. �l�ơB�Ѿl���B��l���H");	 words.ps[0] = _T("\r\nps. remain (v) �Ѿl�B���d�B���M�O�Fremaining (adj) �Ѿl��");
	words.word[1] = _T("solicit"); words.number[1] = 1804; words.chinese[1] = _T("v. ���D�B�ШD�B�w���B���D");	 words.ps[1] = _T("");
	words.word[2] = _T("continuous"); words.number[2] = 1809; words.chinese[2] = _T("adj. ���򪺡B���_��");	 words.ps[2] = _T("\r\nps. continuously (adv) ����a�Fcontinue (v) �~��");
	words.word[3] = _T("compartment"); words.number[3] = 1811; words.chinese[3] = _T("n. �j���B�j�h");	 words.ps[3] = _T("");
	words.word[4] = _T("rigorous"); words.number[4] = 1816; words.chinese[4] = _T("adj. �Y�檺�B��K��");	 words.ps[4] = _T("\r\nps. rigor (n) �Y��B���K�B�}�W�Frigorously (adj) �Y��a�B�Y�Ŧa");
	words.word[5] = _T("cite"); words.number[5] = 1818; words.chinese[5] = _T("v. ���ΡB�ޥΡB��~���ҡB�|�X");	 words.ps[5] = _T("\r\nps. citation (n) �ޥΡB����");
	words.word[6] = _T("multiple"); words.number[6] = 1821; words.chinese[6] = _T("adj. �h�ت��B�h�ƪ��B�ƦX��");	 words.ps[6] = _T("\r\nps. multiply (v) �����W�[�B�ۭ��Fmulitplication (n) �W�[");
	words.word[7] = _T("bulletin"); words.number[7] = 1825; words.chinese[7] = _T("n. �����B���i");	 words.ps[7] = _T("");
	words.word[8] = _T("discipline"); words.number[8] = 1826; words.chinese[8] = _T("n. �Ǭ�B���ߡB�V�m");	 words.ps[8] = _T("\r\nps. disciplinary (adj) �V�m���B���ߪ�");
	words.word[9] = _T("characteristic"); words.number[9] = 1829; words.chinese[9] = _T("n. �S�ʡB�S��B�ʮ�Fadj. �W�S��");	 words.ps[9] = _T("");
	words.word[10] = _T("precise"); words.number[10] = 1834; words.chinese[10] = _T("adj. ��T���B���T��");	 words.ps[10] = _T("\r\nps. precisely (adv) ��T�a�B���n�Fprecision (n) ��T�B��K");
	words.word[11] = _T("supplement"); words.number[11] = 1836; words.chinese[11] = _T("v. �W�ɡB�ɥR�Fn. �ɥR�B����");	 words.ps[11] = _T("\r\nps. supplementary (adj) �ɥR���B�~�[��");
	words.word[12] = _T("ownership"); words.number[12] = 1839; words.chinese[12] = _T("n. �Ҧ��v�B���D����");	 words.ps[12] = _T("\r\nps. own (v) �Ҧ����B�֦��Fowner (n) �Ҧ��H");
	words.word[13] = _T("conflict"); words.number[13] = 1843; words.chinese[13] = _T("n. �Ĭ�B�٬ޡFv. �Ĭ�B��Ĳ");	 words.ps[13] = _T("");
	words.word[14] = _T("relieve"); words.number[14] = 1844; words.chinese[14] = _T("v. �Ѱ��B�(�h�W)�B�w�M");	 words.ps[14] = _T("\r\nps. �ۦ����Galleviate �w�M (2098)�Crelieved (adj) ��ߪ��B�e�����F\r\n    relief (n) �Ѳ�B�");
	words.word[15] = _T("vacuum"); words.number[15] = 1849; words.chinese[15] = _T("v. �l�СB�M���Fn. �u�šB�u�ŧl�о�");	 words.ps[15] = _T("");
	words.word[16] = _T("contrast"); words.number[16] = 1852; words.chinese[16] = _T("v. ����B��ӡFv. ����B���");	 words.ps[16] = _T("");
	words.word[17] = _T("portolio"); words.number[17] = 1854; words.chinese[17] = _T("n. ���զX�B��󧨡B���ƥ]�B�@�~��");	 words.ps[17] = _T("");
	words.word[18] = _T("driveway"); words.number[18] = 1858; words.chinese[18] = _T("n. �T���D�B�p�H���D");	 words.ps[18] = _T("");
	words.word[19] = _T("extent"); words.number[19] = 1861; words.chinese[19] = _T("n. �d��B�{�סB����");	 words.ps[19] = _T("");
	words.word[20] = _T("inclined"); words.number[20] = 1865; words.chinese[20] = _T("adj. ��~�ɦV���B�Q�n��~���Fadj. ���@���B�L�N��");	 words.ps[20] = _T("\r\nps. �ۤϵ��Gdisinclined (adj) �L�N��B���@���F\r\n    inclination  (n) (�ʮ�W)�ɦV�B�R�n");
	words.word[21] = _T("typical"); words.number[21] = 1868; words.chinese[21] = _T("adj. �嫬���B���N��ʪ�");	 words.ps[21] = _T("\r\nps. typically (adv) �嫬�a�B�N��ʦa");
	words.word[22] = _T("appearance"); words.number[22] = 1872; words.chinese[22] = _T("n. �~�[�B�~��B�X�{");	 words.ps[22] = _T("\r\nps. appear (v) �n���B�X�{");
	words.word[23] = _T("grateful"); words.number[23] = 1875; words.chinese[23] = _T("adj. �P�����B�P�ª�");	 words.ps[23] = _T("\r\nps. gratitude (n) �P�¤����B�·N (1509)");
	words.word[24] = _T("accustomed"); words.number[24] = 1878; words.chinese[24] = _T("adj. �ߺD���B�D�`���B�A����");	 words.ps[24] = _T("\r\nps. accustom (v) �ϲߺD");
	words.word[25] = _T("convince"); words.number[25] = 1880; words.chinese[25] = _T("v. ���A�B�ϽT�H�B�ϫH�A");	 words.ps[25] = _T("\r\nps. convinced (adj) �T�H���Fconvincing (adj) �����A�O��");
	words.word[26] = _T("observance"); words.number[26] = 1883; words.chinese[26] = _T("n. �����B��u�B����");	 words.ps[26] = _T("\r\nps. observe (v) ��u�B�[��B�y���Fobservation (n) �[��");
	words.word[27] = _T("pension"); words.number[27] = 1885; words.chinese[27] = _T("n. �h����B�i�Ѫ�");	 words.ps[27] = _T("");
	words.word[28] = _T("vendor"); words.number[28] = 1889; words.chinese[28] = _T("n. ��D�B�u�c�B�P��~��");	 words.ps[28] = _T("\r\nps. vend (v) �c��");
	words.word[29] = _T("compromise"); words.number[29] = 1891; words.chinese[29] = _T("v. ����B���B�B��J");	 words.ps[29] = _T("");
	words.word[30] = _T("civic"); words.number[30] = 1893; words.chinese[30] = _T("adj. �������B������");	 words.ps[30] = _T("");
	words.word[31] = _T("recall"); words.number[31] = 1900; words.chinese[31] = _T("v. �ۦ^�B�^���B�ϷQ�_�B�}�K�Fn. �^���B�İ_�B�O�ʡB�}�K");	 words.ps[31] = _T("");

	words.ex[0] = _T("We will pay the remainder to the balance tomorrow.");
	words.ex[1] = _T("The charity solicits donations from over 100 corporations.");
	words.ex[2] = _T("China's economy has experienced continuous growth.");
	words.ex[3] = _T("Please put your luggage safely in the overhead compartment.");
	words.ex[4] = _T("The reliability of this product has been verified  through rigorous tests.");
	words.ex[5] = _T("Those surveyed cited price as the most important purchasing factor.");
	words.ex[6] = _T("The R&D department handles multiple projects at the same time.");
	words.ex[7] = _T("We posted notice on the bulletin board.");
	words.ex[8] = _T("Candidates from any discipline can apply for the position.");
	words.ex[9] = _T("Martin has all the characteristics of a  successful businessman.");
	words.ex[10] = _T("The architect requested more precise measurements.");
	words.ex[11] = _T("Some people work an extra job to supplement their income.");
	words.ex[12] = _T("Phosphate Inc. will soon acquire ownership of its largest competitor.");
	words.ex[13] = _T("The trade conflict between the two countries is deepening.");
	words.ex[14] = _T("Tylenol relieves headaches and back pain fast.");
	words.ex[15] = _T("The hotel cleaning staff didn't vacuum the room.");
	words.ex[16] = _T("In contrast to last year, our profits have increased dramatically.");
	words.ex[17] = _T("HD Capital offers porfolio management services.");
	words.ex[18] = _T("A vehicle is blocking the driveway.");
	words.ex[19] = _T("The insurance company assessed the full extent of the damage.");
	words.ex[20] = _T("Economists are inclined to be conservative in their predictions.");
	words.ex[21] = _T("This is a typical example of the company's aggressive marketing strategy.");
	words.ex[22] = _T("The appearance of the building has been greatly imrpoved.");
	words.ex[23] = _T("We're always grateful to our outstanding employees.");
	words.ex[24] = _T("He has become accustomed to flying in business class.");
	words.ex[25] = _T("The IT manager convinced management to upgrade the server.");
	words.ex[26] = _T("We will be closed on Friday in observance of Memorial Day.");
	words.ex[27] = _T("The company is making changes to its pension plan.");
	words.ex[28] = _T("The vendor will not sell the property for the proposed price.");
	words.ex[29] = _T("The union agreed to compromise on its wage demand.");
	words.ex[30] = _T("The Council is organizing a festival in the civic center.");
	words.ex[31] = _T("All Tyberg models were recalled due to an engine fault.");

}
void getWords_Day20(Words &words)
{
	words.word[0] = _T("enthusiastic"); words.number[0] = 1901; words.chinese[0] = _T("adj. �������B���P��");	 words.ps[0] = _T("\r\nps. enthusiastically (adv) ���ߦa�B���h�����a�Fenthusiasm (n) ����");
	words.word[1] = _T("literacy"); words.number[1] = 1905; words.chinese[1] = _T("n. Ū�g��O");	 words.ps[1] = _T("\r\nps. �ۤϵ��Gilliteracy (n) �媼�Fliteracy (adj) ��Ū�g��O��");
	words.word[2] = _T("discard"); words.number[2] = 1908; words.chinese[2] = _T("v. ���B�߱�");	 words.ps[2] = _T("");
	words.word[3] = _T("dominate"); words.number[3] = 1912; words.chinese[3] = _T("v. ����B��t�B���u��");	 words.ps[3] = _T("\r\nps. dominant (adj) ���u�ժ��B��t���Fdomination (n) ��t�B����");
	words.word[4] = _T("prosecute"); words.number[4] = 1915; words.chinese[4] = _T("v. �_�D�B�i�o�B�~��q��");	 words.ps[4] = _T("\r\nps. prosecution (n) �_�D�B���|�Fprosecutor (n) �˹�x");
	words.word[5] = _T("declaration"); words.number[5] = 1917; words.chinese[5] = _T("n. �ӳ��B�n���B�ŧi");	 words.ps[5] = _T("\r\nps. declare (v) �ŧi�B�ť��F�n���B�ӳ�(�ǵ|�~��)");
	words.word[6] = _T("quota"); words.number[6] = 1921; words.chinese[6] = _T("n. �t�B�B���B�B�w�B");	 words.ps[6] = _T("");
	words.word[7] = _T("insert"); words.number[7] = 1925; words.chinese[7] = _T("v. ���J�B��J�Fn. �����B����");	 words.ps[7] = _T("\r\nps. insertion (n) ���J�B�m�J��");
	words.word[8] = _T("numerical"); words.number[8] = 1927; words.chinese[8] = _T("adj. �Ʀr���B�H�Ʀr��ܪ�");	 words.ps[8] = _T("\r\nps. numerous (adj)(1462) �ܦh���Fnumeral (n) �Ʀr");
	words.word[9] = _T("overview"); words.number[9] = 1928; words.chinese[9] = _T("n. (�j����)��z�B���n");	 words.ps[9] = _T("");
	words.word[10] = _T("possess"); words.number[10] = 1931; words.chinese[10] = _T("v. �֦��B�㦳�B����B��t");	 words.ps[10] = _T("\r\nps. possession (n) �Ҧ���");
	words.word[11] = _T("preceding"); words.number[11] = 1937; words.chinese[11] = _T("adj. �b�e���B�b����");	 words.ps[11] = _T("\r\nps. �ۦ����Gprevious�Fprecede (v) �b~���e�Fprecedent (n) �D�ҡB���ҡF\r\n    unprecedented (adj) �L�e�Ҫ�");
	words.word[12] = _T("forfeit"); words.number[12] = 1941; words.chinese[12] = _T("v. ���h�B�ॢ(�v�O��)�Fn. �@���B�Q�S��");	 words.ps[12] = _T("\r\nps. forfeiture (n) (�]����)�Q�S���B(�v�O��)�ॢ");
	words.word[13] = _T("outcome"); words.number[13] = 1944; words.chinese[13] = _T("n. ���סB���G");	 words.ps[13] = _T("");
	words.word[14] = _T("workout"); words.number[14] = 1946; words.chinese[14] = _T("n. (�B�ʤW��)�m�ߡB�V�m");	 words.ps[14] = _T("");
	words.word[15] = _T("incur"); words.number[15] = 1949; words.chinese[15] = _T("v. �a�ӡB�ۭP");	 words.ps[15] = _T("");
	words.word[16] = _T("morale"); words.number[16] = 1954; words.chinese[16] = _T("n. �h��B����");	 words.ps[16] = _T("");
	words.word[17] = _T("respectable"); words.number[17] = 1956; words.chinese[17] = _T("adj. �۷�n���B�ȱo�L�q��");	 words.ps[17] = _T("\r\nps. respected  (n)(1031) �L�q�B�q�N�B�譱�F(v) �L�q�B�L��");
	words.word[18] = _T("concur"); words.number[18] = 1960; words.chinese[18] = _T("v. �P�N�B�٦��B�P�ɵo��");	 words.ps[18] = _T("\r\nps. concurrence (n) �P�N�B�P�ɵo�͡Fconcurrent (adj) �P�ɵo�ͪ��B��O���F\r\n    concurrently (adv) �P�ɵo�ͦa");
	words.word[19] = _T("mature"); words.number[19] = 1963; words.chinese[19] = _T("adj. �������B���ƪ��B������Fv. �Ϧ����B�Ϩ��");	 words.ps[19] = _T("\r\nps. �ۤϵ��Gimmature (adj) ��������");
	words.word[20] = _T("enormous"); words.number[20] = 1965; words.chinese[20] = _T("adj. �e�j���B���j��");	 words.ps[20] = _T("\r\nps. enormously (adv) �e�j�a");
	words.word[21] = _T("complicated"); words.number[21] = 1967; words.chinese[21] = _T("adj. �������B������");	 words.ps[21] = _T("\r\nps. �ۦ����Gcomplex�Fcomplicate (v) �Ͻ����ơF\r\n    complication (n) �����B�ȸ��B�x��");
	words.word[22] = _T("widespread"); words.number[22] = 1973; words.chinese[22] = _T("adj. �X�����B�����s���B���M��");	 words.ps[22] = _T("");
	words.word[23] = _T("momentum"); words.number[23] = 1975; words.chinese[23] = _T("n. �ʤO�B�ʯ�B���i�O");	 words.ps[23] = _T("");
	words.word[24] = _T("surpass"); words.number[24] = 1977; words.chinese[24] = _T("v. �W�L�B�ӹL�B�u��");	 words.ps[24] = _T("");
	words.word[25] = _T("adhere"); words.number[25] = 1980; words.chinese[25] = _T("v. ���ۡB�H��");	 words.ps[25] = _T("\r\nps. adherence (n) (�H����)����B��u�Fadherent (n) ���@�̡F(adj) �H�۪�\r\n    ahesive (n) ���۾��F(adj) ���H�ʪ�");
	words.word[26] = _T("bound"); words.number[26] = 1984; words.chinese[26] = _T("adj. �e��~���B���q�Ȫ��B���M��");	 words.ps[26] = _T("");
	words.word[27] = _T("refrain"); words.number[27] = 1988; words.chinese[27] = _T("v. �קK�B�J��B�Ԧ�B�`��");	 words.ps[27] = _T("");
	words.word[28] = _T("perspective"); words.number[28] = 1990; words.chinese[28] = _T("n. �[�I�B���ѡB�}��O�B����");	 words.ps[28] = _T("");
	words.word[29] = _T("disrupt"); words.number[29] = 1993; words.chinese[29] = _T("v. �Z�áB�ϲV�áB�Ϥ��_");	 words.ps[29] = _T("\r\nps. disruption (n) ���_�B�Z�áFdisruptive (adj) �Z�ê�");
	words.word[30] = _T("apparel"); words.number[30] = 1997; words.chinese[30] = _T("n. �A�ˡB���");	 words.ps[30] = _T("");
	words.word[31] = _T("principal"); words.number[31] = 2000; words.chinese[31] = _T("n. �ժ��B�D�n�t���Fadj. �D�n���B�ꥻ��");	 words.ps[31] = _T("\r\nps. �ۦ����Gmain �D�n���Fprinciple (n) ��h�B�k�W");

	words.ex[0] = _T("I'd like ask for your enthusiastic participation in this charity event.");
	words.ex[1] = _T("The foundation aims to improve adult literacy.");
	words.ex[2] = _T("We discarded all the food that had passed its expiration date.");
	words.ex[3] = _T("The telecommunications market is dominated by a few corporations.");
	words.ex[4] = _T("The candidate was prosecuted for violating comapaign finance laws.");
	words.ex[5] = _T("Our accountant will make a declaration of our earnings.");
	words.ex[6] = _T("Staff have to meet monthly sales quotas.");
	words.ex[7] = _T("Please insert your into the slot to enter the restricted area.");
	words.ex[8] = _T("The password should be a numerical code.");
	words.ex[9] = _T("The keynote speaker gave a brief overview of the legislation.");
	words.ex[10] = _T("The department staff possess a wide variety of skills.");
	words.ex[11] = _T("Our profit last year was higher than the prceding year.");
	words.ex[12] = _T("The executive forfeited all of his shares.");
	words.ex[13] = _T("Everyone is waiting to hear the outcome of the meeting.");
	words.ex[14] = _T("Our trainers can design the perfect daily workout program for you.");
	words.ex[15] = _T("We'll cover any costs you incur during your visit.");
	words.ex[16] = _T("The staff party last week helped to improve employee morale.");
	words.ex[17] = _T("These latest sales results are respectable, but not outstanding.");
	words.ex[18] = _T("We concur with your opinion about the merger.");
	words.ex[19] = _T("Henry Faulkner is a mature and responsible man.");
	words.ex[20] = _T("Venture capitalists can make enormous profits quickly.");
	words.ex[21] = _T("The building permit application procedure is very complicated.");
	words.ex[22] = _T("There is widespread speculation that the CEO will resgin.");
	words.ex[23] = _T("We're gaining momentum in several European markets.");
	words.ex[24] = _T("We might be able to surpass last year's sales figures.");
	words.ex[25] = _T("Passengers must adhere strictly to airline policies.");
	words.ex[26] = _T("The train bound for Andro City is now approaching.");
	words.ex[27] = _T("Please refrain from littering on the park grounds.");
	words.ex[28] = _T("The discussion panel will present a wide range of perspectives.");
	words.ex[29] = _T("Protesters tried to disrupt the international trade convention.");
	words.ex[30] = _T("SportingGoods.com sells sports equipment and apparel.");
	words.ex[31] = _T("Before joining the board, Ms Burns was a high school principal.");

}
void getWords_Day21(Words &words)
{
	words.word[0] = _T("speculation"); words.number[0] = 2001; words.chinese[0] = _T("n. �r���B�q���B���");	 words.ps[0] = _T("\r\nps. speculate (v) ����B�����B����Fspeculator (n) �����");
	words.word[1] = _T("feasible"); words.number[1] = 2003; words.chinese[1] = _T("adj. (�N���B�p�e��)�i��檺�B�i�઺");	 words.ps[1] = _T("\r\nps. feasibility (n) �i���");
	words.word[2] = _T("ventilation"); words.number[2] = 2007; words.chinese[2] = _T("n. �q���B�Ů�y�q");	 words.ps[2] = _T("\r\nps. ventilate (v) �ϪŮ�y�q�B�ϳq��");
	words.word[3] = _T("fragile"); words.number[3] = 2010; words.chinese[3] = _T("adj. ���H���B�ܮz��");	 words.ps[3] = _T("");
	words.word[4] = _T("consist"); words.number[4] = 2013; words.chinese[4] = _T("v. ��~�c���B�s�b��");	 words.ps[4] = _T("");
	words.word[5] = _T("deteriorate"); words.number[5] = 2016; words.chinese[5] = _T("v. �ϴc�ơB���a");	 words.ps[5] = _T("\r\nps. deterioration (n) �c��");
	words.word[6] = _T("perceive"); words.number[6] = 2018; words.chinese[6] = _T("v. ��ı�B�z�Ѭ�");	 words.ps[6] = _T("\r\nps. perception (n) �{���B��ı");
	words.word[7] = _T("initiate"); words.number[7] = 2019; words.chinese[7] = _T("v. �}�l�B�o�_");	 words.ps[7] = _T("\r\nps. initial  (adj) �̪쪺 (576)�Finitivative (n) �D�ʦ�ʡB�D���v�B�v��");
	words.word[8] = _T("fluent"); words.number[8] = 2027; words.chinese[8] = _T("adj. �y�Z���B�y�Q��");	 words.ps[8] = _T("\r\nps. fluently (adv) �y�Z�a�Ffluency (n) �y�Z");
	words.word[9] = _T("housing"); words.number[9] = 2030; words.chinese[9] = _T("n. ��v�B��v�ѵ�");	 words.ps[9] = _T("\r\nps. house (v)����(�~��B����)�F(n)�Фl");
	words.word[10] = _T("attribute"); words.number[10] = 2032; words.chinese[10] = _T("v. ��~�k�]��Fn. �ݩʡB�S��");	 words.ps[10] = _T("\r\nps. attribution (n) �k�ݡB�k�]");
	words.word[11] = _T("chronicle"); words.number[11] = 2035; words.chinese[11] = _T("n. �s�~�v�B�O�ơFv. ����");	 words.ps[11] = _T("\r\nps. chronological (adj) �s�~���B�̮ɶ�����O����");
	words.word[12] = _T("municipal"); words.number[12] = 2039; words.chinese[12] = _T("adj. ���F���B�۪v��");	 words.ps[12] = _T("");
	words.word[13] = _T("acquaintance"); words.number[13] = 2041; words.chinese[13] = _T("n. �{�Ѫ��H�B����");	 words.ps[13] = _T("\r\nps. acquaint (v) �ϼ��x�B�ϤF��");
	words.word[14] = _T("periodical"); words.number[14] = 2045; words.chinese[14] = _T("n. ���Z�B���x");	 words.ps[14] = _T("\r\nps. period (n) �����Fperiodic (adj) �w�����B�g�����F\r\n    periodically (adv) �w���a�B�g���ʦa");
	words.word[15] = _T("partition"); words.number[15] = 2049; words.chinese[15] = _T("n. �j�O�B���j�B���ΡFv. ���ΡB�j�}");	 words.ps[15] = _T("");
	words.word[16] = _T("principle"); words.number[16] = 2054; words.chinese[16] = _T("n. ��h�B��z�B�H���B�w��");	 words.ps[16] = _T("");
	words.word[17] = _T("reminder"); words.number[17] = 2057; words.chinese[17] = _T("n. ������B�����ƪ�");	 words.ps[17] = _T("\r\nps. remind (v) �ϰO�_�B�����Fremainder (n) ��l = others");
	words.word[18] = _T("column"); words.number[18] = 2061; words.chinese[18] = _T("n. ��W�B�d�B�M��");	 words.ps[18] = _T("");
	words.word[19] = _T("cater"); words.number[19] = 2063; words.chinese[19] = _T("v. �ǳƮb�u�B���@����");	 words.ps[19] = _T("\r\nps. catering (n) �ӿ�s�u�Fcaterer (n) �~��~��");
	words.word[20] = _T("consecutive"); words.number[20] = 2065; words.chinese[20] = _T("adj. �s��");	 words.ps[20] = _T("\r\nps. consecutively (adv) �s��a");
	words.word[21] = _T("contrary"); words.number[21] = 2068; words.chinese[21] = _T("adj. �ۤϪ��B��ߪ�");	 words.ps[21] = _T("");
	words.word[22] = _T("furnished"); words.number[22] = 2071; words.chinese[22] = _T("adj. �t�ƳíѪ��B��ƪ�");	 words.ps[22] = _T("\r\nps. furnish (v) �t�m�íѡB�ѵ��Ffurnishings (n) �~�a���]�~");
	words.word[23] = _T("browse"); words.number[23] = 2075; words.chinese[23] = _T("v. �s���B�˯�(��T)�Fn. �s��");	 words.ps[23] = _T("");
	words.word[24] = _T("moderate"); words.number[24] = 2077; words.chinese[24] = _T("adj. �A�ת��B�ũM���Fv. �ϾA���B�D��");	 words.ps[24] = _T("\r\nps. moderately (adv) �A�צa�B�L�o�h�a�Fmoderation (n) �w�M�B�A�סB�`��");
	words.word[25] = _T("ample"); words.number[25] = 2078; words.chinese[25] = _T("adj. �R�����B�״I��");	 words.ps[25] = _T("\r\nps. �ۦ����Gsufficient (729)�Famply (adv) �R���a");
	words.word[26] = _T("primary"); words.number[26] = 2085; words.chinese[26] = _T("adj. �D�n���B��Ū�");	 words.ps[26] = _T("\r\nps. primarily (adv) �D�n�a");
	words.word[27] = _T("optimistic"); words.number[27] = 2056; words.chinese[27] = _T("adj. ���[��");	 words.ps[27] = _T("\r\nps. ��: optimistic = postive <--> �d: pessimistic = negative�F\r\n    optimize (v) �ϧ����B�Ϧ��Ī��Foptimism (n) ���[(�D�q)");
	words.word[28] = _T("attitude"); words.number[28] = 2090; words.chinese[28] = _T("n. �A�סB�N���B����");	 words.ps[28] = _T("");
	words.word[29] = _T("soar"); words.number[29] = 2092; words.chinese[29] = _T("v. �����B����");	 words.ps[29] = _T("");
	words.word[30] = _T("conversion"); words.number[30] = 2095; words.chinese[30] = _T("n. ���ܡB�ഫ");	 words.ps[30] = _T("\r\nps. convert (v) �ഫ�B���ܡF(n) ���ܫH����");
	words.word[31] = _T("alleviate"); words.number[31] = 2098; words.chinese[31] = _T("v. ��B�w�M(���D�B�f�h��)");	 words.ps[31] = _T("\r\nps. �ۦ����Grelieve (1844)�Falleviation (n) �w�M�B��h��");

	words.ex[0] = _T("There is a lot of media speculation about the councilor's future.");
	words.ex[1] = _T("I don't think the expansion plan is feasible.");
	words.ex[2] = _T("A maintenance technician is checking the ventilation system.");
	words.ex[3] = _T("Since it is fragile, handle it with care.");
	words.ex[4] = _T("Our target market consists largely of retirees and the elderly.");
	words.ex[5] = _T("The environment deteriorates as the number of cars increases.");
	words.ex[6] = _T("We perceived changes in our competitor's marketing strategy.");
	words.ex[7] = _T("Factory management initiated negotiations with the labor union.");
	words.ex[8] = _T("The successful applicant will be fluent in English and French.");
	words.ex[9] = _T("The government is building affordable housing in the outer suburbs.");
	words.ex[10] = _T("The economist attributed the recession to the global economic slump.");
	words.ex[11] = _T("The town hall has a chronicle of this region's history.");
	words.ex[12] = _T("The municipal authorities are trying to attract foreign investment.");
	words.ex[13] = _T("Mr. Stanton is an acquaintance from my previous job.");
	words.ex[14] = _T("Vogue publishes several popular periodicals.");
	words.ex[15] = _T("The desks in the office are separated by partitions.");
	words.ex[16] = _T("Executives on both sides agree to the merger in principle.");
	words.ex[17] = _T("We received a reminder of last month's unpaid electricity bill.");
	words.ex[18] = _T("The roof is supported by large columns.");
	words.ex[19] = _T("My assistant will hire a chef to cater for the event.");
	words.ex[20] = _T("We're won the premier industry award for there consecutive years.");
	words.ex[21] = _T("Contrary to speculation, the company reduced its workforce by 20%.");
	words.ex[22] = _T("The apartment being advertised is fully furnished.");
	words.ex[23] = _T("Guests are welcome to browse around our private library.");
	words.ex[24] = _T("Moderate exercise is good for your health.");
	words.ex[25] = _T("There will be ample time for questions after the presentation.");
	words.ex[26] = _T("Tourism is the country's primary source of revenue.");
	words.ex[27] = _T("Researchers are optimistic that project funding will increase.");
	words.ex[28] = _T("We're looking for someone with a positive attitude and enthusiasm.");
	words.ex[29] = _T("The company's stock price soared after the announcement of the merger.");
	words.ex[30] = _T("The hotel's conversion into apartments will begin next week.");
	words.ex[31] = _T("This medicine will alleviate your pain.");

}
void getWords_Day22(Words &words)
{
	words.word[0] = _T("practical"); words.number[0] = 2101; words.chinese[0] = _T("adj. ����i�檺�B��ڪ��B��Ϊ�");	 words.ps[0] = _T("\r\nps. �ۤϵ��Gimpractical ������ڪ��B����Ϊ�");
	words.word[1] = _T("yield"); words.number[1] = 2105; words.chinese[1] = _T("n. �Q��B���q");	 words.ps[1] = _T("");
	words.word[2] = _T("sensitivity"); words.number[2] = 2108; words.chinese[2] = _T("n. �ӷP�ʡB�ӾU�סB�P����");	 words.ps[2] = _T("\r\nps. sensitive (adj) �ӷP���Fsensible (adj) �N�Ѩ쪺�B�X���z��");
	words.word[3] = _T("intersection"); words.number[3] = 2110; words.chinese[3] = _T("n. ��e���f");	 words.ps[3] = _T("");
	words.word[4] = _T("bare"); words.number[4] = 2115; words.chinese[4] = _T("adj. �Ū�(�s��)�B���r���Fv. �Ϩ��r�B�S�X");	 words.ps[4] = _T("\r\nps. barely (adv) �ȶȡB���B�X�G��");
	words.word[5] = _T("tension"); words.number[5] = 2117; words.chinese[5] = _T("n. ��i�B(�g�����Y)��i���p�B���");	 words.ps[5] = _T("\r\nps. tense (adj) ��i���B���^���F(v) �Ϻ�i");
	words.word[6] = _T("downturn"); words.number[6] = 2120; words.chinese[6] = _T("n. (�g��)�I�h�B������B�U��");	 words.ps[6] = _T("");
	words.word[7] = _T("insight"); words.number[7] = 2124; words.chinese[7] = _T("n. ���a�B���ѡB�}��O�B����");	 words.ps[7] = _T("\r\nps. insightful (adj) ��}��O���B���`�訣�Ѫ�");
	words.word[8] = _T("evident"); words.number[8] = 2127; words.chinese[8] = _T("adj. ���㪺�B�M����");	 words.ps[8] = _T("\r\nps. evidently (adv) ����a�B��M�a�Fevidence (n) �Ҿ�");
	words.word[9] = _T("pave"); words.number[9] = 2130; words.chinese[9] = _T("v. �Q(��)");	 words.ps[9] = _T("\r\nps. pavement (n) �Q�L�����B�H��D");
	words.word[10] = _T("legislation"); words.number[10] = 2134; words.chinese[10] = _T("n. �ߪk�B�k�O�B�k�W");	 words.ps[10] = _T("\r\nps. legislate (v) ��w�k�ߡB�ߪk�Flegislator (n) �ߪk�̡F\r\n    legislative (adj) �ߪk��");
	words.word[11] = _T("amendment"); words.number[11] = 2137; words.chinese[11] = _T("n. �׭q�B�ץ��B�ץ��ƶ�");	 words.ps[11] = _T("\r\nps. amend (v) �׭q�B�ץ�");
	words.word[12] = _T("parcel"); words.number[12] = 2142; words.chinese[12] = _T("n. �]�q�B�p�]�Fv. ���]�B�q�n");	 words.ps[12] = _T("\r\nps. �ۦ����Gpackage (n)");
	words.word[13] = _T("conscious"); words.number[13] = 2145; words.chinese[13] = _T("adj. �N�Ѩ쪺�B��ı�쪺");	 words.ps[13] = _T("\r\nps. consciousness (n) �N�ѡB��ı�F�ۤϵ��Gunconscious (adj) �L�N�Ѫ�");
	words.word[14] = _T("foreseeable"); words.number[14] = 2147; words.chinese[14] = _T("adj. �i�w�����B�i�w����");	 words.ps[14] = _T("\r\nps. foresee (v) �w���B�w���Funforeseen (adj) �w�Ƥ��~��");
	words.word[15] = _T("shred"); words.number[15] = 2149; words.chinese[15] = _T("v. ���H�B��");	 words.ps[15] = _T("");
	words.word[16] = _T("convey"); words.number[16] = 2153; words.chinese[16] = _T("v. �ǰe�B�B�e");	 words.ps[16] = _T("");
	words.word[17] = _T("restrain"); words.number[17] = 2156; words.chinese[17] = _T("v. ����B���B����");	 words.ps[17] = _T("\r\nps. restraint (n) ����B�ި�B���");
	words.word[18] = _T("successive"); words.number[18] = 2159; words.chinese[18] = _T("adj. �s�򪺡B���~��");	 words.ps[18] = _T("\r\nps. �ۦ���: consecutive (2065)�Fsuccessful (adj) ���\��");
	words.word[19] = _T("parallel"); words.number[19] = 2162; words.chinese[19] = _T("adj. adv. ���檺(�a)�Fv. �P~�ۦ��Fn. �������H�ƪ�");	 words.ps[19] = _T("");
	words.word[20] = _T("unanimously"); words.number[20] = 2164; words.chinese[20] = _T("adv. ����@�P�a�B�L��ĳ�a");	 words.ps[20] = _T("\r\nps. unanimous (adj) �L��ĳ���B����@�P��");
	words.word[21] = _T("resemblance"); words.number[21] = 2167; words.chinese[21] = _T("n. �ۦ��I�B�ۦ�");	 words.ps[21] = _T("");
	words.word[22] = _T("subordinate"); words.number[22] = 2170; words.chinese[22] = _T("n. ���ݡFadj. ���n���B���ݪ�");	 words.ps[22] = _T("");
	words.word[23] = _T("cultivate"); words.number[23] = 2175; words.chinese[23] = _T("v. ���|�B�ѧ@");	 words.ps[23] = _T("\r\nps. cultivation (n) ���|�B�ѧ@�Fcultivated (adj) ���оi���B�ѧ@��");
	words.word[24] = _T("utmost"); words.number[24] = 2178; words.chinese[24] = _T("n. �̤j�i��B�����Fadj. �̤j����");	 words.ps[24] = _T("");
	words.word[25] = _T("dividend"); words.number[25] = 2181; words.chinese[25] = _T("n. �Ѯ��B�ѧQ");	 words.ps[25] = _T("\r\nps. divide (v) ���t�B�����Fdivision (n) ����(���q��)�B����");
	words.word[26] = _T("allocate"); words.number[26] = 2182; words.chinese[26] = _T("v. ���t�B����");	 words.ps[26] = _T("\r\nps. allocation (n) ���t���B���t");
	words.word[27] = _T("exclusive"); words.number[27] = 2186; words.chinese[27] = _T("adj. �W�a���B�W�����B�M�Ϊ��B�ƥ~��");	 words.ps[27] = _T("\r\nps. �ۤϵ��Ginclusive (adj) �]�t���Fexclusively (adv) �W���a�B�M���a�F\r\n    exclude (v) �N~�ư��b�~�Fexclusion (n) �ư��b�~");
	words.word[28] = _T("contamination"); words.number[28] = 2191; words.chinese[28] = _T("n. ���V�B����");	 words.ps[28] = _T("\r\nps. contaminate (v) ���V�B�����Fcontaminant (n) ���V����");
	words.word[29] = _T("punctuality"); words.number[29] = 2194; words.chinese[29] = _T("n. �u�ɡB�Ǯ�");	 words.ps[29] = _T("\r\nps. punctual (adj) �u�ɪ�");
	words.word[30] = _T("intention"); words.number[30] = 2199; words.chinese[30] = _T("n. �N�ϡB�ت�");	 words.ps[30] = _T("\r\nps. intend (v) �N�ϡB�Q�n�Fintentional (adj) ���N��");
	words.word[31] = _T("culminate"); words.number[31] = 2200; words.chinese[31] = _T("v. �����B�i��");	 words.ps[31] = _T("\r\nps. culmination (n) ���I�B����");

	words.ex[0] = _T("She suggest practical solutions to our cash flow problems.");
	words.ex[1] = _T("The potato crops are producing smaller yields each year.");
	words.ex[2] = _T("Please handle all confidential comapany files with great sensitivity.");
	words.ex[3] = _T("There are traffic lights at the intersection.");
	words.ex[4] = _T("We should decorate this bare room.");
	words.ex[5] = _T("Office workers often feel a lot of tension and anxiety.");
	words.ex[6] = _T("The economic downturn is likely to be temporary.");
	words.ex[7] = _T("I heard many interesting insights at the convention.");
	words.ex[8] = _T("It is evident that the marketing strategy is not working.");
	words.ex[9] = _T("The sidewalk is paved with bricks.");
	words.ex[10] = _T("The government proposed legislation banning smoking in restaurants.");
	words.ex[11] = _T("Our lawyer made amendments to the terms of the lease.");
	words.ex[12] = _T("You can track the status of your parcel online.");
	words.ex[13] = _T("Manufacturers should be conscious of their environmental impact.");
	words.ex[14] = _T("Housing costs will continue rising for the foreseeable future.");
	words.ex[15] = _T("The internal documents were shredded and thrown out.");
	words.ex[16] = _T("Customer service employees must always convey a friendly impression.");
	words.ex[17] = _T("The accounting manager is trying to restrain company spending.");
	words.ex[18] = _T("He has won ''Employee of the Month'' three successive times.");
	words.ex[19] = _T("The outer wall of the building runs parallel to the road.");
	words.ex[20] = _T("The shareholders voted unanimously to approve the merger.");
	words.ex[21] = _T("The competing model bears a strong resemblance to our own design.");
	words.ex[22] = _T("Mr. Sahaar is respected by his peers and subordinates.");
	words.ex[23] = _T("This program has been designed to cultivate specialists.");
	words.ex[24] = _T("We always do our utmost to keep our customers satisfied.");
	words.ex[25] = _T("Stockholders will receive a dividend for this fiscal year.");
	words.ex[26] = _T("Each employee will be allocated a file to work on.");
	words.ex[27] = _T("The TV program had an exclusive interview with Thierry Henry.");
	words.ex[28] = _T("To avoid contamination, please be careful when handling waste.");
	words.ex[29] = _T("Employee punctuality is very important for our productivity.");
	words.ex[30] = _T("The store no intention of giving us a refund.");
	words.ex[31] = _T("Today's conference will culminate in a group discussion.");

}
void getWords_Day23(Words &words)
{
	words.word[0] = _T("constitute"); words.number[0] = 2201; words.chinese[0] = _T("v. �c���B�]��");	 words.ps[0] = _T("\r\nps. constitution (n) �˪k�B���{�B�զ��Fconstitutional (adj) �˪k���B��檺");
	words.word[1] = _T("breakdown"); words.number[1] = 2204; words.chinese[1] = _T("n. �G�١B���l�B�}��");	 words.ps[1] = _T("");
	words.word[2] = _T("originate"); words.number[2] = 2208; words.chinese[2] = _T("v. �o���a�B�ӦۡB�Щl");	 words.ps[2] = _T("\r\nps. original (adj) ��Ъ��B���Ӫ��Foriginally (adv) ��ӡB�_��");
	words.word[3] = _T("receivable"); words.number[3] = 2211; words.chinese[3] = _T("adj. �����ڪ��B�i������");	 words.ps[3] = _T("");
	words.word[4] = _T("consulate"); words.number[4] = 2214; words.chinese[4] = _T("n. ����]");	 words.ps[4] = _T("");
	words.word[5] = _T("circulate"); words.number[5] = 2217; words.chinese[5] = _T("v. �Ǿ\(���~�B��T��)�B�y�q�B�`���B�Ǽ�");	 words.ps[5] = _T("\r\nps. circulation (n) �`���B�y�q");
	words.word[6] = _T("sequel"); words.number[6] = 2220; words.chinese[6] = _T("n. (�q�v�B�Ѫ�) �򶰡B�H���ӨӪ���");	 words.ps[6] = _T("");
	words.word[7] = _T("adverse"); words.number[7] = 2222; words.chinese[7] = _T("adj. �t�����B���`���B���Q���B�Ĺ諸");	 words.ps[7] = _T("\r\nps. adversely (adv) �t���a�B���Q�a");
	words.word[8] = _T("frustrated"); words.number[8] = 2226; words.chinese[8] = _T("adj. �Ҵo���B���𪺡B���骺");	 words.ps[8] = _T("\r\nps. frustrate (v) �Ϯ��ѡB�Ϯ���B����Ffrustration (n) ����B�q��");
	words.word[9] = _T("prosperous"); words.number[9] = 2229; words.chinese[9] = _T("adj. ���\���B�������B�c�a��");	 words.ps[9] = _T("\r\nps. prosperity (n) �c�a�B�����B���\");
	words.word[10] = _T("breakage"); words.number[10] = 2232; words.chinese[10] = _T("n. �}�l�B���a");	 words.ps[10] = _T("");
	words.word[11] = _T("constantly"); words.number[11] = 2237; words.chinese[11] = _T("adj. ����a�B���_�a");	 words.ps[11] = _T("\r\nps. constant (adj) ���s���_���B����");
	words.word[12] = _T("solely"); words.number[12] = 2240; words.chinese[12] = _T("adv. ���a");	 words.ps[12] = _T("\r\nps. sole (adj) �Ȧ��B�ߤ@��");
	words.word[13] = _T("expenditure"); words.number[13] = 2242; words.chinese[13] = _T("n. ��X�B�g�O");	 words.ps[13] = _T("\r\nps. �P�q���Gcosts�Bexpenses");
	words.word[14] = _T("definitive"); words.number[14] = 2245; words.chinese[14] = _T("adj. �̲ת��B�M�w�ʪ��B�̨Ϊ�");	 words.ps[14] = _T("\r\nps. definitively (adj) �̲צa");
	words.word[15] = _T("fixture"); words.number[15] = 2248; words.chinese[15] = _T("n. (�ЫΤ��T�w��)�˸m�B�]��");	 words.ps[15] = _T("");
	words.word[16] = _T("ongoing"); words.number[16] = 2252; words.chinese[16] = _T("adj. ����i�檺�B���_�o�i��");	 words.ps[16] = _T("");
	words.word[17] = _T("compatible"); words.number[17] = 2254; words.chinese[17] = _T("adj. �ۮe���B��@�s��");	 words.ps[17] = _T("\r\nps. compatibility (n) �ۮe�ʡB�æs�F�ۤϵ��Gincompatible (adj) ���ۮe��");
	words.word[18] = _T("bookkeeper"); words.number[18] = 2257; words.chinese[18] = _T("n. ï�O��");	 words.ps[18] = _T("");
	words.word[19] = _T("demolish"); words.number[19] = 2261; words.chinese[19] = _T("v. �鷴�B���a�B��½");	 words.ps[19] = _T("\r\nps. demolition (n) �}�a");
	words.word[20] = _T("extraordinary"); words.number[20] = 2265; words.chinese[20] = _T("adj. �D�Z���B�S�O���B��H���B�S����");	 words.ps[20] = _T("\r\nps. �ۤϵ��Gordinary ���q���B���Z��");
	words.word[21] = _T("loyalty"); words.number[21] = 2266; words.chinese[21] = _T("n. ���۫סB����");	 words.ps[21] = _T("");
	words.word[22] = _T("consolidate"); words.number[22] = 2274; words.chinese[22] = _T("v. �d�T(�B�ҡB�a��)�B�ϰ�T�B�X��");	 words.ps[22] = _T("\r\nps. consolidation (n) �[�j�B�d�T");
	words.word[23] = _T("perishable"); words.number[23] = 2275; words.chinese[23] = _T("adj. ���G�ꪺ�B���ܽ誺");	 words.ps[23] = _T("\r\nps. perish (v) �G��B���h");
	words.word[24] = _T("simplify"); words.number[24] = 2279; words.chinese[24] = _T("v. ²�ơB��¤�");	 words.ps[24] = _T("\r\nps. simplification (n) ��¤ơB²��ơFsimplicity (n) ²��B���");
	words.word[25] = _T("delicate"); words.number[25] = 2283; words.chinese[25] = _T("adj. �Ƥ⪺�B�L�����B�ֲӪ��B�ܮz���B��o��  =  fragile");	 words.ps[25] = _T("");
	words.word[26] = _T("dismissal"); words.number[26] = 2285; words.chinese[26] = _T("n. �Ѷ��B�K¾�B���Ҽ{");	 words.ps[26] = _T("\r\nps. dismiss (v) �Ѷ��B���Ҽ{");
	words.word[27] = _T("inaugurate"); words.number[27] = 2288; words.chinese[27] = _T("v. �|��}��/������§�B�ЫءB�}�l");	 words.ps[27] = _T("\r\nps. inauguration (n) �N¾�B�}���B�}�l");
	words.word[28] = _T("activate"); words.number[28] = 2292; words.chinese[28] = _T("v. �ҰʡB����");	 words.ps[28] = _T("\r\nps. acitve (adj) �n�����B���⪺�Factivation (n) ����(�@��)�Factivity (n)����");
	words.word[29] = _T("reform"); words.number[29] = 2294; words.chinese[29] = _T("v. �ﭲ�B���s�B��y");	 words.ps[29] = _T("");
	words.word[30] = _T("surplus"); words.number[30] = 2298; words.chinese[30] = _T("n. �վl�B���t�B�Ѿl�B�L��");	 words.ps[30] = _T("");
	words.word[31] = _T("recovery"); words.number[31] = 2300; words.chinese[31] = _T("n. (�g��)�^�ɡB�_�d�B��_");	 words.ps[31] = _T("\r\nps. recover (v) ��_�B�d�_�B��^");

	words.ex[0] = _T("Women constitute seventy percent of the company's workforce.");
	words.ex[1] = _T("It took hours to repair the breakdown in the network.");
	words.ex[2] = _T("The proposal originated from an informal discussion between executives.");
	words.ex[3] = _T("Our accounts receivable currently total over $5000.");
	words.ex[4] = _T("You can get a visa at the Korean Consulate in Cairo.");
	words.ex[5] = _T("I circulated the minutes from last month's committee meeting.");
	words.ex[6] = _T("The two sequals to Shrek were very successful.");
	words.ex[7] = _T("Consumers now understand the adverse effects of food additives.");
	words.ex[8] = _T("Shareholders are frustrated with the company's poor performance.");
	words.ex[9] = _T("Our investment in emerging markets has proved prosperous.");
	words.ex[10] = _T("The shippment firm is liable for breakages that occur in transit.");
	words.ex[11] = _T("Residential property is constantly increasing in value.");
	words.ex[12] = _T("We are focused solely on increasing the sales volume this quarter.");
	words.ex[13] = _T("The accounting team audits all company expenditures.");
	words.ex[14] = _T("The task force is working on a definitive solution to the problem.");
	words.ex[15] = _T("Light fixtures have been installed in the ceiling.");
	words.ex[16] = _T("There is an ongoing project to modernize the museum.");
	words.ex[17] = _T("The new software is compatible with our IT system.");
	words.ex[18] = _T("The restaurant chain needs a new bookkeeper.");
	words.ex[19] = _T("Experts were brought in to demolish the old structure.");
	words.ex[20] = _T("The Polimo is an extraordinary new vehicle from CosMotors.");
	words.ex[21] = _T("Long-term employees should be rewarded for their loyalty.");
	words.ex[22] = _T("Korea is consolidating its lead in the mobile phone market.");
	words.ex[23] = _T("We store perishable items in the freezer.");
	words.ex[24] = _T("Management will simplify the leave application procedure.");
	words.ex[25] = _T("The publicity manager handles all delicate matters with the media.");
	words.ex[26] = _T("Failure to meet your sales quota may result in dismissal.");
	words.ex[27] = _T("Our research center was inaugurated in 2002.");
	words.ex[28] = _T("Activate the machine by pressing the start button.");
	words.ex[29] = _T("The new  president plans to reform the political system.");
	words.ex[30] = _T("The finance manager announced a budget surplus of over $10,000.");
	words.ex[31] = _T("This chart shows the recovery of the company's stock price.");

}
void getWords_Day24(Words &words)
{
	words.word[0] = _T("lessen"); words.number[0] = 2305; words.chinese[0] = _T("v. ��֡B��B�ܤp");	 words.ps[0] = _T("\r\nps. less (adj) ���p���F(adv) ���p�a�F\r\n    lesser (adj) ���p���B���֪��B���n���F(adv) ����");
	words.word[1] = _T("obstacle"); words.number[1] = 2307; words.chinese[1] = _T("n. ��ê(��)�B��ê = obstruction");	 words.ps[1] = _T("");
	words.word[2] = _T("arbitration"); words.number[2] = 2310; words.chinese[2] = _T("n. (�ɪ�����)����B���M");	 words.ps[2] = _T("");
	words.word[3] = _T("installment"); words.number[3] = 2311; words.chinese[3] = _T("n. �����I�ڡB�@���B�@�`");	 words.ps[3] = _T("");
	words.word[4] = _T("pedestrian"); words.number[4] = 2315; words.chinese[4] = _T("n. ��H�Fadj. �{�B���B�B�檺");	 words.ps[4] = _T("");
	words.word[5] = _T("remarkable"); words.number[5] = 2317; words.chinese[5] = _T("adj. ��H���B�X����");	 words.ps[5] = _T("\r\nps. remarkably (adv) �D�Z�a�B����a");
	words.word[6] = _T("conservation"); words.number[6] = 2320; words.chinese[6] = _T("n. �O�@�B�O�s = preservation");	 words.ps[6] = _T("\r\nps. conserve (v) �O�s�B�O�@ = preserve");
	words.word[7] = _T("harsh"); words.number[7] = 2324; words.chinese[7] = _T("adj. �Y�F���B�V�誺�B(����B����)�x����");	 words.ps[7] = _T("\r\nps. harshly (adv) �Y�V�a�Fharshness (n) �V��B�c�H");
	words.word[8] = _T("waive"); words.number[8] = 2327; words.chinese[8] = _T("v. �M�^�B�߱�(�k�w�v���B�v�Q)");	 words.ps[8] = _T("\r\nps. waiver (n) (�v�Q��)�߱�B���v");
	words.word[9] = _T("equal"); words.number[9] = 2329; words.chinese[9] = _T("adj. �۵����B�۷��Fv. ����Fn. �۵����H�ƪ�");	 words.ps[9] = _T("\r\nps. equally (adv) �۵��a�B�����a�Fequality (n) �P��");
	words.word[10] = _T("lasting"); words.number[10] = 2332; words.chinese[10] = _T("adj. ���[���B�@�[��");	 words.ps[10] = _T("\r\nps. last (v) ����B����");
	words.word[11] = _T("proficiency"); words.number[11] = 2335; words.chinese[11] = _T("n. ��q�B���m");	 words.ps[11] = _T("");
	words.word[12] = _T("prominent"); words.number[12] = 2339; words.chinese[12] = _T("adj. �ۦW���B�㲴���B�ǥX��");	 words.ps[12] = _T("\r\nps. prominently (adv) ��ۦa�B���n�a");
	words.word[13] = _T("simultaneously"); words.number[13] = 2342; words.chinese[13] = _T("adv. �P�ɦa");	 words.ps[13] = _T("\r\nps. simultaneous (adj) �P�ɪ�");
	words.word[14] = _T("distract"); words.number[14] = 2345; words.chinese[14] = _T("v. �Ϥ��ߡB�ಾ'�B�x�Z");	 words.ps[14] = _T("\r\nps. distracting (adj) �O�H���ߪ��Fdistraction (n) �`�N�O�����B�ϤH���ߪ���");
	words.word[15] = _T("attest"); words.number[15] = 2348; words.chinese[15] = _T("v. �ҹ�B�ҩ�");	 words.ps[15] = _T("");
	words.word[16] = _T("breakthrough"); words.number[16] = 2354; words.chinese[16] = _T("n. ��}�B���j�i�i");	 words.ps[16] = _T("");
	words.word[17] = _T("conditional"); words.number[17] = 2356; words.chinese[17] = _T("adj. �����󪺡B�H~������");	 words.ps[17] = _T("\r\nps. �ۤϵ��Gunconditional (adj) �L����");
	words.word[18] = _T("carrier"); words.number[18] = 2360; words.chinese[18] = _T("n. �B��~�B�B��~��");	 words.ps[18] = _T("");
	words.word[19] = _T("inconsistency"); words.number[19] = 2363; words.chinese[19] = _T("n. ���@�P���B�e��٬�");	 words.ps[19] = _T("\r\nps. �ۤϵ��Gconsistency �@�e�B�@�P�F\r\n    inconsistent (adj) ���@�P���B�e��٬ު�");
	words.word[20] = _T("dimension"); words.number[20] = 2365; words.chinese[20] = _T("n. ����(��/�e/��)�B���V�B�譱 = aspect (1505)");	 words.ps[20] = _T("\r\nps. three-dimensional (adj) �T�תŶ���");
	words.word[21] = _T("discretion"); words.number[21] = 2368; words.chinese[21] = _T("n. �ۦ�M�w�v�B�B�z�v�B�ԷV");	 words.ps[21] = _T("\r\nps. discreet (adj) �Ԩ��V�檺�B���㲴��");
	words.word[22] = _T("entail"); words.number[22] = 2371; words.chinese[22] = _T("v. �ݭn�B�ϥ��n = involve (428)");	 words.ps[22] = _T("");
	words.word[23] = _T("entrepreneur"); words.number[23] = 2374; words.chinese[23] = _T("n. ���~�a�B�з~��");	 words.ps[23] = _T("");
	words.word[24] = _T("ballot"); words.number[24] = 2377; words.chinese[24] = _T("n. �ﲼ�B�벼���|");	 words.ps[24] = _T("");
	words.word[25] = _T("interpersonal"); words.number[25] = 2378; words.chinese[25] = _T("adj. �H��(���Y)��");	 words.ps[25] = _T("");
	words.word[26] = _T("determined"); words.number[26] = 2382; words.chinese[26] = _T("adj. ��w�������B�G�_���B�U�w�M�ߪ�");	 words.ps[26] = _T("\r\nps. determine (v) �ϨM�w�B�ϤU�M�ߡFdetermination (n) ��w�B�M��");
	words.word[27] = _T("miscellaneous"); words.number[27] = 2385; words.chinese[27] = _T("adj. �U���U�˪��B�V���� = various");	 words.ps[27] = _T("");
	words.word[28] = _T("transcript"); words.number[28] = 2391; words.chinese[28] = _T("n. �å��B�ۥ��B��r�Z = transcription");	 words.ps[28] = _T("\r\nps. transcribe (v) �üg�B�ۿ�");
	words.word[29] = _T("sacrifice"); words.number[29] = 2395; words.chinese[29] = _T("v. �묹");	 words.ps[29] = _T("");
	words.word[30] = _T("renewal"); words.number[30] = 2396; words.chinese[30] = _T("n. ��q�B(�ؿv���B�a�Ϫ�)��s�B�A�}�o");	 words.ps[30] = _T("\r\nps. renew (v) �ϧ�s�B���s�}�l�Frenewable (n) �i��s��");
	words.word[31] = _T("stipulate"); words.number[31] = 2400; words.chinese[31] = _T("v. �W�w�B���T�n�D");	 words.ps[31] = _T("\r\nps. stipulation (n) �W�w�B����");

	words.ex[0] = _T("A detailed investment plan can lessen your financial risk.");
	words.ex[1] = _T("Good leaders help their employees to overcome obstacles.");
	words.ex[2] = _T("The conflict between labor and management was settled by arbitration.");
	words.ex[3] = _T("Would you like to pay in full, or in installments?");
	words.ex[4] = _T("Pedestrians are walking down the street.");
	words.ex[5] = _T("This fund is showing a remarkable rate of return this quarter.");
	words.ex[6] = _T("Energy conservation is becoming an important political issue.");
	words.ex[7] = _T("The novelist received harsh criticism on his latest work.");
	words.ex[8] = _T("The exporter decided to waive the shipment charge for our order.");
	words.ex[9] = _T("Purchases can be exchanged for products of equal value.");
	words.ex[10] = _T("The interviewee was able to leave a lasting impression.");
	words.ex[11] = _T("Proficiency in computer programming language is essential.");
	words.ex[12] = _T("Councilor Margaret Lovell is a prominent public figure.");
	words.ex[13] = _T("This model can function simultaneously as an MP3 player and as a PMP.");
	words.ex[14] = _T("I don't want the repair work to distract my team.");
	words.ex[15] = _T("He attested to the fact that the product was defective.");
	words.ex[16] = _T("Both parties finally made a breakthrough in negotiations.");
	words.ex[17] = _T("The municipal government issued a conditional building permit.");
	words.ex[18] = _T("Our local airline cannot compete with the major carrirer.");
	words.ex[19] = _T("There are some inconsistencies in Mr. Goff's expense report.");
	words.ex[20] = _T("This techology can add a new dimension to online learning.");
	words.ex[21] = _T("Employee awards will be conferred at the manager's discretion.");
	words.ex[22] = _T("The promotion entails additional overtime hours.");
	words.ex[23] = _T("Mr. Junji is a very promising entrepreur.");
	words.ex[24] = _T("Officials will start to count the ballots from Jackson County.");
	words.ex[25] = _T("We're looking for somebody with outstanding interpersonal skills.");
	words.ex[26] = _T("We have made a determined effort to overcome the crisis.");
	words.ex[27] = _T("Any miscellaneous documents should be filed in the cabinet.");
	words.ex[28] = _T("Transcripts of Dr. Verner's lecture will be made available.");
	words.ex[29] = _T("At Design-X, we never sacrifice our work's quality for price.");
	words.ex[30] = _T("To extend your subscription, simply return this renewal form.");
	words.ex[31] = _T("The job posting stipulates that resumes should be submitted by email.");

}
void getWords_Day25(Words &words)
{
	words.word[0] = _T("margin"); words.number[0] = 2402; words.chinese[0] = _T("n. �Q��B����ťաB(���Ƶ�)�t���F\r\nps. marginal (adj) �p���B�����n���Fmarginally (adv) �ֶq�a�B���L�a");
	words.word[1] = _T("glance"); words.number[1] = 2404; words.chinese[1] = _T("v. �s���B(�ʲ��a)�ݤ@�U�B�@�h�Fn. �@�h");
	words.word[2] = _T("evacuation"); words.number[2] = 2409; words.chinese[2] = _T("n. �����B�M���B���šF\r\nps. evacuate (v) �M�šB�M��");
	words.word[3] = _T("courtesy"); words.number[3] = 2411; words.chinese[3] = _T("adj. �K�O���B§�����Fn. §���B�Ȯ�ܡF\r\nps. courteous (adj.) ��§����");
	words.word[4] = _T("neglect"); words.number[4] = 2414; words.chinese[4] = _T("v. �����B�����B�����B���|�Fn. �����B�����F\r\nps. negligent (adj) �������B�ʤߪ��Fnegligence (n) �����B�婿¾�u");
	words.word[5] = _T("conglomerate"); words.number[5] = 2416; words.chinese[5] = _T("n.  ���~���ΡFadj. ���~���Ϊ�");
	words.word[6] = _T("counterfeit"); words.number[6] = 2419; words.chinese[6] = _T("adj. ���y���B���_���Fv. ���y�B��y�Fn. ���y���B���f");
	words.word[7] = _T("elevate"); words.number[7] = 2424; words.chinese[7] = _T("v. �ﰪ�B�|�_�B���ɡF\r\nps. elevated (adj) �ɰ����B���[���B���|���Felevation (n) �ɰ��B����\r\n    elevator �q��");
	words.word[8] = _T("altitude"); words.number[8] = 2428; words.chinese[8] = _T("n. ���סB����");
	words.word[9] = _T("imperative"); words.number[9] = 2429; words.chinese[9] = _T("adj. �����n���B���n���B��ݳB�z���Fn. ���n��檺�ơB���n����");
	words.word[10] = _T("artificial"); words.number[10] = 2433; words.chinese[10] = _T("adj. �H�u���B�H�y��");
	words.word[11] = _T("condense"); words.number[11] = 2436; words.chinese[11] = _T("v. �@�Y�B�Y��F\r\nps. condensation (n.) �@�Y�B����");
	words.word[12] = _T("corridor"); words.number[12] = 2439; words.chinese[12] = _T("n. ���Y�B�q�D = hallway");
	words.word[13] = _T("element"); words.number[13] = 2442; words.chinese[13] = _T("n. (�c����)�n���B�����B(�q�l���~)����B�򥻭�z");
	words.word[14] = _T("alter"); words.number[14] = 2445; words.chinese[14] = _T("v. ���ܡB�ܧ�F\r\nps. alteration n. ���ܡB���");
	words.word[15] = _T("injection"); words.number[15] = 2449; words.chinese[15] = _T("n. �`�g�B�`�J�F\r\nps. inject (v) �`�g�B(�����)��J");
	words.word[16] = _T("array"); words.number[16] = 2453; words.chinese[16] = _T("n.  �@�t�C�B�j��B�j�q�Fv. ���m�B�ƦC");
	words.word[17] = _T("immune"); words.number[17] = 2456; words.chinese[17] = _T("adj. �K�̪��B�����v�T���F\r\nps. immunity (n.) �K�̡B�K�̤O�B�ŧK�v�Fimmunize (v) �ϧK�̡F\r\n    immunization (n) �K��");
	words.word[18] = _T("foster"); words.number[18] = 2459; words.chinese[18] = _T("v. �U���B�P�i�B���i�B���y�B�N�i");
	words.word[19] = _T("blame"); words.number[19] = 2461; words.chinese[19] = _T("v. ��~�k�S��F�d�ơF\r\nps. blameless (adj) �L�i�d�ơB�L�L����");
	words.word[20] = _T("convence"); words.number[20] = 2464; words.chinese[20] = _T("v. (�|ĳ)�l�}�B�l��");
	words.word[21] = _T("equivalent"); words.number[21] = 2468; words.chinese[21] = _T("adj. �ۦP���B���Ȫ��Fn. �P�����B�������F\r\nps. equivalence (n) �۵��B����");
	words.word[22] = _T("inhale"); words.number[22] = 2474; words.chinese[22] = _T("v. �l�J�B�l��F\r\nps. inhalation (n) �l�J");
	words.word[23] = _T("mutual"); words.number[23] = 2475; words.chinese[23] = _T("adj. �ۤ����B�@�P���F\r\nps. mutually (adv) ���ۦa�B�����a�B�@�P�a");
	words.word[24] = _T("aggressive"); words.number[24] = 2480; words.chinese[24] = _T("adj.  �j�x���B�Ӧb���o���B�I���ʪ��B�n�����D���F\r\nps. aggressively (adv) �I���ʦa");
	words.word[25] = _T("biography"); words.number[25] = 2483; words.chinese[25] = _T("n. �ǰO�F\r\nps. biographical (adj) �ǰO���Fautobiography (n) �۶�");
	words.word[26] = _T("forbid"); words.number[26] = 2486; words.chinese[26] = _T("v. ��ê�B�T�� = prohibit (1200)");
	words.word[27] = _T("immigration"); words.number[27] = 2488; words.chinese[27] = _T("n. (�q�~��)�����B���~�F\r\nps. �ۤϵ��Gemigration (n) ���~�~��B�����X�ҡF\r\n    immigrate (v) �E���B�����Fimmigrant (n) (�~�Ӫ�)����");
	words.word[28] = _T("renowned"); words.number[28] = 2491; words.chinese[28] = _T("adj. �D�W���B���n�檺�F\r\nps. renown (n) �W�n�B�n��");
	words.word[29] = _T("adjacent"); words.number[29] = 2493; words.chinese[29] = _T("adj. �F�񪺡B�۾F��");
	words.word[30] = _T("scheme"); words.number[30] = 2497; words.chinese[30] = _T("n. �p�e(��])�B��סB�p�ѡFv. �p�e�B���w�p�e");
	words.word[31] = _T("obscure"); words.number[31] = 2500; words.chinese[31] = _T("adj. �A���H�����B�ҽk���B�t���Fv. ���ܷt�B�����z�ѡB�V�c�F\r\nps. obviously (adv) �O�Ѧa");

	words.ex[0] = _T("We're reduced our profit margins to stay competitive.");
	words.ex[1] = _T("The women are glancing at some products on the shelf.");
	words.ex[2] = _T("The agency recommended a full-scale evacuation of the area.");
	words.ex[3] = _T("Guests can catch the hotel's courtesy shuttle to the airport.");
	words.ex[4] = _T("The old building has been neglected for years.");
	words.ex[5] = _T("The international conglomerate is expanding into Eastern Europe.");
	words.ex[6] = _T("Officials discovered thousands of dollars worth of counterfeit money.");
	words.ex[7] = _T("The building crew will elevate the speaking platform.");
	words.ex[8] = _T("The plane is built to withstand very high altitudes.");
	words.ex[9] = _T("It is imperative that you inform me of any shipping delays.");
	words.ex[10] = _T("In the future, most electronic devices will utilize artificial intelligence.");
	words.ex[11] = _T("The long report was condensed into a single page.");
	words.ex[12] = _T("The boardroom is at the end of the corridor.");
	words.ex[13] = _T("Humor is a key element in any business presentation.");
	words.ex[14] = _T("This design can be altered according to your specific needs.");
	words.ex[15] = _T("Some people have allergic reactions to the injection.");
	words.ex[16] = _T("Curtain Solutions stocks a wide array of items.");
	words.ex[17] = _T("The AIDS virus attacks the body's immune system.");
	words.ex[18] = _T("This organization fosters a competitive working environment.");
	words.ex[19] = _T("Economists are blaming the recession on higher fuel prices.");
	words.ex[20] = _T("The advisory committee convenes twice a month.");
	words.ex[21] = _T("China's annual GPD is equivalent to that of all Africa.");
	words.ex[22] = _T("All staff should wear masks to avoid inhaling dangerous materials.");
	words.ex[23] = _T("The two parties came to a mutual understanding.");
	words.ex[24] = _T("The company has unveiled an aggressive new marketing strategy.");
	words.ex[25] = _T("Mr. Jones's official biography will be released next month.");
	words.ex[26] = _T("Personal use of the Internet at work is strictly forbidden.");
	words.ex[27] = _T("Please visit the immigration office to inquire about visa extensions.");
	words.ex[28] = _T("The restaurant is renowned fot its outstanding seafood dishes.");
	words.ex[29] = _T("The goods are stored in a warehouse adjacent to the factory.");
	words.ex[30] = _T("The Ministry of Health is developing a new medical insurance scheme.");
	words.ex[31] = _T("He started off working for an obscure company in Nebraska.");

}
void getWords_Day26(Words &words)
{
	words.word[0] = _T("amusement"); words.number[0] = 2506; words.chinese[0] = _T("n. �T�֡B�r���B�T�֬��ʡF\r\nps. amuse (v) ��~�}�ߡB�T��");
	words.word[1] = _T("identical"); words.number[1] = 2508; words.chinese[1] = _T("adj. �����@�ˡB�ۦP���F\r\nps. identification (n)(297) Ų�O�B�����ҩ��B�{�P�Fidentity (n) �����B�ۦP");
	words.word[2] = _T("besides"); words.number[2] = 2510; words.chinese[2] = _T("prep. ��~���~�B�b~���~ = in addition to �Fadv. ���~�B�ӥB");
	words.word[3] = _T("amenity"); words.number[3] = 2512; words.chinese[3] = _T("n. �K�Q�]�I�B�T�ֳ]�I�B�ξA�B�A�N");
	words.word[4] = _T("mortage"); words.number[4] = 2515; words.chinese[4] = _T("n. ���U�ڡFv. ���");
	words.word[5] = _T("adamantly"); words.number[5] = 2517; words.chinese[5] = _T("dav. ��M�a�F\r\nps. adamant (adj.) ��M���B��w��");
	words.word[6] = _T("accelerate"); words.number[6] = 2518; words.chinese[6] = _T("v. �[�t�B�P�i�B(������)���e�F\r\nps. acceleration (n) �[�t");
	words.word[7] = _T("belongings"); words.number[7] = 2522; words.chinese[7] = _T("n. �Ҧ����B�]�� = possessions");
	words.word[8] = _T("delinquent"); words.number[8] = 2526; words.chinese[8] = _T("adj. ���ú���B������I���B���L����");
	words.word[9] = _T("consultation"); words.number[9] = 2529; words.chinese[9] = _T("n. �ԸߡB��ĳ�B�|�E�F\r\nps. consultant (n.) �U��");
	words.word[10] = _T("diverse"); words.number[10] = 2532; words.chinese[10] = _T("adj. ���P���B�h�˪��F\r\nps. diversity (n) �h�˩ʡFdiversify (v) �Ϧh���ơB�Ϧh�ˤ�");
	words.word[11] = _T("beneficiary"); words.number[11] = 2527; words.chinese[11] = _T("n. ���q�H�B���f�̡F\r\nps. Benefit (n)(178) �Q�q�B�n�B�Fbeneficial (adj) ���Q���B���q��");
	words.word[12] = _T("engage"); words.number[12] = 2540; words.chinese[12] = _T("v. �ϱq�ơB�Ϧ���B�l�ަ�B�P~��ԡF\r\nps. engaged (adj) �w�q�B���B�Q�e�Ϊ��B����~���F\r\n    engagement (n) ���|�B�q�B�B����");
	words.word[13] = _T("accumulation"); words.number[13] = 2542; words.chinese[13] = _T("n. �n�E�B�ֿn(�ƶq)�B�v���W�[�F\r\nps. accumulate (v) �ֿn�B�n�E");
	words.word[14] = _T("merit"); words.number[14] = 2546; words.chinese[14] = _T("n. �u�I�B����");
	words.word[15] = _T("tangible"); words.number[15] = 2548; words.chinese[15] = _T("adj. ��誺�B���Ϊ��B�iĲ���F\r\nps. �ۤϵ��Gintangible (adj.) �L�Ϊ�");
	words.word[16] = _T("vague"); words.number[16] = 2555; words.chinese[16] = _T("adj. �ҽk���B�t�k���B�����T��");
	words.word[17] = _T("notable"); words.number[17] = 2556; words.chinese[17] = _T("adj. ��۪��B�ȱo�d�N���B���W���F\r\nps. note (v) �`�N�B���ΡFnoted (adj) �ۦW��");
	words.word[18] = _T("obviously"); words.number[18] = 2560; words.chinese[18] = _T("adv. ��M�a�B����a�F\r\nps. obvious (adj) ���㪺�B������");
	words.word[19] = _T("patent"); words.number[19] = 2562; words.chinese[19] = _T("n. �M�Q�v�B�v�Q�Fadj. �M�Q���B���㪺�Fv. ���o�M�Q�v");
	words.word[20] = _T("outskirts"); words.number[20] = 2566; words.chinese[20] = _T("n. ���ϡB���~");
	words.word[21] = _T("altruism"); words.number[21] = 2569; words.chinese[21] = _T("n. �Q�L�߲z�B�Q�L�D�q�F\r\nps. altruistic (adj) �Q�L��");
	words.word[22] = _T("protocol"); words.number[22] = 2571; words.chinese[22] = _T("n. (��a������)��ĳ�B������סB(�~��)§�`�B(�q��)�q�T��w");
	words.word[23] = _T("troubleshooting"); words.number[23] = 2574; words.chinese[23] = _T("n. �����ƸѡF\r\nps. troubleshooter (n) �����ƸѪ̡B�˭פH��");
	words.word[24] = _T("impose"); words.number[24] = 2579; words.chinese[24] = _T("v. (�W�w����) �j����B�j�[�B�ϱ���(�N��)");
	words.word[25] = _T("resistance"); words.number[25] = 2580; words.chinese[25] = _T("n. �ϧܡB��ܡB���B��ܤO�F\r\nps. resistant (adj) ��ܪ��Fresist (v) ��ܡB���");
	words.word[26] = _T("retrieval"); words.number[26] = 2584; words.chinese[26] = _T("(v) �˯��B�^���B���^�B����F\r\nps. retrieve (v) �˯��B�^���B���^�B����");
	words.word[27] = _T("detach"); words.number[27] = 2587; words.chinese[27] = _T("v. ���}�B�Ϥ����F\r\nps.  �ۤϵ��Gattach (349) ���W�B�Ϫ��ۡFdetachment (n) �����B�W�M");
	words.word[28] = _T("remedy"); words.number[28] = 2589; words.chinese[28] = _T("n. �ɱϡB��i���I�B�B�z��k = solution�B�v���k�Fv. �ɱϡB�勵�B�ȥ�");
	words.word[29] = _T("impending"); words.number[29] = 2592; words.chinese[29] = _T("adj. �Y�N��Ӫ��B�G��");
	words.word[30] = _T("testimonial"); words.number[30] = 2595; words.chinese[30] = _T("n. ����(��)�B�ҩ�(�H)�B�P��(��)");
	words.word[31] = _T("debut"); words.number[31] = 2598; words.chinese[31] = _T("n. �즸�n�x�B�����t�X");

	words.ex[0] = _T("A new amusement park is being built in Weymouth.");
	words.ex[1] = _T("The estimates from the two companies are identical.");
	words.ex[2] = _T("Besides chairing the ethics committee, he heads the research division.");
	words.ex[3] = _T("The conference center has top-class amenities.");
	words.ex[4] = _T("Ms. Jennings cannot keep up with her mortgage repayments.");
	words.ex[5] = _T("The senator adamantly opposes the environment legislation.");
	words.ex[6] = _T("These measures should help accelerate our expansion overseas.");
	words.ex[7] = _T("Personal belongings left behind will be taken to reception.");
	words.ex[8] = _T("The collections officer handles delinquent accounts.");
	words.ex[9] = _T("We have arranged a consulation with a tax lawyer.");
	words.ex[10] = _T(" Our products appeal to a diverse range of customers.");
	words.ex[11] = _T("Stock trading firms are the main beneficiaries of the new law.");
	words.ex[12] = _T("The organization is engaged in several charity projects.");
	words.ex[13] = _T("The database manager is responsible for the accumulation of information.");
	words.ex[14] = _T("Mr. Sumed is evaluating the merits of each proposal.");
	words.ex[15] = _T("The reforms made little tangible difference to the business's performance.");
	words.ex[16] = _T("The boss only gave a vague outline of the project.");
	words.ex[17] = _T("The most notable feature of this model is tis wide LCD screen.");
	words.ex[18] = _T("You are obviously most suitable candidate for the role.");
	words.ex[19] = _T("The lawyers helped us secure a patent on the design.");
	words.ex[20] = _T("Our headquarters are on the outskirts of Boston.");
	words.ex[21] = _T("Charities rely on the altruism of volunteers and donators.");
	words.ex[22] = _T("141 countries have agreed to follow the Kyoto Protocol.");
	words.ex[23] = _T("In case of breakdown, please refer to the troubleshooting guide.");
	words.ex[24] = _T("The local authority imposes strict safety standards on restaurants.");
	words.ex[25] = _T("There was some resistance to the new labor law.");
	words.ex[26] = _T("The software will help us with data retrieval.");
	words.ex[27] = _T("Please detach this form and then fill it out.");
	words.ex[28] = _T("The sales team divised a remedy for our poor results.");
	words.ex[29] = _T("They discussed the impending release of the new clothing line.");
	words.ex[30] = _T("The hotel's website includes testimonials from past guests.");
	words.ex[31] = _T("The film start Jessica Walsh in her debut performance.");

}
void getWords_Day27(Words &words)
{
	words.word[0] = _T("proliferate");	words.number[0] = 2601; words.chinese[0] = _T("v. (�ƶq�W)���ؤW��/�c�ޡF\r\nps. proliferation (n.) �E�W�B��{");
	words.word[1] = _T("symptom");		words.number[1] = 2604; words.chinese[1] = _T("n. �g���B�x��");
	words.word[2] = _T("obligation");	words.number[2] = 2607; words.chinese[2] = _T("n. �q�ȡB�d���F'\r\nps. obligate (v.) �ϭt�q�ȡB�ϭt�d��");
	words.word[3] = _T("skyscraper");	words.number[3] = 2608; words.chinese[3] = _T("n. ���Ѥj��");
	words.word[4] = _T("attorney");		words.number[4] = 2614; words.chinese[4] = _T("n. �k�w�N�z�H�B�߮v = lawyer");
	words.word[5] = _T("inhabitant");	words.number[5] = 2618; words.chinese[5] = _T("n. �~���B�~��̡F\r\nps. habitat (n.)(2975) �Ϯ��a�B(�ʪ�)�ͬ����ҡFinhabit (v.) �~��� ");
	words.word[6] = _T("stability");	words.number[6] = 2621; words.chinese[6] = _T("adv. í�w(��)�B�w�w�����A�F\r\nps. �ۤϵ��Ginstability ���w�w�ʡF stable í�w�� <--> unstable ��í�w��");
	words.word[7] = _T("apparently");	words.number[7] = 2624; words.chinese[7] = _T("adv. ��M�a�F\r\nps. apparent (adj.) �����B��ө�����");
	words.word[8] = _T("rebate");		words.number[8] = 2627; words.chinese[8] = _T("n. �h�ٴڡB�^���B�馩");
	words.word[9] = _T("politely");		words.number[9] = 2630; words.chinese[9] = _T("adv. ��§���a�F\r\nps. polite (adj) ��§�����Fpoliteness (n.) ��§���B�Ȯ�");
	words.word[10] = _T("prevalent");	words.number[10] = 2633; words.chinese[10] = _T("adj. ���M���B���檺�B�y�檺�F\r\nps. prevalence (n) ���M�B����B�y��");
	words.word[11] = _T("lucrative");	words.number[11] = 2636; words.chinese[11] = _T("adj. �ȿ����B��Q�h�� = profitable (1674)");
	words.word[12] = _T("fierce");		words.number[12] = 2641; words.chinese[12] = _T("adj. �j�P���B�E�P���B���ݪ��B�r�P��");
	words.word[13] = _T("congress");	words.number[13] = 2644; words.chinese[13] = _T("n. (����)��|�Bĳ�|�F\r\nps. congressional (adj) ��a�ߪk�������Bĳ�|��");
	words.word[14] = _T("trustee");		words.number[14] = 2647; words.chinese[14] = _T("n. ���ơB�z�ơB(�H�U�]����)���U�޲z�H");
	words.word[15] = _T("superficial"); words.number[15] = 2650; words.chinese[15] = _T("adj. �����B���L���F\r\nps. superficially (adv.) ���a�B���L�a");
	words.word[16] = _T("ascertain");	words.number[16] = 2653; words.chinese[16] = _T("v. �T�w(�ƹ�B�u���)�B�d��");
	words.word[17] = _T("permanent");	words.number[17] = 2656; words.chinese[17] = _T("adj. ���[���B�ä[���B�û����F\r\nps. permanently (adv.) �ä[�a�B�������ܦa�Fpermanence (n) �ä[(��) ");
	words.word[18] = _T("tremendous");	words.number[18] = 2660; words.chinese[18] = _T("adj. ��H���B���j��");
	words.word[19] = _T("definitely");	words.number[19] = 2663; words.chinese[19] = _T("adv. �L�æa�B�֩w�a�B��M�F\r\nps. definite (adj) ���T���B�T�w��");
	words.word[20] = _T("gathering");	words.number[20] = 2666; words.chinese[20] = _T("n. ���|�B�E�|�B����");
	words.word[21] = _T("attire");		words.number[21] = 2667; words.chinese[21] = _T("n. �A�ˡB��� = clothes�Fv.�Ϭ��B����");
	words.word[22] = _T("split");		words.number[22] = 2672; words.chinese[22] = _T("v. ���}�B����B���� (�Q�q�B�O��)�B�����Fn. ���_�B����");
	words.word[23] = _T("mandate");		words.number[23] = 2675; words.chinese[23] = _T("n. (���|�B�벼����)�v�O�B���v�B���O�B�R�O�Fv. ���v�F\r\nps. mandatory (adj)(1665) �q�Ȫ��B�k�w�� ");
	words.word[24] = _T("superb");		words.number[24] = 2677; words.chinese[24] = _T("adj. �@�y���B���Ϊ��F\r\nps. superbly (adv.) �W���a�B���n�a");
	words.word[25] = _T("sustain");		words.number[25] = 2680; words.chinese[25] = _T("v. �D�� (�l�`�B�ˮ`)�F���� = support�B�Ӿ�F\r\nps. sustained (adj) ���[���B����");
	words.word[26] = _T("enlarge");		words.number[26] = 2683; words.chinese[26] = _T("v. ��j�B�X�i�B�W�[(�ƶq)�F\r\nps. enlargement (n.) �X�j");
	words.word[27] = _T("excursion");	words.number[27] = 2686; words.chinese[27] = _T("n. �u�~�Ȧ�B����");
	words.word[28] = _T("controversial");words.number[28] = 2690; words.chinese[28] = _T("adj. ��ĳ�ʪ��B�ް_��ĳ���F\r\nps. �ۤϵ��Guncontroversial (adj.) ���|�ް_��ĳ���Fcontroversy (n.) ��ĳ");
	words.word[29] = _T("sophisticated");words.number[29] = 2693; words.chinese[29] = _T("adj. (����B�˸m��)��K���B�������B�ѽm���B���L�@�����F\r\nps. Sophistication (n) �ѽm�B���оi�B���g��");
	words.word[30] = _T("fabulous");	words.number[30] = 2695; words.chinese[30] = _T("adj. �������B���n���B���j��");
	words.word[31] = _T("anonymous");	words.number[31] = 2700; words.chinese[31] = _T("adj. �ΦW���F\r\nps. anonymously (adv.) �ΦW�a�Fannoyed (adj.) �дo�� (= little angry)");

}
void getWords_Day28(Words &words)
{
	words.word[0] = _T("execute");		words.number[0] = 2703;		words.chinese[0] = _T("v. ����(���ȡB�p�e)�B��I�F\r\nps. executive (adj.) �޲z���B��F�� (n.) �g�z�B�D�ޡF\r\n    execution (n.) ����B��I");
	words.word[1] = _T("boast");		words.number[1] = 2705;		words.chinese[1] = _T("v. �֦�(~�ۻ�)�B�j�N�B��ģ�Fn. �j�N�B��ģ�B�ޥH���a���ƪ�");
	words.word[2] = _T("burst");		words.number[2] = 2707;		words.chinese[2] = _T("v. �z���B�}���F��M�Ĩ�~�Fn. �}���B�z�o");
	words.word[3] = _T("tentative");	words.number[3] = 2709;		words.chinese[3] = _T("adj. �Ȯɩʪ��B�S�ݤ��M���F\r\nps. tentatively (adv.) �Ȯɩʦa");
	words.word[4] = _T("boundary");		words.number[4] = 2713;		words.chinese[4] = _T("n. ����(�u)�B���");
	words.word[5] = _T("acclaim");		words.number[5] = 2717;		words.chinese[5] = _T("v. �������׵����B�ܪ��B�w��B���g�Fn. �ܪ��B���g");
	words.word[6] = _T("consquence");	words.number[6] = 2721;		words.chinese[6] = _T("n. �����B��G�F\r\nps. consequently (adv.) ���G�B�]���B�ҥH�Fconsequent (adj.) \r\n    �H���o�ͪ� = consequential");
	words.word[7] = _T("apparatus");	words.number[7] = 2722;		words.chinese[7] = _T("n. �����B�˸m�B���� =  equipment");
	words.word[8] = _T("enact");		words.number[8] = 2726;		words.chinese[8] = _T("v. ��q�B�q�L (�k�׵�)�Fenactment (n.) (�k�ߪ�)��q�B�k�ߡB�k�W");
	words.word[9] = _T("severely");		words.number[9] = 2729;		words.chinese[9] = _T("adv. �Y���a�B�Y��a�F\r\nps. servere (adj.) �Y�����B�Y�F�� = rigid");
	words.word[10] = _T("demanding");	words.number[10] = 2732;	words.chinese[10] = _T("adj. �O�O���B�n�D�������B�D�窺�B�Y�V��");
	words.word[11] = _T("devise");		words.number[11] = 2736;	words.chinese[11] = _T("v. �]�p�B�Q�X�B�o���F\r\nps. device (n.) �˸m�B�]��");
	words.word[12] = _T("attain");		words.number[12] = 2740;	words.chinese[12] = _T("v. �F��(�ؼСB�F��(��m�B�a�쵥)�F\r\nps. attainable (adj) �i�F�����Fattainment (n.) �F���B���N");
	words.word[13] = _T("inherently");	words.number[13] = 2743;	words.chinese[13] = _T("adv. ����W�a�B�T���a�F\r\nps. inherent (adj.) ���Ӫ��B���誺");
	words.word[14] = _T("captalize");	words.number[14] = 2747;	words.chinese[14] = _T("v. �q����Q = take advantage of�B�ϸꥻ�ơB����(�ꥻ)�B�Τj�p�r���Ѽg�F\r\nps. capital (n)(754) �ꥻ�B�����B�j�g�r�� ");
	words.word[15] = _T("neutrality");	words.number[15] = 2750;	words.chinese[15] = _T("n. ����(��)�F\r\nps. neutral (adj.) ���ߪ��Fneutally (adv.) ���ߦa�B�O�����ߦa");
	words.word[16] = _T("deliberate");	words.number[16] = 2752;	words.chinese[16] = _T("adj. ��N���B�V�����B�q�e���Fv. �`����{���F\r\nps. deliberately (adv.) �V���a�B�G�N�a");
	words.word[17] = _T("exaggerate");	words.number[17] = 2755;	words.chinese[17] = _T("v. �ؤj�B�رi�B���L���F\r\nps. exaggration (n.) �رi�B�ؤj");
	words.word[18] = _T("blend");		words.number[18] = 2756;	words.chinese[18] = _T("v. �V�X�B�ĦX�B�ջs�Fn. �V�X�F\r\nps. blender (n.) �ͩվ�");
	words.word[19] = _T("expose");		words.number[19] = 2760;	words.chinese[19] = _T("v. �ϼ��S(�b�M�I����)�B���S(�ƹ굥) = reveal (878)�F\r\nps. exposure (n.) ���S�B���S�B�n��");
	words.word[20] = _T("engrave");		words.number[20] = 2763;	words.chinese[20] = _T("v. �J��B�N��ʰO");
	words.word[21] = _T("commodity");	words.number[21] = 2769;	words.chinese[21] = _T("n. �ӫ~�B���Ϊ��F��");
	words.word[22] = _T("halt");		words.number[22] = 2771;	words.chinese[22] = _T("n. ���_�B����B�Ȱ��Fv. �Ϥ��_�B����");
	words.word[23] = _T("antibiotic");	words.number[23] = 2775;	words.chinese[23] = _T("n. �ܥͯ��F adj. �ܥͪ��B�ܵߪ�");
	words.word[24] = _T("diminish");	words.number[24] = 2777;	words.chinese[24] = _T("v. ��֡B�Y�� = decrease");
	words.word[25] = _T("infrastructure");words.number[25] = 2781;	words.chinese[25] = _T("n. (��a����)��¦�س]�B���γ]��");
	words.word[26] = _T("bulk");		words.number[26] = 2784;	words.chinese[26] = _T("n. �j�����B�D��B�j�q�Fadj. �j�媺�B�j�q��");
	words.word[27] = _T("bewildering");	words.number[27] = 2788;	words.chinese[27] = _T("adj. �O�H�x�b���F\r\nps. bewilder (v.) �ϰg�b�B�Ͻk��");
	words.word[28] = _T("constraint");	words.number[28] = 2790;	words.chinese[28] = _T("n. ����B�����F\r\nps. constrain (v.) �j���B���� = restrict (1411)");
	words.word[29] = _T("susceptible");	words.number[29] = 2792;	words.chinese[29] = _T("adj. �����P�V/�v�T���B�ӷP���B���ʷP����");
	words.word[30] = _T("outlook");		words.number[30] = 2795;	words.chinese[30] = _T("n. �e���B�i��B���ѡB�[�I");
	words.word[31] = _T("fabricate");	words.number[31] = 2800;	words.chinese[31] = _T("v. �ոˡB�s�y = manufacture (105)�F\r\nps. fabrication (n.) �s�y�Fprefabricated (adj.) (�ؿv)�w�s�c�ت�");
}
void getWords_Day29(Words &words)
{
	words.word[0] = _T("bounce"); 		words.number[0] = 2801; 	words.chinese[0] = _T("v. (�y��)�u�_�B(�䲼�B�q�l�l��)�h�^�F n. �u���B���O");
	words.word[1] = _T("thrive"); 		words.number[1] = 2805; 	words.chinese[1] = _T("v. �����B�c�a (= flourish)�F\r\nps. thriving ������");
	words.word[2] = _T("abrupt");		words.number[2] = 2807; 	words.chinese[2] = _T("adj. ��M���B�N�~���B(�A�סB�y��)�|�����F\r\nps. abruptly ��M�a ");
	words.word[3] = _T("incredible");	words.number[3] = 2810; 	words.chinese[3] = _T("adj. ���Ϊ��B���i�m�H���F\r\nps. incredibly ���H�m�H�a");
	words.word[4] = _T("compel");		words.number[4] = 2814; 	words.chinese[4] = _T("v. �j���B�Ϥ��o���F\r\nps. compelling �O�H�H�A���B�ޤH�J�Ӫ�");
	words.word[5] = _T("facilitate");	words.number[5] = 2817; 	words.chinese[5] = _T("v. �P�i�B�Ϯe���F\r\nps. facility �]�ơB�]�I�Ffacilitation ²���ơB�P�i");
	words.word[6] = _T("undertake");	words.number[6] = 2820; 	words.chinese[6] = _T("v. �ۤ�i��B�t�d�B�Ӿ�(�Ʊ��B�d��)�B���\�B�����F\r\nps. undergo �g���Bundergraduate �j�ǥ�");
	words.word[7] = _T("bilingual");	words.number[7] = 2823; 	words.chinese[7] = _T("adj. ���y���Fn. �ϥ����y��");
	words.word[8] = _T("assert"); 		words.number[8] = 2827; 	words.chinese[8] = _T("v. ��١B�_���F\r\nps. assertive (adj.) �_�����B�Z�_��"); 
	words.word[9] = _T("exhausted"); 	words.number[9] = 2829; 	words.chinese[9] = _T("adj. ��h�O�ܪ��B�Ӻɪ��B�Χ����F\r\nps. exhausting �ϤH��h�O�ܪ�"); 
	words.word[10] = _T("grasp"); 		words.number[10] = 2831; 	words.chinese[10] = _T("v. ��|�B�z�ѡB��c�Fn. �z�ѡB���");
	words.word[11] = _T("aptitude"); 	words.number[11] = 2837; 	words.chinese[11] = _T("n. �Ѹ�B�~��B�A�y�B�۵M�ɦV");
	words.word[12] = _T("escalate");	words.number[12] = 2840; 	words.chinese[12] = _T("v. (�{��)�[�@�B�c�ơB(�~��B������)�v���W��");
	words.word[13] = _T("laundry"); 	words.number[13] = 2843; 	words.chinese[13] = _T("n. �e�~�窫�B�~�穱");
	words.word[14] = _T("integrate"); 	words.number[14] = 2846; 	words.chinese[14] = _T("v. ��X�B�ϧ���F\r\nps. integration (n.) ��X�B�ĦX�Fintegrated (adj.) ��X��");
	words.word[15] = _T("censorship");	words.number[15] = 2850; 	words.chinese[15] = _T("n. �f�d(���)�F\r\nps. censor (n.) (�X�����B�q�v����)�f�d��");
	words.word[16] = _T("apprehensive");words.number[16] = 2852; 	words.chinese[16] = _T("adj. ��~���B�~�{���B�⮩��");
	words.word[17] = _T("heritage"); 	words.number[17] = 2855; 	words.chinese[17] = _T("n. (��ƾ��v��)�򲣡B�ǩ�");
	words.word[18] = _T("cuisine");		words.number[18] = 2859; 	words.chinese[18] = _T("n. �i���B�i���k�B���a");
	words.word[19] = _T("contingent"); 	words.number[19] = 2863; 	words.chinese[19] = _T("adj. �]���p�өw���F�H~������");
	words.word[20] = _T("densely"); 	words.number[20] = 2865; 	words.chinese[20] = _T("adj. �K���a�B�Y�K�a�F\r\nps. dense (adj.)�Y�K���B�K�����Bdensity (n)�K�סB�@��");
	words.word[21] = _T("creditable");	words.number[21] = 2868; 	words.chinese[21] = _T("adj. �ȱo���g���B�i�H���F\r\nps. credit (n.)�H�ΡB�W�A�B�s�ڪ��B�B����");
	words.word[22] = _T("affix"); 		words.number[22] = 2872; 	words.chinese[22] = _T("v. �H�K�W(�l����)�B���W�B�\(�L��)�Fn. ���[��");
	words.word[23] = _T("fundraiser"); 	words.number[23] = 2875; 	words.chinese[23] = _T("n. �Ҵڬ��ʡB�Ҵڪ̡F\r\nps. fundraising (n.) �w�ڡB�Ҵ� (adj) �Ҵڪ�");
	words.word[24] = _T("simulate"); 	words.number[24] = 2878; 	words.chinese[24] = _T("v. �����B�_�R�B���ˡF\r\nps. simulation (n.) �����B�_�R");
	words.word[25] = _T("elict");		words.number[25] = 2881; 	words.chinese[25] = _T("v. �ޥX�B���X�B����");
	words.word[26] = _T("interact"); 	words.number[26] = 2883; 	words.chinese[26] = _T("v. ���ʡB��ۧ@�ΡB���ۼv�T�F\r\nps. interaction (n.) ���ʡB���ۧ@�ΡFinteractive (adj.) �ۤ��@�Ϊ�");
	words.word[27] = _T("comprise");	words.number[27] = 2885; 	words.chinese[27] = _T("v. ��~�զ��B�]�t (consist of)");
	words.word[28] = _T("massive");		words.number[28] = 2889; 	words.chinese[28] = _T("adj. �e�j���B�j�W�Ҫ��B���ꪺ�F\r\nps. mass (n.) �j�q�B���h (adj.) �j�媺�B�j�q�� (v)�E���F\r\n     massively (adv.) �j�q�a");
	words.word[29] = _T("irrigation");	words.number[29] = 2891; 	words.chinese[29] = _T("n. ��@");
	words.word[30] = _T("deficit");		words.number[30] = 2895; 	words.chinese[30] = _T("n. ���r���B������");
	words.word[31] = _T("impede");		words.number[31] = 2898; 	words.chinese[31] = _T("v. ��ê�B��ê");
}
void getWords_Day30(Words &words)
{
	words.word[0] = _T("disclose"); 	words.number[0] = 2901; 	words.chinese[0] = _T("v. �z�|�B���o�B���} = reveal (878) = expose (2760)�F\r\nps. disclosure (n.) ���o�B�z�S�B���}");
	words.word[1] = _T("inevitable"); 	words.number[1] = 2903; 	words.chinese[1] = _T("adj. ���M���B�L�i�קK��");
	words.word[2] = _T("deplete");		words.number[2] = 2906; 	words.chinese[2] = _T("v. n. �ϴ�֡B�\�ܡB�Ӻ�");
	words.word[3] = _T("magnificent"); 	words.number[3] = 2909; 	words.chinese[3] = _T("adj. �������B���R���B���n��");
	words.word[4] = _T("discrepancy"); 	words.number[4] = 2914; 	words.chinese[4] = _T("n. �t���B���@�P");
	words.word[5] = _T("collapse"); 	words.number[5] = 2916; 	words.chinese[5] = _T("v. n. �˶�B�Y��B(����)�ɶ^");
	words.word[6] = _T("revolutionary"); words.number[6] = 2919; 	words.chinese[6] = _T("adj. �зs���B���R���Fn. ���R�̡F\r\nps. revolution (n.) ���s�B�ܭ�");
	words.word[7] = _T("byproduct"); 	words.number[7] = 2924; 	words.chinese[7] = _T("n. �Ʋ��~�B���a���G");
	words.word[8] = _T("sluggish"); 	words.number[8] = 2927; 	words.chinese[8] = _T("adj. ��w���B�������B�i�k��");
	words.word[9] = _T("defy"); 		words.number[9] = 2930; 	words.chinese[9] = _T("v. ���H(�ήe)�B�L�k(�۫H)�B�ڧܡF\r\nps. defiant (adj.) �H�ܪ��B�D�]���Fdefuance (n.) �H�ܡB���");
	words.word[10] = _T("flourish"); 	words.number[10] = 2933; 	words.chinese[10] = _T("v. �����B�c�a�B(�Ӫ�)�Z�K");
	words.word[11] = _T("manipulate"); 	words.number[11] = 2936; 	words.chinese[11] = _T("v.�ާ@�B���a�F\r\nps. manipulation (n.) �ާ@�B���a");
	words.word[12] = _T("layoff");		words.number[12] = 2940; 	words.chinese[12] = _T("n. �껺�B�{�ɸѶ�");
	words.word[13] = _T("bilateral"); 	words.number[13] = 2943; 	words.chinese[13] = _T("adj. ���誺�B���䪺");
	words.word[14] = _T("incidental"); 	words.number[14] = 2946; 	words.chinese[14] = _T("adj. ���a���B���n���B���H�ӨӪ�");
	words.word[15] = _T("intervention"); words.number[15] = 2949; 	words.chinese[15] = _T("n. ���J�B�z�A�B�հ��F\r\nps. intervene (v.) ���J�B�z�A�B�հ�");
	words.word[16] = _T("endorse"); 	words.number[16] = 2953; 	words.chinese[16] = _T("v. �٦P(�N��)�B�I�ѡF\r\nps. endorsement (n.) ����B�I��");
	words.word[17] = _T("dilute"); 		words.number[17] = 2955; 	words.chinese[17] = _T("v. �}���B�d�z�Fadj. �g�}�����B��z���F�F\r\nps. dilution (n.) �}��");
	words.word[18] = _T("confine"); 	words.number[18] = 2958; 	words.chinese[18] = _T("v. ����B�ϫ]��");
	words.word[19] = _T("trivial"); 	words.number[19] = 2962; 	words.chinese[19] = _T("adj. �Ӻ����B�L�����D��");
	words.word[20] = _T("elaborate"); 	words.number[20] = 2964; 	words.chinese[20] = _T("adj. �륩���B��߻s�@���Fv.�륩�s�@�B�Բӻ����F\r\nps. elaboration (n.) �����B�륩");
	words.word[21] = _T("discriminate"); words.number[21] = 2968; 	words.chinese[21] = _T("v. �[���B�Ϥ�(�t��)�B��O�F\r\nps. discrimination (n.) �t�O�B�������ݹJ�B�[��");
	words.word[22] = _T("vulnerable"); 	words.number[22] = 2972; 	words.chinese[22] = _T("adj. �����˪��B�ܮz��");
	words.word[23] = _T("habitat"); 	words.number[23] = 2975; 	words.chinese[23] = _T("n. (�ʪ�)�Ϯ��a�B(�Ӫ�)�ͪ��a");
	words.word[24] = _T("radical"); 	words.number[24] = 2977; 	words.chinese[24] = _T("adj. �������B�ڥ����B�E�i���F\r\nps. radically (adv.) �ڥ��a�B�E�i�a�B�����a");
	words.word[25] = _T("spontaneous"); words.number[25] = 2979; 	words.chinese[25] = _T("adj. �۵M���B�۵o�F\r\nps. spantaneously (adv.) �۵M�a�B���ѦۥD�a");
	words.word[26] = _T("rigid"); 		words.number[26] = 2982; 	words.chinese[26] = _T("adj. �Y�檺�B��w���B���ƪ��F\r\nps. �ۤϵ�: flexible (1654)�Frigidly (adv.) ���w�a�B�Y��a");
	words.word[27] = _T("voucher"); 	words.number[27] = 2985; 	words.chinese[27] = _T("n. �ӫ~��B��Ψ�B�̳�");
	words.word[28] = _T("bias"); 		words.number[28] = 2989; 	words.chinese[28] = _T("n. �����B�����Fv. �Ϧs����");
	words.word[29] = _T("fraud"); 		words.number[29] = 2992; 	words.chinese[29] = _T("n. �B�F�B�B�F(�欰)�B�F���B�F�l");
	words.word[30] = _T("fundamental"); words.number[30] = 2996; 	words.chinese[30] = _T("adj. �򥻪��F�ڥ����F�Q�����n���Fn. �򥻭�z�F\r\nps. fundamentally (adv.) ��¦�a�B���n�a");
	words.word[31] = _T("arouse"); 		words.number[31] = 3000; 	words.chinese[31] = _T("v. �E�_�B��_�B�Ͼĵo");
}

