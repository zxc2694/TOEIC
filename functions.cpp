#include "stdafx.h"
#include "MFCApplication.h"
#include "MFCApplicationDlg.h"
#include "afxdialogex.h"
#include "functions.h"

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
}
void getWords_Day2(Words &words)
{
}
void getWords_Day3(Words &words)
{
}
void getWords_Day4(Words &words)
{
}
void getWords_Day5(Words &words)
{
}
void getWords_Day6(Words &words)
{
}
void getWords_Day7(Words &words)
{
}
void getWords_Day8(Words &words)
{
}
void getWords_Day9(Words &words)
{
}
void getWords_Day10(Words &words)
{
}
void getWords_Day11(Words &words)
{
}
void getWords_Day12(Words &words)
{
}
void getWords_Day13(Words &words)
{
}
void getWords_Day14(Words &words)
{
}
void getWords_Day15(Words &words)
{
}
void getWords_Day16(Words &words)
{
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
	words.word[7] = _T("bilingual");	words.number[7] = 2823; 	words.chinese[7] = _T("v. ��١B�_���F\r\nps. assertive (adj.) �_�����B�Z�_��");
	words.word[8] = _T("assert"); 		words.number[8] = 2827; 	words.chinese[8] = _T("adj. ��h�O�ܪ��B�Ӻɪ��B�Χ����F\r\nps. exhausting �ϤH��h�O�ܪ�");
	words.word[9] = _T("exhausted"); 	words.number[9] = 2829; 	words.chinese[9] = _T("v. ��|�B�z�ѡB��c�Fn. �z�ѡB���");
	words.word[10] = _T("grasp"); 		words.number[10] = 2831; 	words.chinese[10] = _T("v. �����B�c�a�B(�Ӫ�)�Z�K");
	words.word[11] = _T("aptitude"); 	words.number[11] = 2837; 	words.chinese[11] = _T("n. �Ѹ�B�~��B�A�y�B�۵M�ɦV");
	words.word[12] = _T("escalate");	words.number[12] = 2840; 	words.chinese[12] = _T("v. (�{��)�[�@�B�c�ơB(�~��B������)�v���W��");
	words.word[13] = _T("laundry"); 	words.number[13] = 2843; 	words.chinese[13] = _T("n. �e�~�窫�B�~�穱");
	words.word[14] = _T("integrate"); 	words.number[14] = 2846; 	words.chinese[14] = _T("v. ��X�B�ϧ���F\r\nps. integration (n.) ��X�B�ĦX�Fintegrated (adj.) ��X��");
	words.word[15] = _T("censorship");	words.number[15] = 2850; 	words.chinese[15] = _T("n. �f�d(���)�F\r\nps. censor (n.) (�X�����B�q�v����)�f�d��");
	words.word[16] = _T("apprehensive");words.number[16] = 2852; 	words.chinese[16] = _T("adj. ��~���B�~�{���B�⮩��");
	words.word[17] = _T("heritage"); 	words.number[17] = 2855; 	words.chinese[17] = _T("n. (��ƾ��v��)�򲣡B�ǩ�");
	words.word[18] = _T("cusine");		words.number[18] = 2859; 	words.chinese[18] = _T("n. �i���B�i���k�B���a");
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

