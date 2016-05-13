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
	words.word[0] = _T("debate"); words.number[0] = 1603; words.chinese[0] = _T("v. 辯論、爭論、討論；n. 辯論、爭論、討論");	 words.ps[0] = _T("");
	words.word[1] = _T("remit"); words.number[1] = 1605; words.chinese[1] = _T("v. 匯款、免除、豁免(債務、義務等)");	 words.ps[1] = _T("\r\nps. remittance (n) 匯寄、匯款金額");
	words.word[2] = _T("souvenir"); words.number[2] = 1609; words.chinese[2] = _T("n. 紀念品");	 words.ps[2] = _T("");
	words.word[3] = _T("documentation"); words.number[3] = 1611; words.chinese[3] = _T("n. (正式的)文件");	 words.ps[3] = _T("\r\nps. documentary (adj) 文件的、紀錄的；n. 紀錄片");
	words.word[4] = _T("monopoly"); words.number[4] = 1614; words.chinese[4] = _T("n. 壟斷、獨佔、專賣(權)");	 words.ps[4] = _T("\r\nps. monopolize (v) 獨佔、擁有~專賣權、壟斷");
	words.word[5] = _T("exception"); words.number[5] = 1615; words.chinese[5] = _T("n. 例外、例外的事物");	 words.ps[5] = _T("\r\nps. exceptional (adj) 傑出的、特殊的、例外的");
	words.word[6] = _T("premium"); words.number[6] = 1620; words.chinese[6] = _T("n. 保險費、附加費用；adj. 高級的");	 words.ps[6] = _T("");
	words.word[7] = _T("inspire"); words.number[7] = 1625; words.chinese[7] = _T("v. 激勵、給予靈感");	 words.ps[7] = _T("\r\nps. inspiration (n) 靈感");
	words.word[8] = _T("abundant"); words.number[8] = 1629; words.chinese[8] = _T("adj. 豐富的、充足的");	 words.ps[8] = _T("\r\nps. abundance (n) 富饒、充足");
	words.word[9] = _T("collaborate"); words.number[9] = 1632; words.chinese[9] = _T("v. 合作、協力");	 words.ps[9] = _T("\r\nps. collaboration (n) 協力、合作；collaborative (adj) 合作的");
	words.word[10] = _T("layout"); words.number[10] = 1635; words.chinese[10] = _T("n. (都市、建築物的)配置圖、版面編排、安排、佈局");	 words.ps[10] = _T("");
	words.word[11] = _T("meantime"); words.number[11] = 1638; words.chinese[11] = _T("n. 期間；adv. 期間、同時");	 words.ps[11] = _T("");
	words.word[12] = _T("subsequent"); words.number[12] = 1641; words.chinese[12] = _T("adj. 隨後的、之後的");	 words.ps[12] = _T("\r\nps. subsequently (adv) 然後、後來");
	words.word[13] = _T("phase"); words.number[13] = 1644; words.chinese[13] = _T("n. 階段、時期；v. 分階段實施");	 words.ps[13] = _T("");
	words.word[14] = _T("eager"); words.number[14] = 1647; words.chinese[14] = _T("adj. 盼望的、渴望的");	 words.ps[14] = _T("\r\nps. eagerly (adv) 急切地");
	words.word[15] = _T("explore"); words.number[15] = 1650; words.chinese[15] = _T("v. 勘查、探險、探究、探索(問題)");	 words.ps[15] = _T("\r\nps. exploration (n) 探索、研究");
	words.word[16] = _T("withdraw"); words.number[16] = 1651; words.chinese[16] = _T("v. 提取、抽回、撤銷");	 words.ps[16] = _T("\r\nps. withdrawal (n) 提款、撤回");
	words.word[17] = _T("flexible"); words.number[17] = 1654; words.chinese[17] = _T("adj. 有彈性的、可變通的");	 words.ps[17] = _T("\r\nps. flexibility (n) 靈活性、彈性");
	words.word[18] = _T("fulfill"); words.number[18] = 1657; words.chinese[18] = _T("v. 符合、達成、實現");	 words.ps[18] = _T("\r\nps. fulfillment (n) 完成、實現、滿足；fulfilling (adj) 令人滿足、 \r\n    能實現抱負的；fulfilled (adj) 滿足的");
	words.word[19] = _T("reluctant"); words.number[19] = 1662; words.chinese[19] = _T("adj. 不情願的、勉強的");	 words.ps[19] = _T("\r\nps. reluctantly (adv) 勉強地、不情願地； \r\n    reluctance (n) 勉強、不情願");
	words.word[20] = _T("mandatory"); words.number[20] = 1665; words.chinese[20] = _T("adj. 強制的、義務的");	 words.ps[20] = _T("\r\nps. 相似詞：compulsory 義務的。mandate (n)(2675) 命令");
	words.word[21] = _T("crate"); words.number[21] = 1667; words.chinese[21] = _T("n. 條板箱、裝入條板箱");	 words.ps[21] = _T("");
	words.word[22] = _T("obstruct"); words.number[22] = 1670; words.chinese[22] = _T("v. 阻擋、妨礙、堵塞");	 words.ps[22] = _T("\r\nps. obstruction (n) 妨礙、阻礙、障礙物 = obstacle (2307)");
	words.word[23] = _T("profitable"); words.number[23] = 1674; words.chinese[23] = _T("adj. 有利潤的、有益的");	 words.ps[23] = _T("\r\nps. profitability (n) 收益性、收益率");
	words.word[24] = _T("preliminary"); words.number[24] = 1677; words.chinese[24] = _T("adj. 初步的、預備的；n. 事前準備、初步的");	 words.ps[24] = _T("");
	words.word[25] = _T("recession"); words.number[25] = 1681; words.chinese[25] = _T("n. (經濟) 衰退、不景氣");	 words.ps[25] = _T("");
	words.word[26] = _T("formula"); words.number[26] = 1686; words.chinese[26] = _T("n. 配方、公式、方程式、準則");	 words.ps[26] = _T("");
	words.word[27] = _T("deduct"); words.number[27] = 1688; words.chinese[27] = _T("v. 扣除、減去");	 words.ps[27] = _T("\r\nps. deduction (n) 扣除(額)；deductible (adj) 可扣除的、可減免的");
	words.word[28] = _T("preserve"); words.number[28] = 1690; words.chinese[28] = _T("v. 保存、保護");	 words.ps[28] = _T("\r\nps. 相似詞：conserve 保護。\r\n    preservation (n) 保護、保存 = conservation (2320)");
	words.word[29] = _T("realistic"); words.number[29] = 1691; words.chinese[29] = _T("adj. 能實現的、實際的");	 words.ps[29] = _T("\r\nps. 相反詞：unrealistic (adj) 不切實際的。\r\n    realistically (adv) 寫實地、逼真地");
	words.word[30] = _T("comparision"); words.number[30] = 1696; words.chinese[30] = _T("n. 比較、對照");	 words.ps[30] = _T("\r\nps. compare (v) 比較、與~相較；comparable (adj) 可比較的、比得上的");
	words.word[31] = _T("devote"); words.number[31] = 1697; words.chinese[31] = _T("v. 奉獻、致力於、專心於");	 words.ps[31] = _T("\r\nps. devoted (adj) 奉獻的、專心致力的；devotion (n) 奉獻、摯愛");

}
void getWords_Day18(Words &words)
{
	words.word[0] = _T("bear"); words.number[0] = 1702; words.chinese[0] = _T("v. 帶有、具有、忍受、承擔、生(小孩)");	 words.ps[0] = _T("\r\nps. bearer (n) 持有者、傳遞者；bearable (adj) 可忍受的；\r\n    unbearably (adv) 無法忍受地");
	words.word[1] = _T("consent"); words.number[1] = 1704; words.chinese[1] = _T("n. 同意、贊成、答應；v. 同意、贊成、答應");	 words.ps[1] = _T("");
	words.word[2] = _T("outage"); words.number[2] = 1707; words.chinese[2] = _T("n. (水、電等)中斷供應");	 words.ps[2] = _T("");
	words.word[3] = _T("deserve"); words.number[3] = 1711; words.chinese[3] = _T("v. 應得(賞罰)、該得");	 words.ps[3] = _T("");
	words.word[4] = _T("foreman"); words.number[4] = 1714; words.chinese[4] = _T("n. (工地)主任、領班");	 words.ps[4] = _T("");
	words.word[5] = _T("largely"); words.number[5] = 1717; words.chinese[5] = _T("adv. 主要地、大大地、大部分");	 words.ps[5] = _T("\r\nps. 相似詞：mainly、mostly");
	words.word[6] = _T("managerial"); words.number[6] = 1720; words.chinese[6] = _T("adj. 管理的、經理人的");	 words.ps[6] = _T("\r\nps. management (n) 管理、管理部門；manageable (adj) 可管理的、可操控的");
	words.word[7] = _T("omission"); words.number[7] = 1725; words.chinese[7] = _T("n. 遺漏、省略、刪除");	 words.ps[7] = _T("\r\nps. omit (v) 省略、遺漏、刪去");
	words.word[8] = _T("province"); words.number[8] = 1727; words.chinese[8] = _T("n. (行政單位的)省、州");	 words.ps[8] = _T("\r\nps. provincial (adj) 省的、地方的、守舊的；(n) 鄉下人、路五的人");
	words.word[9] = _T("emerge"); words.number[9] = 1729; words.chinese[9] = _T("v. 出現、浮現、顯露");	 words.ps[9] = _T("\r\nps. emerging (adj) 新興的；emergence (n) 出現");
	words.word[10] = _T("flavor"); words.number[10] = 1735; words.chinese[10] = _T("n. 味道、風味；v. 給~調味");	 words.ps[10] = _T("\r\nps. flavoring (n) 香料、調味料；flavored (adj) 有~風味的");
	words.word[11] = _T("hazard"); words.number[11] = 1737; words.chinese[11] = _T("n. 危險、有害物");	 words.ps[11] = _T("\r\nps. hazardous (adj) 有危險的、biohazard (n) 生化危機");
	words.word[12] = _T("advocate"); words.number[12] = 1740; words.chinese[12] = _T("n. 提倡者、擁護者、辯護者、律師");	 words.ps[12] = _T("");
	words.word[13] = _T("classified"); words.number[13] = 1742; words.chinese[13] = _T("adj. 分類的、機密的；n. 分類廣告");	 words.ps[13] = _T("\r\nps. classify (v) 將~分類；classification (n) 分類、分級");
	words.word[14] = _T("embassy"); words.number[14] = 1745; words.chinese[14] = _T("n. 大使館、大使館全體人員");	 words.ps[14] = _T("\r\nps. ambassador (n) 大使");
	words.word[15] = _T("violation"); words.number[15] = 1750; words.chinese[15] = _T("n. 牴觸、違反、侵犯");	 words.ps[15] = _T("\r\nps. violate (v) 違反、違背、侵犯");
	words.word[16] = _T("proofread"); words.number[16] = 1751; words.chinese[16] = _T("v. 校對");	 words.ps[16] = _T("\r\nps. proofreading (n) 校對工作");
	words.word[17] = _T("subcontractor"); words.number[17] = 1753; words.chinese[17] = _T("n. 分包商、分包者");	 words.ps[17] = _T("\r\nps. subcontract (v) 轉包、分包；(n)轉/分包契約");
	words.word[18] = _T("adapt"); words.number[18] = 1758; words.chinese[18] = _T("v. 修改、使適合");	 words.ps[18] = _T("\r\nps. adaptation (n) 適應、調整；adaptable (adj) 可適應的、適應力強的");
	words.word[19] = _T("venue"); words.number[19] = 1759; words.chinese[19] = _T("n. (會議、表演的) 地點、場地");	 words.ps[19] = _T("");
	words.word[20] = _T("protest"); words.number[20] = 1764; words.chinese[20] = _T("v. 抗議、提出異議；n. 抗議、反對");	 words.ps[20] = _T("\r\nps. protester (n) 反對者、抗議者");
	words.word[21] = _T("argument"); words.number[21] = 1766; words.chinese[21] = _T("n. 論點、爭論、辯論、理由");	 words.ps[21] = _T("\r\nps. argue (v) 爭辯、爭吵；arguable (adj) 可辯論的、可議的");
	words.word[22] = _T("cordial"); words.number[22] = 1772; words.chinese[22] = _T("adj. 友好的、真摯的");	 words.ps[22] = _T("\r\nps. cordially (adv) 真摯地、友好地");
	words.word[23] = _T("liability"); words.number[23] = 1775; words.chinese[23] = _T("n. (法律上的)責任、負債、債務");	 words.ps[23] = _T("\r\nps. liable (adj) 負有法律責任的、可能做~的");
	words.word[24] = _T("poll"); words.number[24] = 1777; words.chinese[24] = _T("n. 民意調查、投票數；v. 進行民意調查、獲取(票數)");	 words.ps[24] = _T("");
	words.word[25] = _T("privilege"); words.number[25] = 1779; words.chinese[25] = _T("n. 特權、優惠");	 words.ps[25] = _T("");
	words.word[26] = _T("subscribe"); words.number[26] = 1781; words.chinese[26] = _T("v. 訂閱");	 words.ps[26] = _T("\r\nps. subscription (n) 訂閱；subscriber (n) 訂閱者");
	words.word[27] = _T("assess"); words.number[27] = 1786; words.chinese[27] = _T("v. 估價、評定");	 words.ps[27] = _T("\r\nps. assessment (n)估價、評定");
	words.word[28] = _T("disposal"); words.number[28] = 1789; words.chinese[28] = _T("n. 處理、處置");	 words.ps[28] = _T("\r\nps. dispose (v) 處理、處置");
	words.word[29] = _T("boost"); words.number[29] = 1794; words.chinese[29] = _T("v. 增加、提升、推動；n. 提高、幫助、增加");	 words.ps[29] = _T("");
	words.word[30] = _T("conventional"); words.number[30] = 1797; words.chinese[30] = _T("adj. 傳統的、依慣例的");	 words.ps[30] = _T("\r\nps. convention (n) 會議、習俗、慣例、常規");
	words.word[31] = _T("intermission"); words.number[31] = 1800; words.chinese[31] = _T("n. 中場休息、暫歇");	 words.ps[31] = _T("");

}
void getWords_Day19(Words &words)
{
	words.word[0] = _T("remainder"); words.number[0] = 1802; words.chinese[0] = _T("n. 餘數、剩餘物、其餘的人");	 words.ps[0] = _T("\r\nps. remain (v) 剩餘、停留、扔然是；remaining (adj) 剩餘的");
	words.word[1] = _T("solicit"); words.number[1] = 1804; words.chinese[1] = _T("v. 懇求、請求、籌集、索求");	 words.ps[1] = _T("");
	words.word[2] = _T("continuous"); words.number[2] = 1809; words.chinese[2] = _T("adj. 持續的、不斷的");	 words.ps[2] = _T("\r\nps. continuously (adv) 持續地；continue (v) 繼續");
	words.word[3] = _T("compartment"); words.number[3] = 1811; words.chinese[3] = _T("n. 隔間、隔層");	 words.ps[3] = _T("");
	words.word[4] = _T("rigorous"); words.number[4] = 1816; words.chinese[4] = _T("adj. 嚴格的、精密的");	 words.ps[4] = _T("\r\nps. rigor (n) 嚴格、縝密、艱苦；rigorously (adj) 嚴格地、嚴酷地");
	words.word[5] = _T("cite"); words.number[5] = 1818; words.chinese[5] = _T("v. 提及、引用、引~為證、舉出");	 words.ps[5] = _T("\r\nps. citation (n) 引用、引證");
	words.word[6] = _T("multiple"); words.number[6] = 1821; words.chinese[6] = _T("adj. 多種的、多數的、複合的");	 words.ps[6] = _T("\r\nps. multiply (v) 成倍增加、相乘；mulitplication (n) 增加");
	words.word[7] = _T("bulletin"); words.number[7] = 1825; words.chinese[7] = _T("n. 公布、公告");	 words.ps[7] = _T("");
	words.word[8] = _T("discipline"); words.number[8] = 1826; words.chinese[8] = _T("n. 學科、紀律、訓練");	 words.ps[8] = _T("\r\nps. disciplinary (adj) 訓練的、紀律的");
	words.word[9] = _T("characteristic"); words.number[9] = 1829; words.chinese[9] = _T("n. 特性、特質、性格；adj. 獨特的");	 words.ps[9] = _T("");
	words.word[10] = _T("precise"); words.number[10] = 1834; words.chinese[10] = _T("adj. 精確的、明確的");	 words.ps[10] = _T("\r\nps. precisely (adv) 精確地、恰恰好；precision (n) 精確、精密");
	words.word[11] = _T("supplement"); words.number[11] = 1836; words.chinese[11] = _T("v. 增補、補充；n. 補充、附錄");	 words.ps[11] = _T("\r\nps. supplementary (adj) 補充的、外加的");
	words.word[12] = _T("ownership"); words.number[12] = 1839; words.chinese[12] = _T("n. 所有權、物主身分");	 words.ps[12] = _T("\r\nps. own (v) 所有的、擁有；owner (n) 所有人");
	words.word[13] = _T("conflict"); words.number[13] = 1843; words.chinese[13] = _T("n. 衝突、矛盾；v. 衝突、牴觸");	 words.ps[13] = _T("");
	words.word[14] = _T("relieve"); words.number[14] = 1844; words.chinese[14] = _T("v. 解除、減輕(痛苦)、緩和");	 words.ps[14] = _T("\r\nps. 相似詞：alleviate 緩和 (2098)。relieved (adj) 放心的、寬慰的；\r\n    relief (n) 解脫、減輕");
	words.word[15] = _T("vacuum"); words.number[15] = 1849; words.chinese[15] = _T("v. 吸塵、清掃；n. 真空、真空吸塵器");	 words.ps[15] = _T("");
	words.word[16] = _T("contrast"); words.number[16] = 1852; words.chinese[16] = _T("v. 比較、對照；v. 比較、對照");	 words.ps[16] = _T("");
	words.word[17] = _T("portolio"); words.number[17] = 1854; words.chinese[17] = _T("n. 投資組合、文件夾、公事包、作品集");	 words.ps[17] = _T("");
	words.word[18] = _T("driveway"); words.number[18] = 1858; words.chinese[18] = _T("n. 汽車道、私人車道");	 words.ps[18] = _T("");
	words.word[19] = _T("extent"); words.number[19] = 1861; words.chinese[19] = _T("n. 範圍、程度、限度");	 words.ps[19] = _T("");
	words.word[20] = _T("inclined"); words.number[20] = 1865; words.chinese[20] = _T("adj. 有~傾向的、想要做~的；adj. 不願的、無意於");	 words.ps[20] = _T("\r\nps. 相反詞：disinclined (adj) 無意於、不願的；\r\n    inclination  (n) (性格上)傾向、愛好");
	words.word[21] = _T("typical"); words.number[21] = 1868; words.chinese[21] = _T("adj. 典型的、有代表性的");	 words.ps[21] = _T("\r\nps. typically (adv) 典型地、代表性地");
	words.word[22] = _T("appearance"); words.number[22] = 1872; words.chinese[22] = _T("n. 外觀、外表、出現");	 words.ps[22] = _T("\r\nps. appear (v) 登場、出現");
	words.word[23] = _T("grateful"); words.number[23] = 1875; words.chinese[23] = _T("adj. 感恩的、感謝的");	 words.ps[23] = _T("\r\nps. gratitude (n) 感謝之情、謝意 (1509)");
	words.word[24] = _T("accustomed"); words.number[24] = 1878; words.chinese[24] = _T("adj. 習慣的、慣常的、適應的");	 words.ps[24] = _T("\r\nps. accustom (v) 使習慣");
	words.word[25] = _T("convince"); words.number[25] = 1880; words.chinese[25] = _T("v. 說服、使確信、使信服");	 words.ps[25] = _T("\r\nps. convinced (adj) 確信的；convincing (adj) 有說服力的");
	words.word[26] = _T("observance"); words.number[26] = 1883; words.chinese[26] = _T("n. 紀念、遵守、儀式");	 words.ps[26] = _T("\r\nps. observe (v) 遵守、觀察、慶祝；observation (n) 觀察");
	words.word[27] = _T("pension"); words.number[27] = 1885; words.chinese[27] = _T("n. 退休金、養老金");	 words.ps[27] = _T("");
	words.word[28] = _T("vendor"); words.number[28] = 1889; words.chinese[28] = _T("n. 賣主、攤販、銷售業者");	 words.ps[28] = _T("\r\nps. vend (v) 販賣");
	words.word[29] = _T("compromise"); words.number[29] = 1891; words.chinese[29] = _T("v. 妥協、讓步、折衷");	 words.ps[29] = _T("");
	words.word[30] = _T("civic"); words.number[30] = 1893; words.chinese[30] = _T("adj. 市民的、城市的");	 words.ps[30] = _T("");
	words.word[31] = _T("recall"); words.number[31] = 1900; words.chinese[31] = _T("v. 招回、回收、使想起、罷免；n. 回收、勾起、記性、罷免");	 words.ps[31] = _T("");

}
void getWords_Day20(Words &words)
{
	words.word[0] = _T("enthusiastic"); words.number[0] = 1901; words.chinese[0] = _T("adj. 熱情的、熱烈的");	 words.ps[0] = _T("\r\nps. enthusiastically (adv) 熱心地、滿懷熱情地；enthusiasm (n) 熱情");
	words.word[1] = _T("literacy"); words.number[1] = 1905; words.chinese[1] = _T("n. 讀寫能力");	 words.ps[1] = _T("\r\nps. 相反詞：illiteracy (n) 文盲；literacy (adj) 有讀寫能力的");
	words.word[2] = _T("discard"); words.number[2] = 1908; words.chinese[2] = _T("v. 丟棄、拋棄");	 words.ps[2] = _T("");
	words.word[3] = _T("dominate"); words.number[3] = 1912; words.chinese[3] = _T("v. 控制、支配、佔優勢");	 words.ps[3] = _T("\r\nps. dominant (adj) 佔優勢的、支配的；domination (n) 支配、控制");
	words.word[4] = _T("prosecute"); words.number[4] = 1915; words.chinese[4] = _T("v. 起訴、告發、繼續從事");	 words.ps[4] = _T("\r\nps. prosecution (n) 起訴、檢舉；prosecutor (n) 檢察官");
	words.word[5] = _T("declaration"); words.number[5] = 1917; words.chinese[5] = _T("n. 申報、聲明、宣告");	 words.ps[5] = _T("\r\nps. declare (v) 宣告、宣布；聲明、申報(納稅品等)");
	words.word[6] = _T("quota"); words.number[6] = 1921; words.chinese[6] = _T("n. 配額、限額、定額");	 words.ps[6] = _T("");
	words.word[7] = _T("insert"); words.number[7] = 1925; words.chinese[7] = _T("v. 插入、放入；n. 插頁、夾頁");	 words.ps[7] = _T("\r\nps. insertion (n) 插入、置入物");
	words.word[8] = _T("numerical"); words.number[8] = 1927; words.chinese[8] = _T("adj. 數字的、以數字表示的");	 words.ps[8] = _T("\r\nps. numerous (adj)(1462) 很多的；numeral (n) 數字");
	words.word[9] = _T("overview"); words.number[9] = 1928; words.chinese[9] = _T("n. (大略的)綜述、概要");	 words.ps[9] = _T("");
	words.word[10] = _T("possess"); words.number[10] = 1931; words.chinese[10] = _T("v. 擁有、具有、控制、支配");	 words.ps[10] = _T("\r\nps. possession (n) 所有物");
	words.word[11] = _T("preceding"); words.number[11] = 1937; words.chinese[11] = _T("adj. 在前的、在先的");	 words.ps[11] = _T("\r\nps. 相似詞：previous；precede (v) 在~之前；precedent (n) 慣例、先例；\r\n    unprecedented (adj) 無前例的");
	words.word[12] = _T("forfeit"); words.number[12] = 1941; words.chinese[12] = _T("v. 失去、喪失(權力等)；n. 罰金、被沒收");	 words.ps[12] = _T("\r\nps. forfeiture (n) (財產等)被沒收、(權力等)喪失");
	words.word[13] = _T("outcome"); words.number[13] = 1944; words.chinese[13] = _T("n. 結論、結果");	 words.ps[13] = _T("");
	words.word[14] = _T("workout"); words.number[14] = 1946; words.chinese[14] = _T("n. (運動上的)練習、訓練");	 words.ps[14] = _T("");
	words.word[15] = _T("incur"); words.number[15] = 1949; words.chinese[15] = _T("v. 帶來、招致");	 words.ps[15] = _T("");
	words.word[16] = _T("morale"); words.number[16] = 1954; words.chinese[16] = _T("n. 士氣、民心");	 words.ps[16] = _T("");
	words.word[17] = _T("respectable"); words.number[17] = 1956; words.chinese[17] = _T("adj. 相當好的、值得尊敬的");	 words.ps[17] = _T("\r\nps. respected  (n)(1031) 尊敬、敬意、方面；(v) 尊敬、尊重");
	words.word[18] = _T("concur"); words.number[18] = 1960; words.chinese[18] = _T("v. 同意、贊成、同時發生");	 words.ps[18] = _T("\r\nps. concurrence (n) 同意、同時發生；concurrent (adj) 同時發生的、協力的；\r\n    concurrently (adv) 同時發生地");
	words.word[19] = _T("mature"); words.number[19] = 1963; words.chinese[19] = _T("adj. 成熟的、懂事的、到期的；v. 使成熟、使到期");	 words.ps[19] = _T("\r\nps. 相反詞：immature (adj) 未成熟的");
	words.word[20] = _T("enormous"); words.number[20] = 1965; words.chinese[20] = _T("adj. 龐大的、巨大的");	 words.ps[20] = _T("\r\nps. enormously (adv) 龐大地");
	words.word[21] = _T("complicated"); words.number[21] = 1967; words.chinese[21] = _T("adj. 複雜的、難懂的");	 words.ps[21] = _T("\r\nps. 相似詞：complex；complicate (v) 使複雜化；\r\n    complication (n) 複雜、糾葛、困難");
	words.word[22] = _T("widespread"); words.number[22] = 1973; words.chinese[22] = _T("adj. 擴散的、分布廣的、普遍的");	 words.ps[22] = _T("");
	words.word[23] = _T("momentum"); words.number[23] = 1975; words.chinese[23] = _T("n. 動力、動能、推進力");	 words.ps[23] = _T("");
	words.word[24] = _T("surpass"); words.number[24] = 1977; words.chinese[24] = _T("v. 超過、勝過、優於");	 words.ps[24] = _T("");
	words.word[25] = _T("adhere"); words.number[25] = 1980; words.chinese[25] = _T("v. 附著、黏附");	 words.ps[25] = _T("\r\nps. adherence (n) (信念的)堅持、遵守；adherent (n) 擁護者；(adj) 黏著的\r\n    ahesive (n) 膠著劑；(adj) 有黏性的");
	words.word[26] = _T("bound"); words.number[26] = 1984; words.chinese[26] = _T("adj. 前往~的、有義務的、必然的");	 words.ps[26] = _T("");
	words.word[27] = _T("refrain"); words.number[27] = 1988; words.chinese[27] = _T("v. 避免、克制、忍住、節制");	 words.ps[27] = _T("");
	words.word[28] = _T("perspective"); words.number[28] = 1990; words.chinese[28] = _T("n. 觀點、見解、洞察力、遠景");	 words.ps[28] = _T("");
	words.word[29] = _T("disrupt"); words.number[29] = 1993; words.chinese[29] = _T("v. 擾亂、使混亂、使中斷");	 words.ps[29] = _T("\r\nps. disruption (n) 中斷、擾亂；disruptive (adj) 擾亂的");
	words.word[30] = _T("apparel"); words.number[30] = 1997; words.chinese[30] = _T("n. 服裝、衣著");	 words.ps[30] = _T("");
	words.word[31] = _T("principal"); words.number[31] = 2000; words.chinese[31] = _T("n. 校長、主要演員；adj. 主要的、資本的");	 words.ps[31] = _T("\r\nps. 相似詞：main 主要的；principle (n) 原則、法規");

}
void getWords_Day21(Words &words)
{
	words.word[0] = _T("speculation"); words.number[0] = 2001; words.chinese[0] = _T("n. 臆測、猜測、投機");	 words.ps[0] = _T("\r\nps. speculate (v) 思索、推測、投機；speculator (n) 投機者");
	words.word[1] = _T("feasible"); words.number[1] = 2003; words.chinese[1] = _T("adj. (意見、計畫等)可實行的、可能的");	 words.ps[1] = _T("\r\nps. feasibility (n) 可行性");
	words.word[2] = _T("ventilation"); words.number[2] = 2007; words.chinese[2] = _T("n. 通風、空氣流通");	 words.ps[2] = _T("\r\nps. ventilate (v) 使空氣流通、使通風");
	words.word[3] = _T("fragile"); words.number[3] = 2010; words.chinese[3] = _T("adj. 易碎的、脆弱的");	 words.ps[3] = _T("");
	words.word[4] = _T("consist"); words.number[4] = 2013; words.chinese[4] = _T("v. 由~構成、存在於");	 words.ps[4] = _T("");
	words.word[5] = _T("deteriorate"); words.number[5] = 2016; words.chinese[5] = _T("v. 使惡化、變壞");	 words.ps[5] = _T("\r\nps. deterioration (n) 惡化");
	words.word[6] = _T("perceive"); words.number[6] = 2018; words.chinese[6] = _T("v. 察覺、理解為");	 words.ps[6] = _T("\r\nps. perception (n) 認知、察覺");
	words.word[7] = _T("initiate"); words.number[7] = 2019; words.chinese[7] = _T("v. 開始、發起");	 words.ps[7] = _T("\r\nps. initial  (adj) 最初的 (576)；initivative (n) 主動行動、主動權、率先");
	words.word[8] = _T("fluent"); words.number[8] = 2027; words.chinese[8] = _T("adj. 流暢的、流利的");	 words.ps[8] = _T("\r\nps. fluently (adv) 流暢地；fluency (n) 流暢");
	words.word[9] = _T("housing"); words.number[9] = 2030; words.chinese[9] = _T("n. 住宅、住宅供給");	 words.ps[9] = _T("\r\nps. house (v)提供(居住、場所)；(n)房子");
	words.word[10] = _T("attribute"); words.number[10] = 2032; words.chinese[10] = _T("v. 把~歸因於；n. 屬性、特質");	 words.ps[10] = _T("\r\nps. attribution (n) 歸屬、歸因");
	words.word[11] = _T("chronicle"); words.number[11] = 2035; words.chinese[11] = _T("n. 編年史、記事；v. 紀錄");	 words.ps[11] = _T("\r\nps. chronological (adj) 編年的、依時間先後記載的");
	words.word[12] = _T("municipal"); words.number[12] = 2039; words.chinese[12] = _T("adj. 市政的、自治的");	 words.ps[12] = _T("");
	words.word[13] = _T("acquaintance"); words.number[13] = 2041; words.chinese[13] = _T("n. 認識的人、相識");	 words.ps[13] = _T("\r\nps. acquaint (v) 使熟悉、使了解");
	words.word[14] = _T("periodical"); words.number[14] = 2045; words.chinese[14] = _T("n. 期刊、雜誌");	 words.ps[14] = _T("\r\nps. period (n) 期間；periodic (adj) 定期的、週期的；\r\n    periodically (adv) 定期地、週期性地");
	words.word[15] = _T("partition"); words.number[15] = 2049; words.chinese[15] = _T("n. 隔板、間隔、分割；v. 分割、隔開");	 words.ps[15] = _T("");
	words.word[16] = _T("principle"); words.number[16] = 2054; words.chinese[16] = _T("n. 原則、原理、信念、定律");	 words.ps[16] = _T("");
	words.word[17] = _T("reminder"); words.number[17] = 2057; words.chinese[17] = _T("n. 提醒函、提醒事物");	 words.ps[17] = _T("\r\nps. remind (v) 使記起、提醒；remainder (n) 其餘 = others");
	words.word[18] = _T("column"); words.number[18] = 2061; words.chinese[18] = _T("n. 圓柱、攔、專欄");	 words.ps[18] = _T("");
	words.word[19] = _T("cater"); words.number[19] = 2063; words.chinese[19] = _T("v. 準備宴席、提共飲食");	 words.ps[19] = _T("\r\nps. catering (n) 承辦酒席；caterer (n) 外燴業者");
	words.word[20] = _T("consecutive"); words.number[20] = 2065; words.chinese[20] = _T("adj. 連續的");	 words.ps[20] = _T("\r\nps. consecutively (adv) 連續地");
	words.word[21] = _T("contrary"); words.number[21] = 2068; words.chinese[21] = _T("adj. 相反的、對立的");	 words.ps[21] = _T("");
	words.word[22] = _T("furnished"); words.number[22] = 2071; words.chinese[22] = _T("adj. 配備傢俱的、具備的");	 words.ps[22] = _T("\r\nps. furnish (v) 配置傢俱、供給；furnishings (n) 居家陳設品");
	words.word[23] = _T("browse"); words.number[23] = 2075; words.chinese[23] = _T("v. 瀏覽、檢索(資訊)；n. 瀏覽");	 words.ps[23] = _T("");
	words.word[24] = _T("moderate"); words.number[24] = 2077; words.chinese[24] = _T("adj. 適度的、溫和的；v. 使適中、主持");	 words.ps[24] = _T("\r\nps. moderately (adv) 適度地、過得去地；moderation (n) 緩和、適度、節制");
	words.word[25] = _T("ample"); words.number[25] = 2078; words.chinese[25] = _T("adj. 充分的、豐富的");	 words.ps[25] = _T("\r\nps. 相似詞：sufficient (729)；amply (adv) 充分地");
	words.word[26] = _T("primary"); words.number[26] = 2085; words.chinese[26] = _T("adj. 主要的、初級的");	 words.ps[26] = _T("\r\nps. primarily (adv) 主要地");
	words.word[27] = _T("optimistic"); words.number[27] = 2056; words.chinese[27] = _T("adj. 樂觀的");	 words.ps[27] = _T("\r\nps. 樂: optimistic = postive <--> 悲: pessimistic = negative；\r\n    optimize (v) 使完善、使有效的；optimism (n) 樂觀(主義)");
	words.word[28] = _T("attitude"); words.number[28] = 2090; words.chinese[28] = _T("n. 態度、意見、姿勢");	 words.ps[28] = _T("");
	words.word[29] = _T("soar"); words.number[29] = 2092; words.chinese[29] = _T("v. 飛漲、翱翔");	 words.ps[29] = _T("");
	words.word[30] = _T("conversion"); words.number[30] = 2095; words.chinese[30] = _T("n. 改變、轉換");	 words.ps[30] = _T("\r\nps. convert (v) 轉換、轉變；(n) 改變信仰者");
	words.word[31] = _T("alleviate"); words.number[31] = 2098; words.chinese[31] = _T("v. 減輕、緩和(問題、病痛等)");	 words.ps[31] = _T("\r\nps. 相似詞：relieve (1844)；alleviation (n) 緩和、鎮痛物");

}
void getWords_Day22(Words &words)
{
	words.word[0] = _T("practical"); words.number[0] = 2101; words.chinese[0] = _T("adj. 切實可行的、實際的、實用的");	 words.ps[0] = _T("\r\nps. 相反詞：impractical 不切實際的、不實用的");
	words.word[1] = _T("yield"); words.number[1] = 2105; words.chinese[1] = _T("n. 利潤、產量");	 words.ps[1] = _T("");
	words.word[2] = _T("sensitivity"); words.number[2] = 2108; words.chinese[2] = _T("n. 敏感性、敏銳度、感受性");	 words.ps[2] = _T("\r\nps. sensitive (adj) 敏感的；sensible (adj) 意識到的、合情理的");
	words.word[3] = _T("intersection"); words.number[3] = 2110; words.chinese[3] = _T("n. 交叉路口");	 words.ps[3] = _T("");
	words.word[4] = _T("bare"); words.number[4] = 2115; words.chinese[4] = _T("adj. 空的(山等)、光裸的；v. 使赤裸、露出");	 words.ps[4] = _T("\r\nps. barely (adv) 僅僅、剛剛、幾乎不");
	words.word[5] = _T("tension"); words.number[5] = 2117; words.chinese[5] = _T("n. 緊張、(經濟關係)緊張狀況、對立");	 words.ps[5] = _T("\r\nps. tense (adj) 緊張的、緊繃的；(v) 使緊張");
	words.word[6] = _T("downturn"); words.number[6] = 2120; words.chinese[6] = _T("n. (經濟)衰退、不景氣、下降");	 words.ps[6] = _T("");
	words.word[7] = _T("insight"); words.number[7] = 2124; words.chinese[7] = _T("n. 見地、見識、洞察力、眼光");	 words.ps[7] = _T("\r\nps. insightful (adj) 具洞察力的、有深刻見解的");
	words.word[8] = _T("evident"); words.number[8] = 2127; words.chinese[8] = _T("adj. 明顯的、清楚的");	 words.ps[8] = _T("\r\nps. evidently (adv) 明顯地、顯然地；evidence (n) 證據");
	words.word[9] = _T("pave"); words.number[9] = 2130; words.chinese[9] = _T("v. 鋪(路)");	 words.ps[9] = _T("\r\nps. pavement (n) 鋪過的路、人行道");
	words.word[10] = _T("legislation"); words.number[10] = 2134; words.chinese[10] = _T("n. 立法、法令、法規");	 words.ps[10] = _T("\r\nps. legislate (v) 制定法律、立法；legislator (n) 立法者；\r\n    legislative (adj) 立法的");
	words.word[11] = _T("amendment"); words.number[11] = 2137; words.chinese[11] = _T("n. 修訂、修正、修正事項");	 words.ps[11] = _T("\r\nps. amend (v) 修訂、修正");
	words.word[12] = _T("parcel"); words.number[12] = 2142; words.chinese[12] = _T("n. 包裹、小包；v. 打包、裹好");	 words.ps[12] = _T("\r\nps. 相似詞：package (n)");
	words.word[13] = _T("conscious"); words.number[13] = 2145; words.chinese[13] = _T("adj. 意識到的、察覺到的");	 words.ps[13] = _T("\r\nps. consciousness (n) 意識、知覺；相反詞：unconscious (adj) 無意識的");
	words.word[14] = _T("foreseeable"); words.number[14] = 2147; words.chinese[14] = _T("adj. 可預見的、可預測的");	 words.ps[14] = _T("\r\nps. foresee (v) 預見、預知；unforeseen (adj) 預料之外的");
	words.word[15] = _T("shred"); words.number[15] = 2149; words.chinese[15] = _T("v. 切碎、撕");	 words.ps[15] = _T("");
	words.word[16] = _T("convey"); words.number[16] = 2153; words.chinese[16] = _T("v. 傳送、運送");	 words.ps[16] = _T("");
	words.word[17] = _T("restrain"); words.number[17] = 2156; words.chinese[17] = _T("v. 控制、抑制、阻止");	 words.ps[17] = _T("\r\nps. restraint (n) 限制、管制、制止");
	words.word[18] = _T("successive"); words.number[18] = 2159; words.chinese[18] = _T("adj. 連續的、相繼的");	 words.ps[18] = _T("\r\nps. 相似詞: consecutive (2065)；successful (adj) 成功的");
	words.word[19] = _T("parallel"); words.number[19] = 2162; words.chinese[19] = _T("adj. adv. 平行的(地)；v. 與~相似；n. 類似的人事物");	 words.ps[19] = _T("");
	words.word[20] = _T("unanimously"); words.number[20] = 2164; words.chinese[20] = _T("adv. 全體一致地、無異議地");	 words.ps[20] = _T("\r\nps. unanimous (adj) 無異議的、全體一致的");
	words.word[21] = _T("resemblance"); words.number[21] = 2167; words.chinese[21] = _T("n. 相似點、相似");	 words.ps[21] = _T("");
	words.word[22] = _T("subordinate"); words.number[22] = 2170; words.chinese[22] = _T("n. 部屬；adj. 次要的、隸屬的");	 words.ps[22] = _T("");
	words.word[23] = _T("cultivate"); words.number[23] = 2175; words.chinese[23] = _T("v. 培育、耕作");	 words.ps[23] = _T("\r\nps. cultivation (n) 培育、耕作；cultivated (adj) 有教養的、耕作的");
	words.word[24] = _T("utmost"); words.number[24] = 2178; words.chinese[24] = _T("n. 最大可能、極限；adj. 最大限度");	 words.ps[24] = _T("");
	words.word[25] = _T("dividend"); words.number[25] = 2181; words.chinese[25] = _T("n. 股息、股利");	 words.ps[25] = _T("\r\nps. divide (v) 分配、劃分；division (n) 分割(公司的)、部門");
	words.word[26] = _T("allocate"); words.number[26] = 2182; words.chinese[26] = _T("v. 分配、分派");	 words.ps[26] = _T("\r\nps. allocation (n) 分配物、分配");
	words.word[27] = _T("exclusive"); words.number[27] = 2186; words.chinese[27] = _T("adj. 獨家的、獨佔的、專用的、排外的");	 words.ps[27] = _T("\r\nps. 相反詞：inclusive (adj) 包含的；exclusively (adv) 獨佔地、專有地；\r\n    exclude (v) 將~排除在外；exclusion (n) 排除在外");
	words.word[28] = _T("contamination"); words.number[28] = 2191; words.chinese[28] = _T("n. 汙染、玷汙");	 words.ps[28] = _T("\r\nps. contaminate (v) 汙染、玷汙；contaminant (n) 汙染物質");
	words.word[29] = _T("punctuality"); words.number[29] = 2194; words.chinese[29] = _T("n. 守時、準時");	 words.ps[29] = _T("\r\nps. punctual (adj) 守時的");
	words.word[30] = _T("intention"); words.number[30] = 2199; words.chinese[30] = _T("n. 意圖、目的");	 words.ps[30] = _T("\r\nps. intend (v) 意圖、想要；intentional (adj) 有意的");
	words.word[31] = _T("culminate"); words.number[31] = 2200; words.chinese[31] = _T("v. 結束、告終");	 words.ps[31] = _T("\r\nps. culmination (n) 頂點、高潮");
}
void getWords_Day23(Words &words)
{
	words.word[0] = _T("constitute"); words.number[0] = 2201; words.chinese[0] = _T("v. 構成、設立");	 words.ps[0] = _T("\r\nps. constitution (n) 憲法、章程、組成；constitutional (adj) 憲法的、體格的");
	words.word[1] = _T("breakdown"); words.number[1] = 2204; words.chinese[1] = _T("n. 故障、毀損、破裂");	 words.ps[1] = _T("");
	words.word[2] = _T("originate"); words.number[2] = 2208; words.chinese[2] = _T("v. 發源地、來自、創始");	 words.ps[2] = _T("\r\nps. original (adj) 原創的、本來的；originally (adv) 原來、起初");
	words.word[3] = _T("receivable"); words.number[3] = 2211; words.chinese[3] = _T("adj. 應收款的、可接受的");	 words.ps[3] = _T("");
	words.word[4] = _T("consulate"); words.number[4] = 2214; words.chinese[4] = _T("n. 領事館");	 words.ps[4] = _T("");
	words.word[5] = _T("circulate"); words.number[5] = 2217; words.chinese[5] = _T("v. 傳閱(物品、資訊等)、流通、循環、傳播");	 words.ps[5] = _T("\r\nps. circulation (n) 循環、流通");
	words.word[6] = _T("sequel"); words.number[6] = 2220; words.chinese[6] = _T("n. (電影、書的) 續集、隨之而來的事");	 words.ps[6] = _T("");
	words.word[7] = _T("adverse"); words.number[7] = 2222; words.chinese[7] = _T("adj. 負面的、有害的、不利的、敵對的");	 words.ps[7] = _T("\r\nps. adversely (adv) 負面地、不利地");
	words.word[8] = _T("frustrated"); words.number[8] = 2226; words.chinese[8] = _T("adj. 懊惱的、洩氣的、挫折的");	 words.ps[8] = _T("\r\nps. frustrate (v) 使挫敗、使挫折、防止；frustration (n) 挫折、沮喪");
	words.word[9] = _T("prosperous"); words.number[9] = 2229; words.chinese[9] = _T("adj. 成功的、興旺的、繁榮的");	 words.ps[9] = _T("\r\nps. prosperity (n) 繁榮、興旺、成功");
	words.word[10] = _T("breakage"); words.number[10] = 2232; words.chinese[10] = _T("n. 破損、毀壞");	 words.ps[10] = _T("");
	words.word[11] = _T("constantly"); words.number[11] = 2237; words.chinese[11] = _T("adj. 持續地、不斷地");	 words.ps[11] = _T("\r\nps. constant (adj) 接連不斷的、持續的");
	words.word[12] = _T("solely"); words.number[12] = 2240; words.chinese[12] = _T("adv. 單單地");	 words.ps[12] = _T("\r\nps. sole (adj) 僅有、唯一的");
	words.word[13] = _T("expenditure"); words.number[13] = 2242; words.chinese[13] = _T("n. 支出、經費");	 words.ps[13] = _T("\r\nps. 同義詞：costs、expenses");
	words.word[14] = _T("definitive"); words.number[14] = 2245; words.chinese[14] = _T("adj. 最終的、決定性的、最佳的");	 words.ps[14] = _T("\r\nps. definitively (adj) 最終地");
	words.word[15] = _T("fixture"); words.number[15] = 2248; words.chinese[15] = _T("n. (房屋內固定的)裝置、設備");	 words.ps[15] = _T("");
	words.word[16] = _T("ongoing"); words.number[16] = 2252; words.chinese[16] = _T("adj. 持續進行的、不斷發展的");	 words.ps[16] = _T("");
	words.word[17] = _T("compatible"); words.number[17] = 2254; words.chinese[17] = _T("adj. 相容的、能共存的");	 words.ps[17] = _T("\r\nps. compatibility (n) 相容性、並存；相反詞：incompatible (adj) 不相容的");
	words.word[18] = _T("bookkeeper"); words.number[18] = 2257; words.chinese[18] = _T("n. 簿記員");	 words.ps[18] = _T("");
	words.word[19] = _T("demolish"); words.number[19] = 2261; words.chinese[19] = _T("v. 折毀、毀壞、推翻");	 words.ps[19] = _T("\r\nps. demolition (n) 破壞");
	words.word[20] = _T("extraordinary"); words.number[20] = 2265; words.chinese[20] = _T("adj. 非凡的、特別的、驚人的、特派的");	 words.ps[20] = _T("\r\nps. 相反詞：ordinary 普通的、平凡的");
	words.word[21] = _T("loyalty"); words.number[21] = 2266; words.chinese[21] = _T("n. 忠誠度、忠誠");	 words.ps[21] = _T("");
	words.word[22] = _T("consolidate"); words.number[22] = 2274; words.chinese[22] = _T("v. 鞏固(處境、地位)、使堅固、合併");	 words.ps[22] = _T("\r\nps. consolidation (n) 加強、鞏固");
	words.word[23] = _T("perishable"); words.number[23] = 2275; words.chinese[23] = _T("adj. 易腐爛的、易變質的");	 words.ps[23] = _T("\r\nps. perish (v) 腐爛、死去");
	words.word[24] = _T("simplify"); words.number[24] = 2279; words.chinese[24] = _T("v. 簡化、單純化");	 words.ps[24] = _T("\r\nps. simplification (n) 單純化、簡單化；simplicity (n) 簡單、單純");
	words.word[25] = _T("delicate"); words.number[25] = 2283; words.chinese[25] = _T("adj. 棘手的、微妙的、纖細的、脆弱的、精緻的  =  fragile");	 words.ps[25] = _T("");
	words.word[26] = _T("dismissal"); words.number[26] = 2285; words.chinese[26] = _T("n. 解雇、免職、不考慮");	 words.ps[26] = _T("\r\nps. dismiss (v) 解雇、不考慮");
	words.word[27] = _T("inaugurate"); words.number[27] = 2288; words.chinese[27] = _T("v. 舉行開幕/落成典禮、創建、開始");	 words.ps[27] = _T("\r\nps. inauguration (n) 就職、開幕、開始");
	words.word[28] = _T("activate"); words.number[28] = 2292; words.chinese[28] = _T("v. 啟動、活化");	 words.ps[28] = _T("\r\nps. acitve (adj) 積極的、活潑的；activation (n) 活化(作用)；activity (n)活動");
	words.word[29] = _T("reform"); words.number[29] = 2294; words.chinese[29] = _T("v. 改革、革新、改造");	 words.ps[29] = _T("");
	words.word[30] = _T("surplus"); words.number[30] = 2298; words.chinese[30] = _T("n. 盈餘、順差、剩餘、過剩");	 words.ps[30] = _T("");
	words.word[31] = _T("recovery"); words.number[31] = 2300; words.chinese[31] = _T("n. (經濟)回升、復甦、恢復");	 words.ps[31] = _T("\r\nps. recover (v) 恢復、康復、找回");

}
void getWords_Day24(Words &words)
{
	words.word[0] = _T("lessen"); words.number[0] = 2305; words.chinese[0] = _T("v. 減少、減輕、變小");	 words.ps[0] = _T("\r\nps. less (adj) 較小的；(adv) 較小地；\r\n    lesser (adj) 較小的、較少的、次要的；(adv) 較少");
	words.word[1] = _T("obstacle"); words.number[1] = 2307; words.chinese[1] = _T("n. 障礙(物)、阻礙 = obstruction");	 words.ps[1] = _T("");
	words.word[2] = _T("arbitration"); words.number[2] = 2310; words.chinese[2] = _T("n. (紛爭等的)仲裁、裁決");	 words.ps[2] = _T("");
	words.word[3] = _T("installment"); words.number[3] = 2311; words.chinese[3] = _T("n. 分期付款、一集、一節");	 words.ps[3] = _T("");
	words.word[4] = _T("pedestrian"); words.number[4] = 2315; words.chinese[4] = _T("n. 行人；adj. 徒步的、步行的");	 words.ps[4] = _T("");
	words.word[5] = _T("remarkable"); words.number[5] = 2317; words.chinese[5] = _T("adj. 驚人的、出眾的");	 words.ps[5] = _T("\r\nps. remarkably (adv) 非凡地、明顯地");
	words.word[6] = _T("conservation"); words.number[6] = 2320; words.chinese[6] = _T("n. 保護、保存 = preservation");	 words.ps[6] = _T("\r\nps. conserve (v) 保存、保護 = preserve");
	words.word[7] = _T("harsh"); words.number[7] = 2324; words.chinese[7] = _T("adj. 嚴厲的、苛刻的、(條件、環境)困難的");	 words.ps[7] = _T("\r\nps. harshly (adv) 嚴苛地；harshness (n) 苛刻、惡劣");
	words.word[8] = _T("waive"); words.number[8] = 2327; words.chinese[8] = _T("v. 撤回、拋棄(法定權限、權利)");	 words.ps[8] = _T("\r\nps. waiver (n) (權利的)拋棄、棄權");
	words.word[9] = _T("equal"); words.number[9] = 2329; words.chinese[9] = _T("adj. 相等的、相當的；v. 等於；n. 相等的人事物");	 words.ps[9] = _T("\r\nps. equally (adv) 相等地、公平地；equality (n) 同等");
	words.word[10] = _T("lasting"); words.number[10] = 2332; words.chinese[10] = _T("adj. 持久的、耐久的");	 words.ps[10] = _T("\r\nps. last (v) 持續、維持");
	words.word[11] = _T("proficiency"); words.number[11] = 2335; words.chinese[11] = _T("n. 精通、熟練");	 words.ps[11] = _T("");
	words.word[12] = _T("prominent"); words.number[12] = 2339; words.chinese[12] = _T("adj. 著名的、顯眼的、傑出的");	 words.ps[12] = _T("\r\nps. prominently (adv) 顯著地、重要地");
	words.word[13] = _T("simultaneously"); words.number[13] = 2342; words.chinese[13] = _T("adv. 同時地");	 words.ps[13] = _T("\r\nps. simultaneous (adj) 同時的");
	words.word[14] = _T("distract"); words.number[14] = 2345; words.chinese[14] = _T("v. 使分心、轉移'、困擾");	 words.ps[14] = _T("\r\nps. distracting (adj) 令人分心的；distraction (n) 注意力分散、使人分心的事");
	words.word[15] = _T("attest"); words.number[15] = 2348; words.chinese[15] = _T("v. 證實、證明");	 words.ps[15] = _T("");
	words.word[16] = _T("breakthrough"); words.number[16] = 2354; words.chinese[16] = _T("n. 突破、重大進展");	 words.ps[16] = _T("");
	words.word[17] = _T("conditional"); words.number[17] = 2356; words.chinese[17] = _T("adj. 有條件的、以~為條件的");	 words.ps[17] = _T("\r\nps. 相反詞：unconditional (adj) 無條件的");
	words.word[18] = _T("carrier"); words.number[18] = 2360; words.chinese[18] = _T("n. 運輸業、運輸業者");	 words.ps[18] = _T("");
	words.word[19] = _T("inconsistency"); words.number[19] = 2363; words.chinese[19] = _T("n. 不一致的、前後矛盾");	 words.ps[19] = _T("\r\nps. 相反詞：consistency 一貫、一致；\r\n    inconsistent (adj) 不一致的、前後矛盾的");
	words.word[20] = _T("dimension"); words.number[20] = 2365; words.chinese[20] = _T("n. 維度(長/寬/高)、面向、方面 = aspect (1505)");	 words.ps[20] = _T("\r\nps. three-dimensional (adj) 三度空間的");
	words.word[21] = _T("discretion"); words.number[21] = 2368; words.chinese[21] = _T("n. 自行決定權、處理權、謹慎");	 words.ps[21] = _T("\r\nps. discreet (adj) 謹言慎行的、不顯眼的");
	words.word[22] = _T("entail"); words.number[22] = 2371; words.chinese[22] = _T("v. 需要、使必要 = involve (428)");	 words.ps[22] = _T("");
	words.word[23] = _T("entrepreneur"); words.number[23] = 2374; words.chinese[23] = _T("n. 企業家、創業者");	 words.ps[23] = _T("");
	words.word[24] = _T("ballot"); words.number[24] = 2377; words.chinese[24] = _T("n. 選票、投票選舉");	 words.ps[24] = _T("");
	words.word[25] = _T("interpersonal"); words.number[25] = 2378; words.chinese[25] = _T("adj. 人際(關係)的");	 words.ps[25] = _T("");
	words.word[26] = _T("determined"); words.number[26] = 2382; words.chinese[26] = _T("adj. 堅定不移的、果斷的、下定決心的");	 words.ps[26] = _T("\r\nps. determine (v) 使決定、使下決心；determination (n) 堅定、決心");
	words.word[27] = _T("miscellaneous"); words.number[27] = 2385; words.chinese[27] = _T("adj. 各式各樣的、混雜的 = various");	 words.ps[27] = _T("");
	words.word[28] = _T("transcript"); words.number[28] = 2391; words.chinese[28] = _T("n. 謄本、抄本、文字稿 = transcription");	 words.ps[28] = _T("\r\nps. transcribe (v) 謄寫、抄錄");
	words.word[29] = _T("sacrifice"); words.number[29] = 2395; words.chinese[29] = _T("v. 犧牲");	 words.ps[29] = _T("");
	words.word[30] = _T("renewal"); words.number[30] = 2396; words.chinese[30] = _T("n. 續訂、(建築物、地區的)更新、再開發");	 words.ps[30] = _T("\r\nps. renew (v) 使更新、重新開始；renewable (n) 可更新的");
	words.word[31] = _T("stipulate"); words.number[31] = 2400; words.chinese[31] = _T("v. 規定、明確要求");	 words.ps[31] = _T("\r\nps. stipulation (n) 規定、條款");
}
void getWords_Day25(Words &words)
{
	words.word[0] = _T("margin"); words.number[0] = 2402; words.chinese[0] = _T("n. 利潤、頁邊空白、(票數等)差異；\r\nps. marginal (adj) 小的、不重要的；marginally (adv) 少量地、輕微地");
	words.word[1] = _T("glance"); words.number[1] = 2404; words.chinese[1] = _T("v. 瀏覽、(粗略地)看一下、一瞥；n. 一瞥");
	words.word[2] = _T("evacuation"); words.number[2] = 2409; words.chinese[2] = _T("n. 疏散、撤離、徹空；\r\nps. evacuate (v) 撤空、撤離");
	words.word[3] = _T("courtesy"); words.number[3] = 2411; words.chinese[3] = _T("adj. 免費的、禮貌的；n. 禮貌、客氣話；\r\nps. courteous (adj.) 有禮貌的");
	words.word[4] = _T("neglect"); words.number[4] = 2414; words.chinese[4] = _T("v. 忽視、忽略、疏忽、疏漏；n. 疏忽、忽略；\r\nps. negligent (adj) 疏忽的、粗心的；negligence (n) 疏忽、怠忽職守");
	words.word[5] = _T("conglomerate"); words.number[5] = 2416; words.chinese[5] = _T("n.  企業集團；adj. 企業集團的");
	words.word[6] = _T("counterfeit"); words.number[6] = 2419; words.chinese[6] = _T("adj. 偽造的、假冒的；v. 偽造、仿造；n. 偽造物、假貨");
	words.word[7] = _T("elevate"); words.number[7] = 2424; words.chinese[7] = _T("v. 抬高、舉起、提升；\r\nps. elevated (adj) 升高的、高架的、高尚的；elevation (n) 升高、高度\r\n    elevator 電梯");
	words.word[8] = _T("altitude"); words.number[8] = 2428; words.chinese[8] = _T("n. 高度、海拔");
	words.word[9] = _T("imperative"); words.number[9] = 2429; words.chinese[9] = _T("adj. 極重要的、必要的、急需處理的；n. 重要緊急的事、必要的事");
	words.word[10] = _T("artificial"); words.number[10] = 2433; words.chinese[10] = _T("adj. 人工的、人造的");
	words.word[11] = _T("condense"); words.number[11] = 2436; words.chinese[11] = _T("v. 濃縮、縮減；\r\nps. condensation (n.) 濃縮、凝結");
	words.word[12] = _T("corridor"); words.number[12] = 2439; words.chinese[12] = _T("n. 走廊、通道 = hallway");
	words.word[13] = _T("element"); words.number[13] = 2442; words.chinese[13] = _T("n. (構成的)要素、元素、(電子產品)元件、基本原理");
	words.word[14] = _T("alter"); words.number[14] = 2445; words.chinese[14] = _T("v. 改變、變更；\r\nps. alteration n. 改變、更改");
	words.word[15] = _T("injection"); words.number[15] = 2449; words.chinese[15] = _T("n. 注射、注入；\r\nps. inject (v) 注射、(資金等)投入");
	words.word[16] = _T("array"); words.number[16] = 2453; words.chinese[16] = _T("n.  一系列、大批、大量；v. 布置、排列");
	words.word[17] = _T("immune"); words.number[17] = 2456; words.chinese[17] = _T("adj. 免疫的、不受影響的；\r\nps. immunity (n.) 免疫、免疫力、豁免權；immunize (v) 使免疫；\r\n    immunization (n) 免疫");
	words.word[18] = _T("foster"); words.number[18] = 2459; words.chinese[18] = _T("v. 助長、促進、培養、鼓勵、代養");
	words.word[19] = _T("blame"); words.number[19] = 2461; words.chinese[19] = _T("v. 把~歸咎於；責備；\r\nps. blameless (adj) 無可責備、無過失的");
	words.word[20] = _T("convence"); words.number[20] = 2464; words.chinese[20] = _T("v. (會議)召開、召集");
	words.word[21] = _T("equivalent"); words.number[21] = 2468; words.chinese[21] = _T("adj. 相同的、等值的；n. 同等物、等價物；\r\nps. equivalence (n) 相等、等值");
	words.word[22] = _T("inhale"); words.number[22] = 2474; words.chinese[22] = _T("v. 吸入、吸氣；\r\nps. inhalation (n) 吸入");
	words.word[23] = _T("mutual"); words.number[23] = 2475; words.chinese[23] = _T("adj. 相互的、共同的；\r\nps. mutually (adv) 互相地、彼此地、共同地");
	words.word[24] = _T("aggressive"); words.number[24] = 2480; words.chinese[24] = _T("adj.  大膽的、志在必得的、侵略性的、積極活躍的；\r\nps. aggressively (adv) 侵略性地");
	words.word[25] = _T("biography"); words.number[25] = 2483; words.chinese[25] = _T("n. 傳記；\r\nps. biographical (adj) 傳記的；autobiography (n) 自傳");
	words.word[26] = _T("forbid"); words.number[26] = 2486; words.chinese[26] = _T("v. 妨礙、禁止 = prohibit (1200)");
	words.word[27] = _T("immigration"); words.number[27] = 2488; words.chinese[27] = _T("n. (從外國)移民、移居；\r\nps. 相反詞：emigration (n) 移居外國、移民出境；\r\n    immigrate (v) 遷移、移民；immigrant (n) (外來的)移民");
	words.word[28] = _T("renowned"); words.number[28] = 2491; words.chinese[28] = _T("adj. 聞名的、有聲望的；\r\nps. renown (n) 名聲、聲望");
	words.word[29] = _T("adjacent"); words.number[29] = 2493; words.chinese[29] = _T("adj. 鄰近的、相鄰的");
	words.word[30] = _T("scheme"); words.number[30] = 2497; words.chinese[30] = _T("n. 計畫(案])、方案、計謀；v. 計畫、擬定計畫");
	words.word[31] = _T("obscure"); words.number[31] = 2500; words.chinese[31] = _T("adj. 鮮為人知的、模糊的、暗的；v. 使變暗、使難理解、混淆；\r\nps. obviously (adv) 費解地");

}
void getWords_Day26(Words &words)
{
	words.word[0] = _T("amusement"); words.number[0] = 2506; words.chinese[0] = _T("n. 娛樂、愉悅、娛樂活動；\r\nps. amuse (v) 使~開心、娛樂");
	words.word[1] = _T("identical"); words.number[1] = 2508; words.chinese[1] = _T("adj. 完全一樣、相同的；\r\nps. identification (n)(297) 鑑別、身分證明、認同；identity (n) 身分、相同");
	words.word[2] = _T("besides"); words.number[2] = 2510; words.chinese[2] = _T("prep. 除~之外、在~之外 = in addition to ；adv. 此外、而且");
	words.word[3] = _T("amenity"); words.number[3] = 2512; words.chinese[3] = _T("n. 便利設施、娛樂設施、舒適、適意");
	words.word[4] = _T("mortage"); words.number[4] = 2515; words.chinese[4] = _T("n. 抵押貸款；v. 抵押");
	words.word[5] = _T("adamantly"); words.number[5] = 2517; words.chinese[5] = _T("dav. 堅決地；\r\nps. adamant (adj.) 堅決的、堅定的");
	words.word[6] = _T("accelerate"); words.number[6] = 2518; words.chinese[6] = _T("v. 加速、促進、(期間的)提前；\r\nps. acceleration (n) 加速");
	words.word[7] = _T("belongings"); words.number[7] = 2522; words.chinese[7] = _T("n. 所有物、財產 = possessions");
	words.word[8] = _T("delinquent"); words.number[8] = 2526; words.chinese[8] = _T("adj. 拖欠未繳的、到期未付的、有過失的");
	words.word[9] = _T("consultation"); words.number[9] = 2529; words.chinese[9] = _T("n. 諮詢、商議、會診；\r\nps. consultant (n.) 顧問");
	words.word[10] = _T("diverse"); words.number[10] = 2532; words.chinese[10] = _T("adj. 不同的、多樣的；\r\nps. diversity (n) 多樣性；diversify (v) 使多元化、使多樣化");
	words.word[11] = _T("beneficiary"); words.number[11] = 2527; words.chinese[11] = _T("n. 受益人、受惠者；\r\nps. Benefit (n)(178) 利益、好處；beneficial (adj) 有利的、有益的");
	words.word[12] = _T("engage"); words.number[12] = 2540; words.chinese[12] = _T("v. 使從事、使忙於、吸引住、與~交戰；\r\nps. engaged (adj) 已訂婚的、被占用的、忙於~的；\r\n    engagement (n) 約會、訂婚、任務");
	words.word[13] = _T("accumulation"); words.number[13] = 2542; words.chinese[13] = _T("n. 積聚、累積(數量)、逐漸增加；\r\nps. accumulate (v) 累積、積聚");
	words.word[14] = _T("merit"); words.number[14] = 2546; words.chinese[14] = _T("n. 優點、價值");
	words.word[15] = _T("tangible"); words.number[15] = 2548; words.chinese[15] = _T("adj. 實質的、有形的、可觸的；\r\nps. 相反詞：intangible (adj.) 無形的");
	words.word[16] = _T("vague"); words.number[16] = 2555; words.chinese[16] = _T("adj. 模糊的、含糊的、不明確的");
	words.word[17] = _T("notable"); words.number[17] = 2556; words.chinese[17] = _T("adj. 顯著的、值得留意的、有名的；\r\nps. note (v) 注意、提及；noted (adj) 著名的");
	words.word[18] = _T("obviously"); words.number[18] = 2560; words.chinese[18] = _T("adv. 顯然地、明顯地；\r\nps. obvious (adj) 明顯的、分明的");
	words.word[19] = _T("patent"); words.number[19] = 2562; words.chinese[19] = _T("n. 專利權、權利；adj. 專利的、明顯的；v. 取得專利權");
	words.word[20] = _T("outskirts"); words.number[20] = 2566; words.chinese[20] = _T("n. 郊區、郊外");
	words.word[21] = _T("altruism"); words.number[21] = 2569; words.chinese[21] = _T("n. 利他心理、利他主義；\r\nps. altruistic (adj) 利他的");
	words.word[22] = _T("protocol"); words.number[22] = 2571; words.chinese[22] = _T("n. (國家之間的)協議、條約草案、(外交)禮節、(電腦)通訊協定");
	words.word[23] = _T("troubleshooting"); words.number[23] = 2574; words.chinese[23] = _T("n. 疑難排解；\r\nps. troubleshooter (n) 疑難排解者、檢修人員");
	words.word[24] = _T("impose"); words.number[24] = 2579; words.chinese[24] = _T("v. (規定等的) 強制實行、強加、使接受(意見)");
	words.word[25] = _T("resistance"); words.number[25] = 2580; words.chinese[25] = _T("n. 反抗、抵抗、抵制、抵抗力；\r\nps. resistant (adj) 抵抗的；resist (v) 對抗、抵擋");
	words.word[26] = _T("retrieval"); words.number[26] = 2584; words.chinese[26] = _T("(v) 檢索、擷取、取回、重獲；\r\nps. retrieve (v) 檢索、擷取、取回、重獲");
	words.word[27] = _T("detach"); words.number[27] = 2587; words.chinese[27] = _T("v. 分開、使分離；\r\nps.  相反詞：attach (349) 附上、使附著；detachment (n) 分離、超然");
	words.word[28] = _T("remedy"); words.number[28] = 2589; words.chinese[28] = _T("n. 補救、改進措施、處理方法 = solution、治療法；v. 補救、改正、糾正");
	words.word[29] = _T("impending"); words.number[29] = 2592; words.chinese[29] = _T("adj. 即將到來的、逼近的");
	words.word[30] = _T("testimonial"); words.number[30] = 2595; words.chinese[30] = _T("n. 推薦(書)、證明(信)、感謝(狀)");
	words.word[31] = _T("debut"); words.number[31] = 2598; words.chinese[31] = _T("n. 初次登台、首次演出");

}
void getWords_Day27(Words &words)
{
	words.word[0] = _T("proliferate");	words.number[0] = 2601; words.chinese[0] = _T("v. (數量上)急遽上升/繁殖；\r\nps. proliferation (n.) 激增、湧現");
	words.word[1] = _T("symptom");		words.number[1] = 2604; words.chinese[1] = _T("n. 症狀、徵兆");
	words.word[2] = _T("obligation");	words.number[2] = 2607; words.chinese[2] = _T("n. 義務、責任；'\r\nps. obligate (v.) 使負義務、使負責任");
	words.word[3] = _T("skyscraper");	words.number[3] = 2608; words.chinese[3] = _T("n. 摩天大樓");
	words.word[4] = _T("attorney");		words.number[4] = 2614; words.chinese[4] = _T("n. 法定代理人、律師 = lawyer");
	words.word[5] = _T("inhabitant");	words.number[5] = 2618; words.chinese[5] = _T("n. 居民、居住者；\r\nps. habitat (n.)(2975) 棲息地、(動物)生活環境；inhabit (v.) 居住於 ");
	words.word[6] = _T("stability");	words.number[6] = 2621; words.chinese[6] = _T("adv. 穩定(性)、安定的狀態；\r\nps. 相反詞：instability 不安定性； stable 穩定的 <--> unstable 不穩定的");
	words.word[7] = _T("apparently");	words.number[7] = 2624; words.chinese[7] = _T("adv. 顯然地；\r\nps. apparent (adj.) 表面的、顯而易見的");
	words.word[8] = _T("rebate");		words.number[8] = 2627; words.chinese[8] = _T("n. 退還款、回扣、折扣");
	words.word[9] = _T("politely");		words.number[9] = 2630; words.chinese[9] = _T("adv. 有禮貌地；\r\nps. polite (adj) 有禮貌的；politeness (n.) 有禮貌、客氣");
	words.word[10] = _T("prevalent");	words.number[10] = 2633; words.chinese[10] = _T("adj. 普遍的、盛行的、流行的；\r\nps. prevalence (n) 普遍、盛行、流行");
	words.word[11] = _T("lucrative");	words.number[11] = 2636; words.chinese[11] = _T("adj. 賺錢的、獲利多的 = profitable (1674)");
	words.word[12] = _T("fierce");		words.number[12] = 2641; words.chinese[12] = _T("adj. 強烈的、激烈的、兇殘的、猛烈的");
	words.word[13] = _T("congress");	words.number[13] = 2644; words.chinese[13] = _T("n. (美國)國會、議會；\r\nps. congressional (adj) 國家立法機關的、議會的");
	words.word[14] = _T("trustee");		words.number[14] = 2647; words.chinese[14] = _T("n. 董事、理事、(信託財產的)受託管理人");
	words.word[15] = _T("superficial"); words.number[15] = 2650; words.chinese[15] = _T("adj. 表面的、膚淺的；\r\nps. superficially (adv.) 表面地、膚淺地");
	words.word[16] = _T("ascertain");	words.number[16] = 2653; words.chinese[16] = _T("v. 確定(事實、真實性)、查明");
	words.word[17] = _T("permanent");	words.number[17] = 2656; words.chinese[17] = _T("adj. 長久的、永久的、永遠的；\r\nps. permanently (adv.) 永久地、長期不變地；permanence (n) 永久(性) ");
	words.word[18] = _T("tremendous");	words.number[18] = 2660; words.chinese[18] = _T("adj. 驚人的、巨大的");
	words.word[19] = _T("definitely");	words.number[19] = 2663; words.chinese[19] = _T("adv. 無疑地、肯定地、當然；\r\nps. definite (adj) 明確的、確定的");
	words.word[20] = _T("gathering");	words.number[20] = 2666; words.chinese[20] = _T("n. 集會、聚會、收集");
	words.word[21] = _T("attire");		words.number[21] = 2667; words.chinese[21] = _T("n. 服裝、衣著 = clothes；v.使穿衣、打扮");
	words.word[22] = _T("split");		words.number[22] = 2672; words.chinese[22] = _T("v. 分開、分擔、分享 (利益、費用)、分裂；n. 裂縫、分裂");
	words.word[23] = _T("mandate");		words.number[23] = 2675; words.chinese[23] = _T("n. (選舉、投票等的)權力、授權、指令、命令；v. 授權；\r\nps. mandatory (adj)(1665) 義務的、法定的 ");
	words.word[24] = _T("superb");		words.number[24] = 2677; words.chinese[24] = _T("adj. 一流的、極佳的；\r\nps. superbly (adv.) 上等地、極好地");
	words.word[25] = _T("sustain");		words.number[25] = 2680; words.chinese[25] = _T("v. 遭受 (損害、傷害)；維持 = support、承擔；\r\nps. sustained (adj) 持久的、持續的");
	words.word[26] = _T("enlarge");		words.number[26] = 2683; words.chinese[26] = _T("v. 放大、擴展、增加(數量)；\r\nps. enlargement (n.) 擴大");
	words.word[27] = _T("excursion");	words.number[27] = 2686; words.chinese[27] = _T("n. 短途旅行、遠足");
	words.word[28] = _T("controversial");words.number[28] = 2690; words.chinese[28] = _T("adj. 爭議性的、引起爭議的；\r\nps. 相反詞：uncontroversial (adj.) 不會引起爭議的；controversy (n.) 爭議");
	words.word[29] = _T("sophisticated");words.number[29] = 2693; words.chinese[29] = _T("adj. (機械、裝置等)精密的、複雜的、老練的、見過世面的；\r\nps. Sophistication (n) 老練、有教養、有經驗");
	words.word[30] = _T("fabulous");	words.number[30] = 2695; words.chinese[30] = _T("adj. 絕妙的、極好的、巨大的");
	words.word[31] = _T("anonymous");	words.number[31] = 2700; words.chinese[31] = _T("adj. 匿名的；\r\nps. anonymously (adv.) 匿名地；annoyed (adj.) 煩惱的 (= little angry)");

}
void getWords_Day28(Words &words)
{
	words.word[0] = _T("execute");		words.number[0] = 2703;		words.chinese[0] = _T("v. 執行(任務、計畫)、實施；\r\nps. executive (adj.) 管理的、行政的 (n.) 經理、主管；\r\n    execution (n.) 執行、實施");
	words.word[1] = _T("boast");		words.number[1] = 2705;		words.chinese[1] = _T("v. 擁有(~自豪)、吹噓、誇耀；n. 吹噓、誇耀、引以為榮的事物");
	words.word[2] = _T("burst");		words.number[2] = 2707;		words.chinese[2] = _T("v. 爆裂、破裂；突然衝到~；n. 破裂、爆發");
	words.word[3] = _T("tentative");	words.number[3] = 2709;		words.chinese[3] = _T("adj. 暫時性的、猶豫不決的；\r\nps. tentatively (adv.) 暫時性地");
	words.word[4] = _T("boundary");		words.number[4] = 2713;		words.chinese[4] = _T("n. 分界(線)、邊界");
	words.word[5] = _T("acclaim");		words.number[5] = 2717;		words.chinese[5] = _T("v. 給予高度評價、喝采、歡迎、稱讚；n. 喝采、稱讚");
	words.word[6] = _T("consquence");	words.number[6] = 2721;		words.chinese[6] = _T("n. 結束、後果；\r\nps. consequently (adv.) 結果、因此、所以；consequent (adj.) \r\n    隨之發生的 = consequential");
	words.word[7] = _T("apparatus");	words.number[7] = 2722;		words.chinese[7] = _T("n. 儀器、裝置、器械 =  equipment");
	words.word[8] = _T("enact");		words.number[8] = 2726;		words.chinese[8] = _T("v. 制訂、通過 (法案等)；enactment (n.) (法律的)制訂、法律、法規");
	words.word[9] = _T("severely");		words.number[9] = 2729;		words.chinese[9] = _T("adv. 嚴重地、嚴格地；\r\nps. servere (adj.) 嚴重的、嚴厲的 = rigid");
	words.word[10] = _T("demanding");	words.number[10] = 2732;	words.chinese[10] = _T("adj. 費力的、要求高的的、挑剔的、嚴苛的");
	words.word[11] = _T("devise");		words.number[11] = 2736;	words.chinese[11] = _T("v. 設計、想出、發明；\r\nps. device (n.) 裝置、設備");
	words.word[12] = _T("attain");		words.number[12] = 2740;	words.chinese[12] = _T("v. 達成(目標、達到(位置、地位等)；\r\nps. attainable (adj) 可達成的；attainment (n.) 達成、成就");
	words.word[13] = _T("inherently");	words.number[13] = 2743;	words.chinese[13] = _T("adv. 本質上地、固有地；\r\nps. inherent (adj.) 本來的、本質的");
	words.word[14] = _T("captalize");	words.number[14] = 2747;	words.chinese[14] = _T("v. 從～獲利 = take advantage of、使資本化、提供(資本)、用大小字母書寫；\r\nps. capital (n)(754) 資本、首都、大寫字母 ");
	words.word[15] = _T("neutrality");	words.number[15] = 2750;	words.chinese[15] = _T("n. 中立(性)；\r\nps. neutral (adj.) 中立的；neutally (adv.) 中立地、保持中立地");
	words.word[16] = _T("deliberate");	words.number[16] = 2752;	words.chinese[16] = _T("adj. 刻意的、慎重的、從容的；v. 深思熟慮的；\r\nps. deliberately (adv.) 慎重地、故意地");
	words.word[17] = _T("exaggerate");	words.number[17] = 2755;	words.chinese[17] = _T("v. 誇大、誇張、言過其實；\r\nps. exaggration (n.) 誇張、誇大");
	words.word[18] = _T("blend");		words.number[18] = 2756;	words.chinese[18] = _T("v. 混合、融合、調製；n. 混合；\r\nps. blender (n.) 攪拌機");
	words.word[19] = _T("expose");		words.number[19] = 2760;	words.chinese[19] = _T("v. 使暴露(在危險之中)、揭露(事實等) = reveal (878)；\r\nps. exposure (n.) 暴露、揭露、曝光");
	words.word[20] = _T("engrave");		words.number[20] = 2763;	words.chinese[20] = _T("v. 雕刻、將～銘記");
	words.word[21] = _T("commodity");	words.number[21] = 2769;	words.chinese[21] = _T("n. 商品、有用的東西");
	words.word[22] = _T("halt");		words.number[22] = 2771;	words.chinese[22] = _T("n. 中斷、停止、暫停；v. 使中斷、停止");
	words.word[23] = _T("antibiotic");	words.number[23] = 2775;	words.chinese[23] = _T("n. 抗生素； adj. 抗生的、抗菌的");
	words.word[24] = _T("diminish");	words.number[24] = 2777;	words.chinese[24] = _T("v. 減少、縮減 = decrease");
	words.word[25] = _T("infrastructure");words.number[25] = 2781;	words.chinese[25] = _T("n. (國家等的)基礎建設、公用設備");
	words.word[26] = _T("bulk");		words.number[26] = 2784;	words.chinese[26] = _T("n. 大部分、主體、大量；adj. 大批的、大量的");
	words.word[27] = _T("bewildering");	words.number[27] = 2788;	words.chinese[27] = _T("adj. 令人困惑的；\r\nps. bewilder (v.) 使迷惑、使糊塗");
	words.word[28] = _T("constraint");	words.number[28] = 2790;	words.chinese[28] = _T("n. 限制、約束；\r\nps. constrain (v.) 強迫、限制 = restrict (1411)");
	words.word[29] = _T("susceptible");	words.number[29] = 2792;	words.chinese[29] = _T("adj. 易受感染/影響的、敏感的、易動感情的");
	words.word[30] = _T("outlook");		words.number[30] = 2795;	words.chinese[30] = _T("n. 前景、展望、見解、觀點");
	words.word[31] = _T("fabricate");	words.number[31] = 2800;	words.chinese[31] = _T("v. 組裝、製造 = manufacture (105)；\r\nps. fabrication (n.) 製造；prefabricated (adj.) (建築)預製構建的");
}
void getWords_Day29(Words &words)
{
	words.word[0] = _T("bounce"); 		words.number[0] = 2801; 	words.chinese[0] = _T("v. (球等)彈起、(支票、電子郵件等)退回； n. 彈跳、活力");
	words.word[1] = _T("thrive"); 		words.number[1] = 2805; 	words.chinese[1] = _T("v. 興旺、繁榮 (= flourish)；\r\nps. thriving 興旺的");
	words.word[2] = _T("abrupt");		words.number[2] = 2807; 	words.chinese[2] = _T("adj. 突然的、意外的、(態度、語言)魯莽的；\r\nps. abruptly 突然地 ");
	words.word[3] = _T("incredible");	words.number[3] = 2810; 	words.chinese[3] = _T("adj. 極佳的、不可置信的；\r\nps. incredibly 難以置信地");
	words.word[4] = _T("compel");		words.number[4] = 2814; 	words.chinese[4] = _T("v. 強迫、使不得不；\r\nps. compelling 令人信服的、引人入勝的");
	words.word[5] = _T("facilitate");	words.number[5] = 2817; 	words.chinese[5] = _T("v. 促進、使容易；\r\nps. facility 設備、設施；facilitation 簡易化、促進");
	words.word[6] = _T("undertake");	words.number[6] = 2820; 	words.chinese[6] = _T("v. 著手進行、負責、承擔(事情、責任)、允許、答應；\r\nps. undergo 經歷、undergraduate 大學生");
	words.word[7] = _T("bilingual");	words.number[7] = 2823; 	words.chinese[7] = _T("v. 堅稱、斷言；\r\nps. assertive (adj.) 斷言的、武斷的");
	words.word[8] = _T("assert"); 		words.number[8] = 2827; 	words.chinese[8] = _T("adj. 精疲力竭的、耗盡的、用完的；\r\nps. exhausting 使人精疲力竭的");
	words.word[9] = _T("exhausted"); 	words.number[9] = 2829; 	words.chinese[9] = _T("v. 領會、理解、抓牢；n. 理解、緊抓");
	words.word[10] = _T("grasp"); 		words.number[10] = 2831; 	words.chinese[10] = _T("v. 興旺、繁榮、(植物)茂密");
	words.word[11] = _T("aptitude"); 	words.number[11] = 2837; 	words.chinese[11] = _T("n. 天資、才能、適宜、自然傾向");
	words.word[12] = _T("escalate");	words.number[12] = 2840; 	words.chinese[12] = _T("v. (程度)加劇、惡化、(薪資、物價等)逐漸上升");
	words.word[13] = _T("laundry"); 	words.number[13] = 2843; 	words.chinese[13] = _T("n. 送洗衣物、洗衣店");
	words.word[14] = _T("integrate"); 	words.number[14] = 2846; 	words.chinese[14] = _T("v. 整合、使完整；\r\nps. integration (n.) 整合、融合；integrated (adj.) 整合的");
	words.word[15] = _T("censorship");	words.number[15] = 2850; 	words.chinese[15] = _T("n. 審查(制度)；\r\nps. censor (n.) (出版物、電影等的)審查員");
	words.word[16] = _T("apprehensive");words.number[16] = 2852; 	words.chinese[16] = _T("adj. 擔憂的、憂慮的、領悟的");
	words.word[17] = _T("heritage"); 	words.number[17] = 2855; 	words.chinese[17] = _T("n. (文化歷史的)遺產、傳承");
	words.word[18] = _T("cusine");		words.number[18] = 2859; 	words.chinese[18] = _T("n. 烹飪、烹飪法、菜餚");
	words.word[19] = _T("contingent"); 	words.number[19] = 2863; 	words.chinese[19] = _T("adj. 因情況而定的；以~為條件的");
	words.word[20] = _T("densely"); 	words.number[20] = 2865; 	words.chinese[20] = _T("adj. 密集地、稠密地；\r\nps. dense (adj.)稠密的、密集的、density (n)密度、濃度");
	words.word[21] = _T("creditable");	words.number[21] = 2868; 	words.chinese[21] = _T("adj. 值得稱讚的、可信的；\r\nps. credit (n.)信用、名譽、存款金額、賒欠");
	words.word[22] = _T("affix"); 		words.number[22] = 2872; 	words.chinese[22] = _T("v. 黏貼上(郵票等)、附上、蓋(印章)；n. 附加物");
	words.word[23] = _T("fundraiser"); 	words.number[23] = 2875; 	words.chinese[23] = _T("n. 募款活動、募款者；\r\nps. fundraising (n.) 籌款、募款 (adj) 募款的");
	words.word[24] = _T("simulate"); 	words.number[24] = 2878; 	words.chinese[24] = _T("v. 模擬、冒充、假裝；\r\nps. simulation (n.) 模擬、冒充");
	words.word[25] = _T("elict");		words.number[25] = 2881; 	words.chinese[25] = _T("v. 引出、誘出、探知");
	words.word[26] = _T("interact"); 	words.number[26] = 2883; 	words.chinese[26] = _T("v. 互動、戶相作用、互相影響；\r\nps. interaction (n.) 互動、互相作用；interactive (adj.) 相互作用的");
	words.word[27] = _T("comprise");	words.number[27] = 2885; 	words.chinese[27] = _T("v. 由~組成、包含 (consist of)");
	words.word[28] = _T("massive");		words.number[28] = 2889; 	words.chinese[28] = _T("adj. 龐大的、大規模的、結實的；\r\nps. mass (n.) 大量、眾多 (adj.) 大批的、大量的 (v)聚集；\r\n     massively (adv.) 大量地");
	words.word[29] = _T("irrigation");	words.number[29] = 2891; 	words.chinese[29] = _T("n. 灌溉");
	words.word[30] = _T("deficit");		words.number[30] = 2895; 	words.chinese[30] = _T("n. 赤字的、不足的");
	words.word[31] = _T("impede");		words.number[31] = 2898; 	words.chinese[31] = _T("v. 妨礙、阻礙");
}
void getWords_Day30(Words &words)
{
	words.word[0] = _T("disclose"); 	words.number[0] = 2901; 	words.chinese[0] = _T("v. 透漏、揭發、公開 = reveal (878) = expose (2760)；\r\nps. disclosure (n.) 揭發、透露、公開");
	words.word[1] = _T("inevitable"); 	words.number[1] = 2903; 	words.chinese[1] = _T("adj. 必然的、無可避免的");
	words.word[2] = _T("deplete");		words.number[2] = 2906; 	words.chinese[2] = _T("v. n. 使減少、枯竭、耗盡");
	words.word[3] = _T("magnificent"); 	words.number[3] = 2909; 	words.chinese[3] = _T("adj. 宏偉的、壯麗的、極好的");
	words.word[4] = _T("discrepancy"); 	words.number[4] = 2914; 	words.chinese[4] = _T("n. 差異、不一致");
	words.word[5] = _T("collapse"); 	words.number[5] = 2916; 	words.chinese[5] = _T("v. n. 倒塌、崩潰、(價格)暴跌");
	words.word[6] = _T("revolutionary"); words.number[6] = 2919; 	words.chinese[6] = _T("adj. 創新的、革命的；n. 革命者；\r\nps. revolution (n.) 革新、變革");
	words.word[7] = _T("byproduct"); 	words.number[7] = 2924; 	words.chinese[7] = _T("n. 副產品、附帶結果");
	words.word[8] = _T("sluggish"); 	words.number[8] = 2927; 	words.chinese[8] = _T("adj. 遲緩的、停滯的、懶惰的");
	words.word[9] = _T("defy"); 		words.number[9] = 2930; 	words.chinese[9] = _T("v. 難以(形容)、無法(相信)、拒抗；\r\nps. defiant (adj.) 違抗的、挑釁的；defuance (n.) 違抗、抵抗");
	words.word[10] = _T("flourish"); 	words.number[10] = 2933; 	words.chinese[10] = _T("v. 興旺、繁榮、(植物)茂密");
	words.word[11] = _T("manipulate"); 	words.number[11] = 2936; 	words.chinese[11] = _T("v.操作、操縱；\r\nps. manipulation (n.) 操作、操縱");
	words.word[12] = _T("layoff");		words.number[12] = 2940; 	words.chinese[12] = _T("n. 資遣、臨時解雇");
	words.word[13] = _T("bilateral"); 	words.number[13] = 2943; 	words.chinese[13] = _T("adj. 雙方的、雙邊的");
	words.word[14] = _T("incidental"); 	words.number[14] = 2946; 	words.chinese[14] = _T("adj. 附帶的、次要的、伴隨而來的");
	words.word[15] = _T("intervention"); words.number[15] = 2949; 	words.chinese[15] = _T("n. 介入、干涉、調停；\r\nps. intervene (v.) 介入、干涉、調停");
	words.word[16] = _T("endorse"); 	words.number[16] = 2953; 	words.chinese[16] = _T("v. 贊同(意見)、背書；\r\nps. endorsement (n.) 支持、背書");
	words.word[17] = _T("dilute"); 		words.number[17] = 2955; 	words.chinese[17] = _T("v. 稀釋、削弱；adj. 經稀釋的、減弱的了；\r\nps. dilution (n.) 稀釋");
	words.word[18] = _T("confine"); 	words.number[18] = 2958; 	words.chinese[18] = _T("v. 限制、使侷限");
	words.word[19] = _T("trivial"); 	words.number[19] = 2962; 	words.chinese[19] = _T("adj. 細瑣的、微不足道的");
	words.word[20] = _T("elaborate"); 	words.number[20] = 2964; 	words.chinese[20] = _T("adj. 精巧的、精心製作的；v.精巧製作、詳細說明；\r\nps. elaboration (n.) 複雜、精巧");
	words.word[21] = _T("discriminate"); words.number[21] = 2968; 	words.chinese[21] = _T("v. 歧視、區分(差異)、辨別；\r\nps. discrimination (n.) 差別、不公平待遇、歧視");
	words.word[22] = _T("vulnerable"); 	words.number[22] = 2972; 	words.chinese[22] = _T("adj. 易受傷的、脆弱的");
	words.word[23] = _T("habitat"); 	words.number[23] = 2975; 	words.chinese[23] = _T("n. (動物)棲息地、(植物)生長地");
	words.word[24] = _T("radical"); 	words.number[24] = 2977; 	words.chinese[24] = _T("adj. 徹底的、根本的、激進的；\r\nps. radically (adv.) 根本地、激進地、徹底地");
	words.word[25] = _T("spontaneous"); words.number[25] = 2979; 	words.chinese[25] = _T("adj. 自然的、自發；\r\nps. spantaneously (adv.) 自然地、不由自主地");
	words.word[26] = _T("rigid"); 		words.number[26] = 2982; 	words.chinese[26] = _T("adj. 嚴格的、堅硬的、僵化的；\r\nps. 相反詞: flexible (1654)；rigidly (adv.) 僵硬地、嚴格地");
	words.word[27] = _T("voucher"); 	words.number[27] = 2985; 	words.chinese[27] = _T("n. 商品券、抵用券、憑單");
	words.word[28] = _T("bias"); 		words.number[28] = 2989; 	words.chinese[28] = _T("n. 成見、偏見；v. 使存偏見");
	words.word[29] = _T("fraud"); 		words.number[29] = 2992; 	words.chinese[29] = _T("n. 詐騙、詐騙(行為)、騙局、騙子");
	words.word[30] = _T("fundamental"); words.number[30] = 2996; 	words.chinese[30] = _T("adj. 基本的；根本的；十分重要的；n. 基本原理；\r\nps. fundamentally (adv.) 基礎地、重要地");
	words.word[31] = _T("arouse"); 		words.number[31] = 3000; 	words.chinese[31] = _T("v. 激起、喚起、使奮發");
}

