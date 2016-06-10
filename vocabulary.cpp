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
	words.word[0] = _T("employee"); words.number[0] = 2; words.chinese[0] = _T("n. 員工、受雇者");	 words.ps[0] = _T("\r\nps. employment (n) 雇用、工作、就業；employer (n) 雇主");
	words.word[1] = _T("provide"); words.number[1] = 5; words.chinese[1] = _T("v. 提供、供給");	 words.ps[1] = _T("\r\nps. provided (1578)(conj) 以~為條件、假如；provision (n) 供應、供給");
	words.word[2] = _T("conference"); words.number[2] = 8; words.chinese[2] = _T("n. 會議、會談");	 words.ps[2] = _T("");
	words.word[3] = _T("due"); words.number[3] = 11; words.chinese[3] = _T("adj. 到期的、預定的、由於、因為~的緣故");	 words.ps[3] = _T("");
	words.word[4] = _T("attend"); words.number[4] = 151; words.chinese[4] = _T("v. 參加、出席、注意");	 words.ps[4] = _T("\r\nps. attendance (n) 參與、出席；attendee (n) 參與者、參加者");
	words.word[5] = _T("account"); words.number[5] = 19; words.chinese[5] = _T("n. 帳戶、帳目；v. 是~的原因、把~視為");	 words.ps[5] = _T("\r\nps. accountant (n) 會計師");
	words.word[6] = _T("purchase"); words.number[6] = 22; words.chinese[6] = _T("n. 購買、採購、購買物；v. 購買、換得");	 words.ps[6] = _T("");
	words.word[7] = _T("research"); words.number[7] = 25; words.chinese[7] = _T("n. 研究、調查；v. 研究、調查");	 words.ps[7] = _T("");
	words.word[8] = _T("supply"); words.number[8] = 29; words.chinese[8] = _T("v. 供給、提供；n. 供給、日用品");	 words.ps[8] = _T("\r\nps. 相似詞：provide (v)。supplier (n) 供應商");
	words.word[9] = _T("submit"); words.number[9] = 31; words.chinese[9] = _T("v. 提交、遞呈");	 words.ps[9] = _T("\r\nps. submission (n) 提交、遞呈");
	words.word[10] = _T("facility"); words.number[10] = 34; words.chinese[10] = _T("n. 設備、設施");	 words.ps[10] = _T("");
	words.word[11] = _T("notice"); words.number[11] = 38; words.chinese[11] = _T("n. 公告、通知；v. 注意到、察覺");	 words.ps[11] = _T("\r\nps. noticeable (adj) 明顯的、顯著的；noticeably (adv) 顯著地、明顯地");
	words.word[12] = _T("available"); words.number[12] = 41; words.chinese[12] = _T("adj. 可得的、可用的、有空的");	 words.ps[12] = _T("\r\nps. avail (v) 使用、利用；availability (n) 可用性、可用的人/物。\r\n    相反詞：unavailable (adj) 不可用的");
	words.word[13] = _T("representative"); words.number[13] = 44; words.chinese[13] = _T("n. 代表、代理人；adj. 代表的、代理的");	 words.ps[13] = _T("\r\nps. represent (v) 代表、表示");
	words.word[14] = _T("corporation"); words.number[14] = 47; words.chinese[14] = _T("n. 公司、法人");	 words.ps[14] = _T("\r\nps. corporate (adj) 法人團體的、公司的；cooperation (n) 合作；\r\n    cooperative (n) 合作社 (adj) 和藹可親的、合作的");
	words.word[15] = _T("charge"); words.number[15] = 50; words.chinese[15] = _T("n. 費用、責任");	 words.ps[15] = _T("");
	words.word[16] = _T("process"); words.number[16] = 52; words.chinese[16] = _T("n. 程序、過程；v. 加工、處理");	 words.ps[16] = _T("\r\nps. processing (n) 加工、處理");
	words.word[17] = _T("improve"); words.number[17] = 55; words.chinese[17] = _T("v. 改善、改良、好轉");	 words.ps[17] = _T("\r\nps. improvement (n) 改善、進步");
	words.word[18] = _T("prefer"); words.number[18] = 58; words.chinese[18] = _T("v. 較喜歡、偏好");	 words.ps[18] = _T("\r\nps. preferable (adj) 較好的、更可取的；preference (n) 喜好、偏好");
	words.word[19] = _T("inquire"); words.number[19] = 61; words.chinese[19] = _T("v. 詢問、調查");	 words.ps[19] = _T("\r\nps. inquiry (n) 諮詢、詢問");
	words.word[20] = _T("apply"); words.number[20] = 64; words.chinese[20] = _T("v. 應徵、申請、適用");	 words.ps[20] = _T("\r\nps. applicant (n) 應徵者；application (n) 申請、應用、採用、意見");
	words.word[21] = _T("management"); words.number[21] = 67; words.chinese[21] = _T("n. 管理部門、經營階層；管理、經營");	 words.ps[21] = _T("\r\nps. managerical (1720)(adj) 管理的、經營的；manage (v) 管理");
	words.word[22] = _T("supervisor"); words.number[22] = 71; words.chinese[22] = _T("n. 主管、監督者、管理人");	 words.ps[22] = _T("\r\nps. supervise (v) 監督、管理；supervisory (adj) 監督的、管理的");
	words.word[23] = _T("deliver"); words.number[23] = 74; words.chinese[23] = _T("v. 運送、傳送");	 words.ps[23] = _T("\r\nps. delivery (n) 運送、投遞");
	words.word[24] = _T("arrange"); words.number[24] = 77; words.chinese[24] = _T("v. 安排、籌備、排列");	 words.ps[24] = _T("\r\nps. arrangement (n) 安排、整理、籌備\r\n    rearrange (v) 重新安排、改變~的秩序");
	words.word[25] = _T("budget"); words.number[25] = 80; words.chinese[25] = _T("n. 預算；v. 編列預算");	 words.ps[25] = _T("");
	words.word[26] = _T("performance"); words.number[26] = 84; words.chinese[26] = _T("n. 成果、表現、演出");	 words.ps[26] = _T("\r\nps. perform (v) 執行、履行、表演");
	words.word[27] = _T("consider"); words.number[27] = 87; words.chinese[27] = _T("v. 考慮、顧及");	 words.ps[27] = _T("\r\nps. considerble (896)(adj) 相當的；consideration (n) 考慮、顧及、體諒");
	words.word[28] = _T("recommend"); words.number[28] = 90; words.chinese[28] = _T("v. 建議、推薦");	 words.ps[28] = _T("\r\nps. recommendation (n) 推薦、建議；recommendable (adj) 值得推薦的");
	words.word[29] = _T("annual"); words.number[29] = 93; words.chinese[29] = _T("adj. 每年的");	 words.ps[29] = _T("\r\nps. annually (adv) 每年；biannual (adj) 每半年的、每年兩次的");
	words.word[30] = _T("policy"); words.number[30] = 96; words.chinese[30] = _T("n. 政策、方針、策略");	 words.ps[30] = _T("\r\nps. n. 政策、方針、測略");
	words.word[31] = _T("committee"); words.number[31] = 100; words.chinese[31] = _T("n. 委員會、委員");	 words.ps[31] = _T("\r\nps. n. 委員會、委員");

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
	words.word[0] = _T("session"); words.number[0] = 103; words.chinese[0] = _T("n. (訓練、課程)一段時間；會期");	 words.ps[0] = _T("");
	words.word[1] = _T("manufacture"); words.number[1] = 105; words.chinese[1] = _T("v. 製造、製作；n. 製造、生產、製品");	 words.ps[1] = _T("\r\nps. manufacturer (n) 製造商、製造廠；manufacuring (n) 製造工程、製造業");
	words.word[2] = _T("accept"); words.number[2] = 109; words.chinese[2] = _T("v. 接受、同意、認可");	 words.ps[2] = _T("\r\nps. acceptable (adj) 可接受的、可容許的；acceptance (n) 接受、答應、贊同");
	words.word[3] = _T("concern"); words.number[3] = 112; words.chinese[3] = _T("n. 擔心、憂慮；v. 影響到、關係到、使擔憂");	 words.ps[3] = _T("\r\nps. concerned (adj) 擔心的、憂慮的");
	words.word[4] = _T("conduct"); words.number[4] = 115; words.chinese[4] = _T("v. 進行、實施、指揮(樂團)；n. 行為、指導、管理經營");	 words.ps[4] = _T("");
	words.word[5] = _T("resource"); words.number[5] = 118; words.chinese[5] = _T("n. (國家、企業的)資源、資產、物資");	 words.ps[5] = _T("");
	words.word[6] = _T("access"); words.number[6] = 122; words.chinese[6] = _T("n. 進入、通道；v. 接近、(用電腦)存取資訊");	 words.ps[6] = _T("\r\nps. accessible (adj) 可接近的");
	words.word[7] = _T("candidate"); words.number[7] = 124; words.chinese[7] = _T("n. 候選人、求職應徵者、參加考試的人");	 words.ps[7] = _T("");
	words.word[8] = _T("advance"); words.number[8] = 128; words.chinese[8] = _T("n. (技術等)進展、發展；adj. 事先的、事前的；v. 進步");	 words.ps[8] = _T("\r\nps. advanced (adj) 先進的、超前的；advancement (n) 進步、發展");
	words.word[9] = _T("profit"); words.number[9] = 130; words.chinese[9] = _T("n. 獲利、利潤；v. 得到利益");	 words.ps[9] = _T("\r\nps. nonprofit (adj) 非營利的");
	words.word[10] = _T("mention"); words.number[10] = 132; words.chinese[10] = _T("v. 說服、提到；n. 言及、說起");	 words.ps[10] = _T("");
	words.word[11] = _T("retirement"); words.number[11] = 135; words.chinese[11] = _T("n. 退休、退役");	 words.ps[11] = _T("\r\nps. retire (v) 退休、退役");
	words.word[12] = _T("statement"); words.number[12] = 140; words.chinese[12] = _T("n. 對帳單、聲明、陳述");	 words.ps[12] = _T("");
	words.word[13] = _T("executive"); words.number[13] = 142; words.chinese[13] = _T("n. 主管、執行者；adj. 行政的、管理的");	 words.ps[13] = _T("\r\nps. execute (2703)(v) 施行、執行");
	words.word[14] = _T("locate"); words.number[14] = 145; words.chinese[14] = _T("v. 使位於、設置於");	 words.ps[14] = _T("\r\nps. location (n) 位置；located (adj) 座落~的、位於~的\r\n    relocate (v) 將~遷往別處、重新安置");
	words.word[15] = _T("participant"); words.number[15] = 148; words.chinese[15] = _T("n. 參加者、參與者");	 words.ps[15] = _T("\r\nps. participate (v) 參加；participation (n) 參加、餐與");
	words.word[16] = _T("reserve"); words.number[16] = 153; words.chinese[16] = _T("v. 預訂(座位、房間)、保留(權利等)");	 words.ps[16] = _T("\r\nps. reservation (n) 預訂");
	words.word[17] = _T("expense"); words.number[17] = 156; words.chinese[17] = _T("n. 支出、花費、經費");	 words.ps[17] = _T("\r\nps. expensive (adj) 昂貴的；inexpensive (adj) 不貴的");
	words.word[18] = _T("opportunity"); words.number[18] = 158; words.chinese[18] = _T("n. 機會、良機");	 words.ps[18] = _T("");
	words.word[19] = _T("transfer"); words.number[19] = 161; words.chinese[19] = _T("n. 調動、轉換；v. 使轉換、轉讓");	 words.ps[19] = _T("\r\nps. transferable (adj) 可轉移的、可調動的");
	words.word[20] = _T("refund"); words.number[20] = 165; words.chinese[20] = _T("n. 退款、償還金額；v.退款、償付");	 words.ps[20] = _T("\r\nps. refundable (adj) 可退還的、可償還的");
	words.word[21] = _T("expand"); words.number[21] = 168; words.chinese[21] = _T("v. 擴大、(將事業)擴充");	 words.ps[21] = _T("\r\nps. expansion (n) 擴充、擴大；expansive (adj) 廣大的、遼闊的");
	words.word[22] = _T("prepare"); words.number[22] = 171; words.chinese[22] = _T("v. 準備、預備、籌劃");	 words.ps[22] = _T("\r\nps. preparation (n) 準備");
	words.word[23] = _T("register"); words.number[23] = 175; words.chinese[23] = _T("v. 註冊、登記；n. 登記、註冊");	 words.ps[23] = _T("\r\nps. registration (n) 註冊；registrar (n) 登記員");
	words.word[24] = _T("benefit"); words.number[24] = 178; words.chinese[24] = _T("n. 受益、得到利益；n. 利益、優惠、津貼");	 words.ps[24] = _T("\r\nps. beneficial (adj) 有益的");
	words.word[25] = _T("receipt"); words.number[25] = 180; words.chinese[25] = _T("n. 收據、收到、收到的款項");	 words.ps[25] = _T("\r\nps. recepient (1298)(n) 受領者、(adj) 可接受的、能接受的");
	words.word[26] = _T("organization"); words.number[26] = 183; words.chinese[26] = _T("n. 組織、機關、團體");	 words.ps[26] = _T("\r\nps. organize (v) 組織；organizational (adj) 組織的\r\n    reorganize (v) 再/重新組織");
	words.word[27] = _T("colleague"); words.number[27] = 186; words.chinese[27] = _T("n. 同事、同僚 = coworker");	 words.ps[27] = _T("");
	words.word[28] = _T("replace"); words.number[28] = 190; words.chinese[28] = _T("v. 取代、替換");	 words.ps[28] = _T("\r\nps. replacement (n) 更換、接替者");
	words.word[29] = _T("despite"); words.number[29] = 192; words.chinese[29] = _T("prep. 儘管");	 words.ps[29] = _T("\r\nps. 等於 in spite of ");
	words.word[30] = _T("clear"); words.number[30] = 194; words.chinese[30] = _T("v. 允許通過、准許進入或離開；adj. 清晰的、明確的");	 words.ps[30] = _T("");
	words.word[31] = _T("forward"); words.number[31] = 198; words.chinese[31] = _T("v. 轉達、轉發；adv. 向前地；adj. 向前的、前瞻性的");	 words.ps[31] = _T("");

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
	words.word[0] = _T("property"); words.number[0] = 203; words.chinese[0] = _T("n.財產、所有物、不動產");	 words.ps[0] = _T("");
	words.word[1] = _T("consumer"); words.number[1] = 206; words.chinese[1] = _T("n. 消費者");	 words.ps[1] = _T("\r\nps. consume (v) 消費；consumption (n) 消費");
	words.word[2] = _T("raise"); words.number[2] = 208; words.chinese[2] = _T("n. 提高；v. 升起、使向上");	 words.ps[2] = _T("");
	words.word[3] = _T("indicate"); words.number[3] = 211; words.chinese[3] = _T("v. 表示、指出、代表、象徵");	 words.ps[3] = _T("\r\nps. indication (n) 指示、徵兆；indicator (n) 指示器、指針；\r\n    indicative (adj) 表示的、暗示的");
	words.word[4] = _T("permit"); words.number[4] = 214; words.chinese[4] = _T("v. 許可、允許；n. 許可(證)");	 words.ps[4] = _T("\r\nps. permission (n) 許可、允許");
	words.word[5] = _T("rent"); words.number[5] = 216; words.chinese[5] = _T("v. (房屋、土地等)租借；n. 租借、租金、房租");	 words.ps[5] = _T("\r\nps. rental (n) 租借、出租(物)；(adj) 供出租的");
	words.word[6] = _T("shipment"); words.number[6] = 218; words.chinese[6] = _T("n. 運送、裝運");	 words.ps[6] = _T("\r\nps. shipping (n) 運輸(業)；ship (n) 船、艦");
	words.word[7] = _T("distribute"); words.number[7] = 222; words.chinese[7] = _T("v. 分發、分配");	 words.ps[7] = _T("\r\nps. distribution (n) 分發、分配；distributor (n) 批發商");
	words.word[8] = _T("stock"); words.number[8] = 226; words.chinese[8] = _T("n. 股票 (=share)、庫存、儲藏；v. 存貨");	 words.ps[8] = _T("\r\nps. stockholder (n) 股東");
	words.word[9] = _T("regulation"); words.number[9] = 229; words.chinese[9] = _T("n. 規定、規範、法規");	 words.ps[9] = _T("\r\nps. regulate (v) 規範、管理、調整");
	words.word[10] = _T("exhibit"); words.number[10] = 233; words.chinese[10] = _T("v. 展示、顯露；n. 展示");	 words.ps[10] = _T("\r\nps. exhibition (n) 展示會");
	words.word[11] = _T("estimate"); words.number[11] = 236; words.chinese[11] = _T("n. 估價、報價、估計、評價；v. 估價");	 words.ps[11] = _T("");
	words.word[12] = _T("quarter"); words.number[12] = 241; words.chinese[12] = _T("n. 季節、三個月、四分之一；adj. 四分之一的；v. 把~四等份");	 words.ps[12] = _T("\r\nps. quarterly (adj) 季的；(adv) 一季地");
	words.word[13] = _T("necessary"); words.number[13] = 244; words.chinese[13] = _T("adj. 必要的、不能沒有的；n. 必需品");	 words.ps[13] = _T("\r\nps. necessity (n) 必要、必需品；necessitate (v) 使成為必需");
	words.word[14] = _T("encourage"); words.number[14] = 245; words.chinese[14] = _T("v. 鼓勵、促進");	 words.ps[14] = _T("\r\nps. encouragement (n) 獎勵、促進");
	words.word[15] = _T("resume"); words.number[15] = 248; words.chinese[15] = _T("n. 履歷表；v. 重新開始、恢復、繼續");	 words.ps[15] = _T("");
	words.word[16] = _T("responsible"); words.number[16] = 253; words.chinese[16] = _T("adj. 有責任的、可信賴的");	 words.ps[16] = _T("\r\nps. responsibility (n) 責任");
	words.word[17] = _T("invoice"); words.number[17] = 255; words.chinese[17] = _T("n. 出貨明細、發貨單");	 words.ps[17] = _T("");
	words.word[18] = _T("standard"); words.number[18] = 257; words.chinese[18] = _T("n. 標準、基準、規格；adj. 標準的、規範的");	 words.ps[18] = _T("\r\nps. standardize (v) 使規格化、使標準化；standardization (n) 標準化");
	words.word[19] = _T("legal"); words.number[19] = 261; words.chinese[19] = _T("adj. 法律的、合法的");	 words.ps[19] = _T("\r\nps. 相反詞：illegal (adj) 不合法");
	words.word[20] = _T("confirm"); words.number[20] = 264; words.chinese[20] = _T("v. 確認；承認、確定");	 words.ps[20] = _T("\r\nps. confirmation (n) 確認；recomfirm (v) 再確認");
	words.word[21] = _T("extend"); words.number[21] = 266; words.chinese[21] = _T("v. 延長、擴大、伸展");	 words.ps[21] = _T("\r\nps. extensive (adj) 廣闊的、廣泛的、大量的");
	words.word[22] = _T("reduce"); words.number[22] = 269; words.chinese[22] = _T("v. 減少、降低、縮短");	 words.ps[22] = _T("\r\nps. reduction (n) 減少");
	words.word[23] = _T("individual"); words.number[23] = 273; words.chinese[23] = _T("adj. 個人的、個別的；n. 個人");	 words.ps[23] = _T("\r\nps. individually (adv) 個別地");
	words.word[24] = _T("limit"); words.number[24] = 276; words.chinese[24] = _T("v. 限制、限定；n. 界線、限制、境界");	 words.ps[24] = _T("\r\nps. limitation (n) 限制、極限");
	words.word[25] = _T("appreciate"); words.number[25] = 279; words.chinese[25] = _T("v. 感謝、欣賞、正確地評價");	 words.ps[25] = _T("\r\nps. appreciation (n) 感激、賞識、感謝");
	words.word[26] = _T("deposit"); words.number[26] = 282; words.chinese[26] = _T("n. 存款、訂金、保證金；v. 存入銀行、付(訂金)");	 words.ps[26] = _T("");
	words.word[27] = _T("revise"); words.number[27] = 285; words.chinese[27] = _T("v. 修正、修訂");	 words.ps[27] = _T("\r\nps. revision (n) 修正、修訂本");
	words.word[28] = _T("notify"); words.number[28] = 291; words.chinese[28] = _T("v. 通知、通報");	 words.ps[28] = _T("\r\nps. notification (n) 通知、通報");
	words.word[29] = _T("regard"); words.number[29] = 293; words.chinese[29] = _T("v. 認為是~、評價、考慮；n. 考慮、尊重、問候");	 words.ps[29] = _T("\r\nps. 相反詞：disregard (v) 漠視、忽視、不尊重；(n) 不關心、漠視");
	words.word[30] = _T("select"); words.number[30] = 297; words.chinese[30] = _T("v. 選擇、挑選、選拔；adj. 精選的；n. 精選");	 words.ps[30] = _T("\r\nps. selection (n) 選擇、精選");
	words.word[31] = _T("identification"); words.number[31] = 299; words.chinese[31] = _T("n. 身分證明、驗明");	 words.ps[31] = _T("\r\nps. identical (2508)(adj) 同樣的、一模一樣的；\r\n    identify (v) 確認、鑑別出、發現");

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
	words.word[0] = _T("local"); words.number[0] = 303; words.chinese[0] = _T("adj. 當地的、地方的");	 words.ps[0] = _T("\r\nps. localize (v) 當地化；localization (n) 當地化、本土化");
	words.word[1] = _T("contract"); words.number[1] = 305; words.chinese[1] = _T("n. 合約(書)、簽訂合約、將工作承包給");	 words.ps[1] = _T("");
	words.word[2] = _T("board"); words.number[2] = 309; words.chinese[2] = _T("n. 董事會、理事會、委員、部、會、局；v. 登上");	 words.ps[2] = _T("");
	words.word[3] = _T("potential"); words.number[3] = 311; words.chinese[3] = _T("n. 潛力、可能性；adj. 可能的、潛在的");	 words.ps[3] = _T("");
	words.word[4] = _T("delay"); words.number[4] = 314; words.chinese[4] = _T("v. 延遲、耽擱；n. 延遲、滯延");	 words.ps[4] = _T("");
	words.word[5] = _T("procedure"); words.number[5] = 318; words.chinese[5] = _T("n. 程序、手續");	 words.ps[5] = _T("");
	words.word[6] = _T("approve"); words.number[6] = 322; words.chinese[6] = _T("v. 批准、認可、贊成");	 words.ps[6] = _T("\r\nps. approval (n) 贊成、同意、批准");
	words.word[7] = _T("institute"); words.number[7] = 323; words.chinese[7] = _T("n. 機構、協會；v. 設立、制定");	 words.ps[7] = _T("\r\nps. institution (n) 機構、設立、制度、習俗");
	words.word[8] = _T("issue"); words.number[8] = 327; words.chinese[8] = _T("v. 發出、頒布；n. 爭議、發行、期號");	 words.ps[8] = _T("");
	words.word[9] = _T("branch"); words.number[9] = 328; words.chinese[9] = _T("n. 分公司、分行、樹枝；v. 分支、分岔");	 words.ps[9] = _T("");
	words.word[10] = _T("predict"); words.number[10] = 331; words.chinese[10] = _T("v. 預測、預言");	 words.ps[10] = _T("\r\nps. prediction (n) 預見、預言；predictable (adj) 可預料的");
	words.word[11] = _T("maintenance"); words.number[11] = 335; words.chinese[11] = _T("n. 保養管理、持續、維持");	 words.ps[11] = _T("\r\nps. maintain (v) 維修、保養、維持、堅持");
	words.word[12] = _T("entire"); words.number[12] = 339; words.chinese[12] = _T("adj. 整個的、全體的、全部的");	 words.ps[12] = _T("\r\nps. 全部的 = entirety of；entirely (adv) 完全地、徹底地");
	words.word[13] = _T("lower"); words.number[13] = 342; words.chinese[13] = _T("v. 降低、減少、貶低、出現愁容；adj. 下方的、次級的");	 words.ps[13] = _T("");
	words.word[14] = _T("shift"); words.number[14] = 346; words.chinese[14] = _T("n. 輪值班、變化、轉換；v. 改變位置或方向、轉移");	 words.ps[14] = _T("");
	words.word[15] = _T("attach"); words.number[15] = 349; words.chinese[15] = _T("v. 貼上、附上、使附屬");	 words.ps[15] = _T("\r\nps. 相反詞：detach (v)(2587) 摘下。attached (adj) 附加的、附屬的；\r\n    attachment (n) 附帶、附件");
	words.word[16] = _T("claim"); words.number[16] = 352; words.chinese[16] = _T("v. 聲稱、要求、主張；n. 主張、要求");	 words.ps[16] = _T("");
	words.word[17] = _T("promotion"); words.number[17] = 355; words.chinese[17] = _T("n. 晉級、晉升、促銷");	 words.ps[17] = _T("");
	words.word[18] = _T("publication"); words.number[18] = 358; words.chinese[18] = _T("n. 出版(品)、發行");	 words.ps[18] = _T("\r\nps. publish (v) 出版、發行；publishing (n) 出版業");
	words.word[19] = _T("suppose"); words.number[19] = 360; words.chinese[19] = _T("v. 認為必須、假定、想像、推測");	 words.ps[19] = _T("");
	words.word[20] = _T("reference"); words.number[20] = 364; words.chinese[20] = _T("n. 參考、提及、推薦書");	 words.ps[20] = _T("\r\nps. refer to (v) 參考、提及");
	words.word[21] = _T("establish"); words.number[21] = 367; words.chinese[21] = _T("v. 建立、設立");	 words.ps[21] = _T("\r\nps. establishment (n) 設立、創立；established (adj) 制定的、設立的");
	words.word[22] = _T("merchandise"); words.number[22] = 370; words.chinese[22] = _T("n. 商品、產品");	 words.ps[22] = _T("\r\nps. merchant (n) 商人");
	words.word[23] = _T("associate"); words.number[23] = 374; words.chinese[23] = _T("n. 夥伴、同事；v. 使有關聯；adj. 同事的、職級較小的");	 words.ps[23] = _T("\r\nps. association (n) 團體、協會");
	words.word[24] = _T("banquet"); words.number[24] = 378; words.chinese[24] = _T("n. (正式的)宴會、盛宴");	 words.ps[24] = _T("");
	words.word[25] = _T("lean"); words.number[25] = 381; words.chinese[25] = _T("v. 靠在、使斜靠、傾向、依靠");	 words.ps[25] = _T("");
	words.word[26] = _T("examine"); words.number[26] = 384; words.chinese[26] = _T("v. 檢視、檢查、診察、測驗");	 words.ps[26] = _T("\r\nps. examination (n) 調查、審查、測驗；examiner (n) 審查員、主考官");
	words.word[27] = _T("finance"); words.number[27] = 386; words.chinese[27] = _T("v. 提供資金、籌款；財政、財務");	 words.ps[27] = _T("\r\nps. finacial (adj) 財政上的；finacing (n) 調度資金");
	words.word[28] = _T("appropriate"); words.number[28] = 391; words.chinese[28] = _T("adj. 適當的、合適的");	 words.ps[28] = _T("\r\nps. 相反詞：inappropriate (adj) 不適合的。\r\n    appropriately (adv) 適當地、合適地");
	words.word[29] = _T("warranty"); words.number[29] = 393; words.chinese[29] = _T("n. (品質)保證、保證書");	 words.ps[29] = _T("");
	words.word[30] = _T("investment"); words.number[30] = 396; words.chinese[30] = _T("n. 抔資、出資");	 words.ps[30] = _T("\r\nps. invest (v) 投資、出資；investor (n) 投資者");
	words.word[31] = _T("certificate"); words.number[31] = 400; words.chinese[31] = _T("n. 證明書、發證書給");	 words.ps[31] = _T("\r\nps. certification (n) 認證書");

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
	words.word[0] = _T("release"); words.number[0] = 403; words.chinese[0] = _T("v. 上市、發表、公開、釋放；n. 發表");	 words.ps[0] = _T("");
	words.word[1] = _T("concerning"); words.number[1] = 405; words.chinese[1] = _T("prep. 關於、與~有關");	 words.ps[1] = _T("\r\nps. 相似詞：regarding");
	words.word[2] = _T("departure"); words.number[2] = 407; words.chinese[2] = _T("n. 出發、離職");	 words.ps[2] = _T("\r\nps. depart (v) 出發、離開");
	words.word[3] = _T("postpone"); words.number[3] = 410; words.chinese[3] = _T("v. 延期、延後");	 words.ps[3] = _T("");
	words.word[4] = _T("resident"); words.number[4] = 413; words.chinese[4] = _T("n. 居民；居住者；adj. 居住的");	 words.ps[4] = _T("\r\nps. residential (adj) 居民的、有關住宅的；residence (n) 居住、居留權");
	words.word[5] = _T("apologize"); words.number[5] = 416; words.chinese[5] = _T("v. 道歉");	 words.ps[5] = _T("\r\nps. apology (n) 道歉");
	words.word[6] = _T("complaint"); words.number[6] = 420; words.chinese[6] = _T("n. 抱怨、怨言");	 words.ps[6] = _T("\r\nps. complain (v) 提出不滿、抱怨");
	words.word[7] = _T("suggestion"); words.number[7] = 424; words.chinese[7] = _T("n. 提議、建議、暗示");	 words.ps[7] = _T("\r\nps. suggest (v) 提議、建議");
	words.word[8] = _T("involve"); words.number[8] = 428; words.chinese[8] = _T("v. 牽涉、連累、包含、需要");	 words.ps[8] = _T("\r\nps. involvement (n) 連累、牽連");
	words.word[9] = _T("celebrate"); words.number[9] = 431; words.chinese[9] = _T("v. 慶祝");	 words.ps[9] = _T("\r\nps. celebration (n) 慶祝活動、慶典");
	words.word[10] = _T("share"); words.number[10] = 435; words.chinese[10] = _T("n. 股票、市場占有率");	 words.ps[10] = _T("\r\nps. 相似詞：stock (266) 股票。shareholder (n) 股東");
	words.word[11] = _T("promptly"); words.number[11] = 438; words.chinese[11] = _T("adv. 迅速地、敏捷地、立即地");	 words.ps[11] = _T("\r\nps. prompt (adj) 迅速的、敏捷的、即時的；promptness (n) 迅速姓");
	words.word[12] = _T("efficiency"); words.number[12] = 440; words.chinese[12] = _T("n. 效率");	 words.ps[12] = _T("\r\nps. 相反詞：inefficiency (n) 無效率；\r\n    efficient (adj) 有效率的、efficiently (adv) 有效率地");
	words.word[13] = _T("attention"); words.number[13] = 443; words.chinese[13] = _T("n. 注意力、關心");	 words.ps[13] = _T("");
	words.word[14] = _T("convenient"); words.number[14] = 447; words.chinese[14] = _T("adj. 便利的、方便的");	 words.ps[14] = _T("\r\nps. 相反詞：inconvenient (adj) 不便的。\r\n    conveniently (adj) 不便地");
	words.word[15] = _T("approach"); words.number[15] = 449; words.chinese[15] = _T("v. 接近、靠近、著手處理；n. 接近、方法、接洽");	 words.ps[15] = _T("");
	words.word[16] = _T("revenue"); words.number[16] = 451; words.chinese[16] = _T("n. 收益、收入、稅收");	 words.ps[16] = _T("");
	words.word[17] = _T("secure"); words.number[17] = 454; words.chinese[17] = _T("v. 保護、保衛安全、獲得；adj. 安全的");	 words.ps[17] = _T("\r\nps. 相反詞：insecure (adj) 不安全的。securely (adv) 安全地");
	words.word[18] = _T("analysis"); words.number[18] = 458; words.chinese[18] = _T("n. 分析、解析");	 words.ps[18] = _T("\r\nps. analyze (v) 分析、解析；analyst (n) 分析師、分析者");
	words.word[19] = _T("compliance"); words.number[19] = 462; words.chinese[19] = _T("n. 遵守");	 words.ps[19] = _T("\r\nps. comply (v) 遵從、服從");
	words.word[20] = _T("instrument"); words.number[20] = 465; words.chinese[20] = _T("n. 儀器、工具、樂器");	 words.ps[20] = _T("");
	words.word[21] = _T("volunteer"); words.number[21] = 468; words.chinese[21] = _T("v. 自願服務、做義工、自願做；n. 自願服務者、義工");	 words.ps[21] = _T("\r\nps. voluntary (adj) 自發的、自願的");
	words.word[22] = _T("accord"); words.number[22] = 471; words.chinese[22] = _T("v. 與~符合；使~一致；n. 一致、協定");	 words.ps[22] = _T("\r\nps. accordance (n) 一致、和諧；according to (prep) 根據~");
	words.word[23] = _T("collection"); words.number[23] = 474; words.chinese[23] = _T("n. 收藏、收集、募金、徵收");	 words.ps[23] = _T("\r\nps. collect (v) 收集；collector (n) 收集者、收稅員");
	words.word[24] = _T("launch"); words.number[24] = 477; words.chinese[24] = _T("v. 使上市、使開始、使登場；n. 上市");	 words.ps[24] = _T("");
	words.word[25] = _T("competitive"); words.number[25] = 480; words.chinese[25] = _T("adj. 有競爭力的");	 words.ps[25] = _T("\r\nps. competitively (adv) 具有競爭力地；competition (n) 競爭");
	words.word[26] = _T("respond"); words.number[26] = 484; words.chinese[26] = _T("v. 回應、回答");	 words.ps[26] = _T("\r\nps. response (v) 回答、答覆、反應；responsive (adj) 有回答的、有反應的");
	words.word[27] = _T("guarantee"); words.number[27] = 488; words.chinese[27] = _T("n. 保證(書)、擔保(品)");	 words.ps[27] = _T("\r\nps. 相似詞：warranty (393)");
	words.word[28] = _T("progress"); words.number[28] = 490; words.chinese[28] = _T("n. 進步、前進；v. 進步、進展");	 words.ps[28] = _T("\r\nps. progressive (adj) 漸進的、進步的；progressively (adv) 日益增加地、前進地");
	words.word[29] = _T("prevent"); words.number[29] = 493; words.chinese[29] = _T("v. 防止、預防");	 words.ps[29] = _T("\r\nps. prevention (n) 預防；preventive = preventative (adj) 預防的");
	words.word[30] = _T("lease"); words.number[30] = 496; words.chinese[30] = _T("v. 租借；n. 租借契約");	 words.ps[30] = _T("");
	words.word[31] = _T("headquarters"); words.number[31] = 498; words.chinese[31] = _T("n. 總公司、總部");	 words.ps[31] = _T("\r\nps. headquartered (adj) 設立總公司/總部於~的");

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
	words.word[0] = _T("proceed"); words.number[0] = 501; words.chinese[0] = _T("v. 前行、繼續進行");	 words.ps[0] = _T("\r\nps. proceeds (n) 收入、收益；proceedings (n) 事件、過程");
	words.word[1] = _T("related"); words.number[1] = 505; words.chinese[1] = _T("adj. 相關的、關聯的");	 words.ps[1] = _T("\r\nps. relate (v) 認同、使有關聯；relation (n) 關係");
	words.word[2] = _T("fold"); words.number[2] = 507; words.chinese[2] = _T("v. 摺疊、合攏");	 words.ps[2] = _T("\r\nps. 相反詞：unfold (v) 翻開。folder (n) 資料夾");
	words.word[3] = _T("qualify"); words.number[3] = 510; words.chinese[3] = _T("v. 使有資格、證明合格");	 words.ps[3] = _T("\r\nps. 相反詞：disqualify (v) 取消資格、使不合格。\r\n    qualified (adj) 有資格的；qualification (n) 資格、能力");
	words.word[4] = _T("reputation"); words.number[4] = 513; words.chinese[4] = _T("n. 名譽、信譽");	 words.ps[4] = _T("\r\nps.  = repute");
	words.word[5] = _T("donate"); words.number[5] = 515; words.chinese[5] = _T("v. 捐贈、捐助");	 words.ps[5] = _T("\r\nps. donation (n) 捐助、捐贈；donor (n) 捐贈者");
	words.word[6] = _T("strategy"); words.number[6] = 519; words.chinese[6] = _T("n. 策略、戰略");	 words.ps[6] = _T("\r\nps. strategic (adj) 策略的；strategically (adv) 策略上地");
	words.word[7] = _T("acquire"); words.number[7] = 522; words.chinese[7] = _T("v. 取得(財產、權利等)、獲得");	 words.ps[7] = _T("\r\nps. acquisition (n) 收購、獲得、取得、獲得物");
	words.word[8] = _T("vary"); words.number[8] = 526; words.chinese[8] = _T("v. 使不同、呈多樣化");	 words.ps[8] = _T("\r\nps. various (adj) 多元的、不同的；variety (n) 多樣性");
	words.word[9] = _T("accompany"); words.number[9] = 529; words.chinese[9] = _T("v. 陪同、伴隨、與~同時發生");	 words.ps[9] = _T("");
	words.word[10] = _T("contribute"); words.number[10] = 533; words.chinese[10] = _T("v. 捐贈、贈與");	 words.ps[10] = _T("\r\nps. contribution (n) 貢獻、捐贈");
	words.word[11] = _T("mechanic"); words.number[11] = 536; words.chinese[11] = _T("n. 機械工、技師");	 words.ps[11] = _T("\r\nps. mechanical (adj) 機械上的");
	words.word[12] = _T("inventory"); words.number[12] = 540; words.chinese[12] = _T("n. 存貨、庫存、存貨清單；v. 盤存、登入存貨目錄");	 words.ps[12] = _T("");
	words.word[13] = _T("assembly"); words.number[13] = 543; words.chinese[13] = _T("n. 裝配、集會、與會者");	 words.ps[13] = _T("\r\nps. 相反詞：disassembly (n) 拆解、分解。\r\n    assemble (v) 聚集(人)、組裝(機械等)");
	words.word[14] = _T("upcoming"); words.number[14] = 547; words.chinese[14] = _T("adj. 即將到來的");	 words.ps[14] = _T("");
	words.word[15] = _T("anticipate"); words.number[15] = 550; words.chinese[15] = _T("v. 期望、預料、預見到");	 words.ps[15] = _T("\r\nps. anticipation (n) 預料、預期、期盼；anticipated (adj) 預期的");
	words.word[16] = _T("similar"); words.number[16] = 553; words.chinese[16] = _T("adj. 類似的、相似的");	 words.ps[16] = _T("\r\nps. similarity (n) 類似、相似點");
	words.word[17] = _T("forecast"); words.number[17] = 555; words.chinese[17] = _T("n. 預測、預料；v. 預報、預測");	 words.ps[17] = _T("");
	words.word[18] = _T("term"); words.number[18] = 559; words.chinese[18] = _T("n. 條款、條件；n. 期間、用語");	 words.ps[18] = _T("");
	words.word[19] = _T("significant"); words.number[19] = 561; words.chinese[19] = _T("adj. 顯著的、重要的");	 words.ps[19] = _T("\r\nps. significantly (adv) 相當地、顯著地；significance (n) 重要性");
	words.word[20] = _T("lecture"); words.number[20] = 564; words.chinese[20] = _T("n. 演講、授課、告誡、責備；v. 授課、演講");	 words.ps[20] = _T("\r\nps. lecturer (n) 演講者、講師");
	words.word[21] = _T("reliable"); words.number[21] = 567; words.chinese[21] = _T("adj. 可靠的、可信賴的");	 words.ps[21] = _T("\r\nps. reliably (adv) 可靠地；reliability (n) 信賴度、可信度\r\n    相反詞：unreliable (adj) 不可信賴的");
	words.word[22] = _T("general"); words.number[22] = 571; words.chinese[22] = _T("adj. 大體的、一般的");	 words.ps[22] = _T("\r\nps. generally (adv) 一般地；generalize (v) 一般化");
	words.word[23] = _T("prior"); words.number[23] = 574; words.chinese[23] = _T("adj. 在前的、之前的、優先的");	 words.ps[23] = _T("\r\nps. priority (n) 優先順位、優先權");
	words.word[24] = _T("initial"); words.number[24] = 576; words.chinese[24] = _T("adj. 最初的、開始的；v. 簽姓名的起首字母");	 words.ps[24] = _T("\r\nps. initiate (v)(2019) 開始、著手；initially (adv) 起初地、開頭地");
	words.word[25] = _T("pour"); words.number[25] = 579; words.chinese[25] = _T("v. 倒");	 words.ps[25] = _T("");
	words.word[26] = _T("disappoint"); words.number[26] = 584; words.chinese[26] = _T("v. 使失望、使落空");	 words.ps[26] = _T("\r\nps. disappointed (adj) 感到失望的；disappointing (adj) 令人失望的");
	words.word[27] = _T("attendant"); words.number[27] = 587; words.chinese[27] = _T("n. 服務員、隨行員");	 words.ps[27] = _T("\r\nps. attendance (n) 參加、出席；attendee (n) 出席者");
	words.word[28] = _T("audit"); words.number[28] = 591; words.chinese[28] = _T("n. 稽核、查帳；v. 稽核、旁聽");	 words.ps[28] = _T("\r\nps. auditor (n) 稽核者、旁聽生");
	words.word[29] = _T("source"); words.number[29] = 594; words.chinese[29] = _T("n. 來源、出處、消息來源");	 words.ps[29] = _T("");
	words.word[30] = _T("inspection"); words.number[30] = 596; words.chinese[30] = _T("n. 檢查、檢驗、視察");	 words.ps[30] = _T("\r\nps. inspect (v) 審查、檢查；inspector (n) 稽查員、督學");
	words.word[31] = _T("attract"); words.number[31] = 600; words.chinese[31] = _T("v. 吸引、引起");	 words.ps[31] = _T("\r\nps. attractive (adj) 有魅力的、有吸引力的；attraction (n) 景點、魅力");

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
	words.word[0] = _T("income"); words.number[0] = 603; words.chinese[0] = _T("n. 收入、所得");	 words.ps[0] = _T("");
	words.word[1] = _T("recognize"); words.number[1] = 606; words.chinese[1] = _T("v. 肯定、認得、承認");	 words.ps[1] = _T("\r\nps. recognizable (adj) 可辨認的；recognition (n) 認可、表彰、認識");
	words.word[2] = _T("baggage"); words.number[2] = 609; words.chinese[2] = _T("n. 行李");	 words.ps[2] = _T("\r\nps. 相似詞：luggage");
	words.word[3] = _T("accommodate"); words.number[3] = 612; words.chinese[3] = _T("v. 容納、能提供~膳宿、通融");	 words.ps[3] = _T("\r\nps. accommodation (n) 收容、膳宿");
	words.word[4] = _T("force"); words.number[4] = 615; words.chinese[4] = _T("v. 迫使、強迫；n. 力、影響力");	 words.ps[4] = _T("");
	words.word[5] = _T("recruit"); words.number[5] = 619; words.chinese[5] = _T("v. 招募、聘用；n. 新成員、新手");	 words.ps[5] = _T("\r\nps. recruitment (n) 招募");
	words.word[6] = _T("tend"); words.number[6] = 622; words.chinese[6] = _T("v. 傾向於、照顧");	 words.ps[6] = _T("\r\nps. tendency (n) 傾向、風潮、趨勢");
	words.word[7] = _T("district"); words.number[7] = 625; words.chinese[7] = _T("n. (行政區等的)區域、地區");	 words.ps[7] = _T("");
	words.word[8] = _T("reflect"); words.number[8] = 629; words.chinese[8] = _T("v. 反映、反射");	 words.ps[8] = _T("\r\nps. reflection (n) 反映、反射；reflective (adj) 反射的、反映的");
	words.word[9] = _T("frequent"); words.number[9] = 631; words.chinese[9] = _T("adj. 經常的、頻繁的");	 words.ps[9] = _T("\r\nps. frequently (adv) 屢次地。相反詞：infrequenct (adj) 不頻繁的");
	words.word[10] = _T("depend"); words.number[10] = 635; words.chinese[10] = _T("v. 依靠、信賴");	 words.ps[10] = _T("\r\nps. dependable (adj) 可靠的；independent (adj) 獨立的、自主的");
	words.word[11] = _T("accurate"); words.number[11] = 638; words.chinese[11] = _T("adj. 準確的、精確的");	 words.ps[11] = _T("\r\nps. 相反詞：inaccurate (adj) 不正確的。accurately (adv) 正確地\r\n    accuracy (n) 正確性");
	words.word[12] = _T("valid"); words.number[12] = 641; words.chinese[12] = _T("adj. 有效的、合法的");	 words.ps[12] = _T("\r\nps. validity (n) 正當性、效力、合法性");
	words.word[13] = _T("capacity"); words.number[13] = 644; words.chinese[13] = _T("n. 生產力、容量、能力、才能、資格、地位");	 words.ps[13] = _T("\r\nps. capable (adj) 能夠做的、有能力的");
	words.word[14] = _T("transport"); words.number[14] = 646; words.chinese[14] = _T("v. 運送、輸送；n. 運送、交通工具");	 words.ps[14] = _T("\r\nps. transportation (n) 運送、交通、運輸工具\r\n    transporter (n) 運送員、運送車輛或大型貨物的車輛");
	words.word[15] = _T("retail"); words.number[15] = 649; words.chinese[15] = _T("n. 零售；adj. 零售的；v. 零售");	 words.ps[15] = _T("\r\nps. retailer (n) 零售商");
	words.word[16] = _T("overhead"); words.number[16] = 652; words.chinese[16] = _T("n. 經常開支(租金、電費、薪資等)；adv. 在頭頂上、高高地；adj. 在頭頂上的");	 words.ps[16] = _T("");
	words.word[17] = _T("fiscal"); words.number[17] = 656; words.chinese[17] = _T("adj. 會計的、財政上的");	 words.ps[17] = _T("");
	words.word[18] = _T("immediate"); words.number[18] = 658; words.chinese[18] = _T("adj. 即時的、當前的、直接的");	 words.ps[18] = _T("\r\nps. immediately (adv) 立即地");
	words.word[19] = _T("translation"); words.number[19] = 662; words.chinese[19] = _T("n. 翻譯、譯文、轉化");	 words.ps[19] = _T("\r\nps. translate (v) 翻譯、解釋；translator (n) 譯者");
	words.word[20] = _T("admit"); words.number[20] = 666; words.chinese[20] = _T("v. 許可、承認");	 words.ps[20] = _T("\r\nps. admission (n) 許可、承認");
	words.word[21] = _T("export"); words.number[21] = 669; words.chinese[21] = _T("n. 輸出(品)；v. 輸出");	 words.ps[21] = _T("\r\nps. 相反詞：import (n) 進口、(v) 進口");
	words.word[22] = _T("temporary"); words.number[22] = 671; words.chinese[22] = _T("adj. 臨時的；n. 臨時工、臨時事物");	 words.ps[22] = _T("\r\nps. temporarily (adj) 一時地、臨時地");
	words.word[23] = _T("enroll"); words.number[23] = 675; words.chinese[23] = _T("v. 註冊、記載在名單上");	 words.ps[23] = _T("\r\nps. enrollment (n) 註冊、登記");
	words.word[24] = _T("screen"); words.number[24] = 679; words.chinese[24] = _T("v. 篩選、檢視、審查、放映；n. 銀幕、畫面、紗窗");	 words.ps[24] = _T("");
	words.word[25] = _T("enclose"); words.number[25] = 682; words.chinese[25] = _T("v. 一同封入(信封、公文夾)、圈住、圍住");	 words.ps[25] = _T("\r\nps. enclosure (n) 封入、圍欄/牆、附件");
	words.word[26] = _T("generate"); words.number[26] = 685; words.chinese[26] = _T("v. 產生、引起");	 words.ps[26] = _T("\r\nps. generation (n) 發生、世代、同時代的人；generator (n) 發電機");
	words.word[27] = _T("settle"); words.number[27] = 688; words.chinese[27] = _T("v. 解決(問題)、安頓、安排、償還支付、決定");	 words.ps[27] = _T("\r\nps. settlement (n) 解決、償還、清算、結帳");
	words.word[28] = _T("assist"); words.number[28] = 691; words.chinese[28] = _T("v. 協助、幫助");	 words.ps[28] = _T("\r\nps. assistant (n) 助手、輔佐人");
	words.word[29] = _T("verify"); words.number[29] = 694; words.chinese[29] = _T("v. 證實、證明、確認");	 words.ps[29] = _T("\r\nps. verification (n) 確認、證明");
	words.word[30] = _T("shortly"); words.number[30] = 698; words.chinese[30] = _T("adj. 即將、不久");	 words.ps[30] = _T("");
	words.word[31] = _T("agenda"); words.number[31] = 700; words.chinese[31] = _T("n. (會議的)議程、待議事項");	 words.ps[31] = _T("");

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
	words.word[0] = _T("figure"); words.number[0] = 701; words.chinese[0] = _T("n. 數字、金額、人物、人名");	 words.ps[0] = _T("");
	words.word[1] = _T("entitle"); words.number[1] = 704; words.chinese[1] = _T("v. 給予資格/權利、命名");	 words.ps[1] = _T("");
	words.word[2] = _T("specialize"); words.number[2] = 707; words.chinese[2] = _T("v. 專門從事、專攻");	 words.ps[2] = _T("\r\nps. specialization (n) 特殊化；specialized (adj) 專門的");
	words.word[3] = _T("decline"); words.number[3] = 710; words.chinese[3] = _T("v. 下降；減少、婉拒；n. 下跌、衰退");	 words.ps[3] = _T("");
	words.word[4] = _T("impress"); words.number[4] = 713; words.chinese[4] = _T("v. 給予深刻印象");	 words.ps[4] = _T("\r\nps. impressive (adj) 印象深刻的");
	words.word[5] = _T("resign"); words.number[5] = 715; words.chinese[5] = _T("v. 辭去、辭職");	 words.ps[5] = _T("\r\nps. resignation (n) 辭職、辭呈");
	words.word[6] = _T("eligible"); words.number[6] = 719; words.chinese[6] = _T("adj. 有資格的、適合的；n. 合格者、合適的人");	 words.ps[6] = _T("\r\nps. 相反詞：ineligible 無資格的");
	words.word[7] = _T("specific"); words.number[7] = 723; words.chinese[7] = _T("adj. 特定的、明確的、具體的");	 words.ps[7] = _T("\r\nps. specify (v) 具體指定、詳細說明");
	words.word[8] = _T("treatment"); words.number[8] = 725; words.chinese[8] = _T("n. 治療、對待、處理、待遇");	 words.ps[8] = _T("\r\nps. treat (v) 看待、對待、治療、請客；retreat (v) 撤退、使~後退");
	words.word[9] = _T("sufficient"); words.number[9] = 729; words.chinese[9] = _T("adj. 充分的、足夠的");	 words.ps[9] = _T("\r\nps. sufficiently (adv) 充分地；相反詞：insufficient 不足的");
	words.word[10] = _T("demonstrate"); words.number[10] = 731; words.chinese[10] = _T("v. 展示、示範、說明、證明、示威");	 words.ps[10] = _T("\r\nps. 相似詞：protest (1764) 示威");
	words.word[11] = _T("strike"); words.number[11] = 734; words.chinese[11] = _T("n. 罷工、罷課、打擊、攻擊；v. 打、揍、罷工");	 words.ps[11] = _T("");
	words.word[12] = _T("prescription"); words.number[12] = 739; words.chinese[12] = _T("n. 處方箋、處方藥品");	 words.ps[12] = _T("\r\nps. prescribe (v) 開立處方、指示");
	words.word[13] = _T("outstanding"); words.number[13] = 742; words.chinese[13] = _T("adj. 未付清的、未解決的、傑出的、突破的");	 words.ps[13] = _T("");
	words.word[14] = _T("sweep"); words.number[14] = 745; words.chinese[14] = _T("v. 打掃、掃過；n. 清掃、打掃");	 words.ps[14] = _T("");
	words.word[15] = _T("narrow"); words.number[15] = 747; words.chinese[15] = _T("v. 縮小、使變狹窄");	 words.ps[15] = _T("\r\nps. narrowly (adv) 侷限地、仔細地");
	words.word[16] = _T("instruct"); words.number[16] = 751; words.chinese[16] = _T("v. 指示、指導、通知");	 words.ps[16] = _T("\r\nps. instruction (n) 指示、教導、通知；instructor (n) 教師、指導者");
	words.word[17] = _T("capital"); words.number[17] = 754; words.chinese[17] = _T("n. 資本、資金、首都；adj. 主要的、資本的");	 words.ps[17] = _T("\r\nps. capitalize (v)(2747) 提供資本、以大寫書寫");
	words.word[18] = _T("detailed"); words.number[18] = 757; words.chinese[18] = _T("adj. 詳細的");	 words.ps[18] = _T("\r\nps. detail (n) 詳情、細節；(v) 詳述");
	words.word[19] = _T("achieve"); words.number[19] = 763; words.chinese[19] = _T("v. 達成、成就、完成");	 words.ps[19] = _T("\r\nps. achievement (n) 成就、達成");
	words.word[20] = _T("tenant"); words.number[20] = 765; words.chinese[20] = _T("n. 房客、承租者");	 words.ps[20] = _T("\r\nps. 相反詞：landlord (n) 房東、地主");
	words.word[21] = _T("manuscript"); words.number[21] = 768; words.chinese[21] = _T("n. 手稿、原稿；adj. 原稿的、手抄本的");	 words.ps[21] = _T("");
	words.word[22] = _T("renovation"); words.number[22] = 772; words.chinese[22] = _T("n. 更新、翻修");	 words.ps[22] = _T("\r\nps. 相似詞：remodeling 翻修。renovate (v) 更新、改善");
	words.word[23] = _T("adjust"); words.number[23] = 775; words.chinese[23] = _T("v. 調整、校正、調適");	 words.ps[23] = _T("\r\nps. adjustment (n) 調整、調節；adjustable (adj) 可調整的");
	words.word[24] = _T("grant"); words.number[24] = 778; words.chinese[24] = _T("n. 補助金、獎勵金、同意；v. 給予、同意");	 words.ps[24] = _T("");
	words.word[25] = _T("defect"); words.number[25] = 781; words.chinese[25] = _T("n. 缺點、缺陷");	 words.ps[25] = _T("\r\nps. defective (adj) 有缺陷的");
	words.word[26] = _T("foundation"); words.number[26] = 784; words.chinese[26] = _T("n. 創設、創立、基礎、基金會");	 words.ps[26] = _T("\r\nps. found (v) 創立、建立；founder (n) 創立者");
	words.word[27] = _T("destination"); words.number[27] = 788; words.chinese[27] = _T("n. 目的地、終點");	 words.ps[27] = _T("");
	words.word[28] = _T("bid"); words.number[28] = 792; words.chinese[28] = _T("v. 投標、出價、喊價、吩咐；n. 出價、投標");	 words.ps[28] = _T("\r\nps. bidder (n) 出價者、投標者");
	words.word[29] = _T("cooperate"); words.number[29] = 794; words.chinese[29] = _T("v. 合作、互助");	 words.ps[29] = _T("\r\nps. cooperation (n) 合作；cooperative (adj) 合作的");
	words.word[30] = _T("celebrity"); words.number[30] = 797; words.chinese[30] = _T("n. 名人、名流");	 words.ps[30] = _T("\r\nps. 相似詞：personality (1051) 名流");
	words.word[31] = _T("occupied"); words.number[31] = 800; words.chinese[31] = _T("adj. 使用中的");	 words.ps[31] = _T("\r\nps. occupation (n)(919) 職業");

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
	words.word[0] = _T("affordable"); words.number[0] = 802; words.chinese[0] = _T("adj. 負擔的起的、可負擔的");	 words.ps[0] = _T("\r\nps. afford (v) 買得起、有足夠的時間");
	words.word[1] = _T("patron"); words.number[1] = 805; words.chinese[1] = _T("n. 主顧客、贊助者、保護者");	 words.ps[1] = _T("\r\nps. patronage (n) 贊助、支持；patronize (v) 贊助、庇護、光顧");
	words.word[2] = _T("function"); words.number[2] = 808; words.chinese[2] = _T("v. 用做、運作、起作用；n. 機能、功能、宴會、集會");	 words.ps[2] = _T("\r\nps. 相反詞：malfunction (1539) n. 故障 v. 發生故障");
	words.word[3] = _T("concentrate"); words.number[3] = 811; words.chinese[3] = _T("v. 專心、集中、使濃縮");	 words.ps[3] = _T("\r\nps. concentration (n) 集中、專心、濃縮");
	words.word[4] = _T("medication"); words.number[4] = 814; words.chinese[4] = _T("n. 藥物、藥物治療");	 words.ps[4] = _T("\r\nps. medicine (n) 醫術、醫學、藥；medical (adj) 醫學的、醫療的");
	words.word[5] = _T("currency"); words.number[5] = 817; words.chinese[5] = _T("n. 貨幣、通貨、通用、流通");	 words.ps[5] = _T("");
	words.word[6] = _T("separate"); words.number[6] = 821; words.chinese[6] = _T("v. 隔開、區分、使分離、分手、分開");	 words.ps[6] = _T("\r\nps. separation (n) 分開、分離");
	words.word[7] = _T("cancellation"); words.number[7] = 825; words.chinese[7] = _T("n. 取消、解除");	 words.ps[7] = _T("\r\nps. cancel (v) 取消");
	words.word[8] = _T("charity"); words.number[8] = 828; words.chinese[8] = _T("n. 慈善團體、慈善");	 words.ps[8] = _T("\r\nps. charitable (adj) 慈悲的、寬厚的");
	words.word[9] = _T("judge"); words.number[9] = 831; words.chinese[9] = _T("v. 評判、判斷、審判；n. 法官");	 words.ps[9] = _T("\r\nps. judgment (n) 判斷、判決");
	words.word[10] = _T("alternative"); words.number[10] = 835; words.chinese[10] = _T("adj. 替代的、挑選其一的；n. 供選擇的事物");	 words.ps[10] = _T("\r\nps. alternatively (adv) 擇一地");
	words.word[11] = _T("union"); words.number[11] = 838; words.chinese[11] = _T("n. 工會、結合、聯盟、結婚");	 words.ps[11] = _T("\r\nps. reunion (n) 再結合、重逢、重聚；\r\n    unite (v) 聯合、使團結；unify (v)使聯合");
	words.word[12] = _T("overall"); words.number[12] = 840; words.chinese[12] = _T("adj. 整體的、全面的；adv. 總的來說、大體上的");	 words.ps[12] = _T("");
	words.word[13] = _T("imply"); words.number[13] = 842; words.chinese[13] = _T("v. 暗示、意味");	 words.ps[13] = _T("\r\nps. implication (n) 牽連、言外之意");
	words.word[14] = _T("approximately"); words.number[14] = 845; words.chinese[14] = _T("adv. 大約、大體上");	 words.ps[14] = _T("\r\nps. 相似詞：roughly；相反詞：exactly (adv) 精確地。\r\n    approximate (v) 大致估計、接近；(adj) 近似的");
	words.word[15] = _T("divide"); words.number[15] = 849; words.chinese[15] = _T("v. 劃分、分配、使分開；n. 分歧、不合");	 words.ps[15] = _T("\r\nps. dividend (n)(2181) 紅利、股息、被除數");
	words.word[16] = _T("authorize"); words.number[16] = 853; words.chinese[16] = _T("v. 賦予權限、批准");	 words.ps[16] = _T("\r\nps. authorization (n) 授權、認可、批准；\r\n    authority (n) 權威、當權者；官方；當局");
	words.word[17] = _T("enhance"); words.number[17] = 856; words.chinese[17] = _T("v. 增進、提升、強化");	 words.ps[17] = _T("\r\nps. enhancement (n) 強化、增加");
	words.word[18] = _T("reimburse"); words.number[18] = 858; words.chinese[18] = _T("v. 退款、償還");	 words.ps[18] = _T("\r\nps. reimbursement (n) 退款、償還");
	words.word[19] = _T("confidential"); words.number[19] = 862; words.chinese[19] = _T("adj. 機密的、祕密的");	 words.ps[19] = _T("\r\nps. confidentially (adv) 機密地、隱密地；confidentiality (n) 機密性");
	words.word[20] = _T("storage"); words.number[20] = 865; words.chinese[20] = _T("n. 儲存、保管、倉庫");	 words.ps[20] = _T("\r\nps. store (n) 商店；(v) 儲存、容納");
	words.word[21] = _T("relocate"); words.number[21] = 868; words.chinese[21] = _T("v. 遷移、重新安置");	 words.ps[21] = _T("\r\nps. relocation (n) 遷移");
	words.word[22] = _T("compensation"); words.number[22] = 872; words.chinese[22] = _T("n. 補償、賠償、薪水、津貼");	 words.ps[22] = _T("\r\nps. compensate (v) 補償、賠償");
	words.word[23] = _T("basis"); words.number[23] = 875; words.chinese[23] = _T("n. 基礎、基本、根據");	 words.ps[23] = _T("\r\nps. basic (adj) 基礎的");
	words.word[24] = _T("reveal"); words.number[24] = 878; words.chinese[24] = _T("v. 接露、洩漏、揭發");	 words.ps[24] = _T("\r\nps. revelation (n) 揭露、顯示");
	words.word[25] = _T("commercial"); words.number[25] = 881; words.chinese[25] = _T("adj. 商業的、營利的；n. 商業廣告");	 words.ps[25] = _T("\r\nps. commerce (n) 商業往來、貿易");
	words.word[26] = _T("evaluate"); words.number[26] = 885; words.chinese[26] = _T("v. 評定、評價");	 words.ps[26] = _T("\r\nps. evaluation (n) 評價；evaluator (n) 評價者、鑑定器；\r\n    evaluative (adj) 評價的、估價的");
	words.word[27] = _T("creativity"); words.number[27] = 887; words.chinese[27] = _T("n. 創意、創造力");	 words.ps[27] = _T("\r\nps. creative (adj) 有價值的、創造的");
	words.word[28] = _T("flyer"); words.number[28] = 891; words.chinese[28] = _T("n. 廣告傳單");	 words.ps[28] = _T("");
	words.word[29] = _T("landscape"); words.number[29] = 894; words.chinese[29] = _T("n. 風景、景致");	 words.ps[29] = _T("\r\nps. landscaper (n) 造景業者、庭園設計師");
	words.word[30] = _T("considerable"); words.number[30] = 896; words.chinese[30] = _T("adj. 相當大的、重要的");	 words.ps[30] = _T("\r\nps. consider (v)(87) 考慮、顧慮；considerably (adv) 相當地、頗；\r\n    considerate (adj) 體貼的、考慮周到的");
	words.word[31] = _T("extremely"); words.number[31] = 898; words.chinese[31] = _T("adj. 極度地、非常地");	 words.ps[31] = _T("\r\nps. extreme (adj) 極度的、偏激的；extremity (n) 極端");

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
	words.word[0] = _T("reasonably"); words.number[0] = 901; words.chinese[0] = _T("adv. 合理地、適當地");	 words.ps[0] = _T("\r\nps. reasonable (adj) 合理的、公道的(價格)");
	words.word[1] = _T("delegate"); words.number[1] = 904; words.chinese[1] = _T("n. 代表、會議代表；v. 派~做代表、委任、授權");	 words.ps[1] = _T("\r\nps. delegation (v) 委派、代表團");
	words.word[2] = _T("atmosphere"); words.number[2] = 905; words.chinese[2] = _T("n. 氣氛、大氣");	 words.ps[2] = _T("");
	words.word[3] = _T("nearby"); words.number[3] = 909; words.chinese[3] = _T("adj. 附近的；adv. 在附近地");	 words.ps[3] = _T("");
	words.word[4] = _T("former"); words.number[4] = 912; words.chinese[4] = _T("adj. 以前的、前任的");	 words.ps[4] = _T("\r\nps. formerly (adv) 事先地、之前地");
	words.word[5] = _T("appliance"); words.number[5] = 917; words.chinese[5] = _T("n. 電器設備、家電用品");	 words.ps[5] = _T("");
	words.word[6] = _T("occupation"); words.number[6] = 919; words.chinese[6] = _T("n. 職業、工作、占用");	 words.ps[6] = _T("\r\nps. occupy (v) 占用、佔據、使忙於");
	words.word[7] = _T("administration"); words.number[7] = 920; words.chinese[7] = _T("n. 行政、管理");	 words.ps[7] = _T("\r\nps. administrative (adj) 行政的、管理的；\r\n    administrator (n) 管理者、行政官員");
	words.word[8] = _T("federal"); words.number[8] = 926; words.chinese[8] = _T("adj. 聯邦的、聯邦政府的");	 words.ps[8] = _T("");
	words.word[9] = _T("eliminate"); words.number[9] = 928; words.chinese[9] = _T("v. 除去、淘汰、消滅");	 words.ps[9] = _T("\r\nps. elimination (n) 除去、根除、淘汰");
	words.word[10] = _T("complement"); words.number[10] = 930; words.chinese[10] = _T("v. 補充、補足；n. 補充物、補充");	 words.ps[10] = _T("\r\nps. complementary (adj) 補充的、互補的");
	words.word[11] = _T("tow"); words.number[11] = 934; words.chinese[11] = _T("v. (車、船的)拖曳、牽引、拉著；n. 拖、拉、拖車");	 words.ps[11] = _T("");
	words.word[12] = _T("undergo"); words.number[12] = 939; words.chinese[12] = _T("v. 經歷、遭受");	 words.ps[12] = _T("");
	words.word[13] = _T("workspace"); words.number[13] = 941; words.chinese[13] = _T("n. 工作場所");	 words.ps[13] = _T("");
	words.word[14] = _T("regardless of"); words.number[14] = 945; words.chinese[14] = _T("prep. 不論、不管");	 words.ps[14] = _T("\r\nps. regard (v)(293) 把~看作；regarding (prep) 關於~");
	words.word[15] = _T("aisle"); words.number[15] = 946; words.chinese[15] = _T("n. 走道、通道");	 words.ps[15] = _T("");
	words.word[16] = _T("transit"); words.number[16] = 951; words.chinese[16] = _T("n. 輸送、運送、通過；v. 通過、運送至");	 words.ps[16] = _T("");
	words.word[17] = _T("commission"); words.number[17] = 953; words.chinese[17] = _T("n. 佣金、任務、委員會；v. 委任、委託、任命");	 words.ps[17] = _T("\r\nps. commissioner (n) 委員、長官");
	words.word[18] = _T("hesitate"); words.number[18] = 956; words.chinese[18] = _T("v. 猶豫、躊躇、有疑慮");	 words.ps[18] = _T("\r\nps. hesitation (n) 躊躇、猶豫；hesitant (adj) 猶豫的、遲疑的");
	words.word[19] = _T("packet"); words.number[19] = 958; words.chinese[19] = _T("n. 小包、小捆、小包裹；v. 把~打成小包");	 words.ps[19] = _T("");
	words.word[20] = _T("transaction"); words.number[20] = 964; words.chinese[20] = _T("n. 交易、(業務等的)處理");	 words.ps[20] = _T("\r\nps. transactional (adj) (業務)交易的、業務上的");
	words.word[21] = _T("payroll"); words.number[21] = 966; words.chinese[21] = _T("n. 薪資名單、支付薪資總額");	 words.ps[21] = _T("");
	words.word[22] = _T("strict"); words.number[22] = 972; words.chinese[22] = _T("adj. 嚴格的、嚴厲的、精確的");	 words.ps[22] = _T("\r\nps. strictly (adv) 嚴格地、嚴謹地");
	words.word[23] = _T("ingredient"); words.number[23] = 973; words.chinese[23] = _T("n. 材料、成分、要素");	 words.ps[23] = _T("");
	words.word[24] = _T("familiar"); words.number[24] = 980; words.chinese[24] = _T("adj. 熟悉的、熟識的、親近的");	 words.ps[24] = _T("\r\nps. familiarize (v) 使熟悉、使親近。相反詞：unfamiliar (adj) 不熟悉的。");
	words.word[25] = _T("influence"); words.number[25] = 982; words.chinese[25] = _T("n. 影響、作用；v. 影響、左右");	 words.ps[25] = _T("");
	words.word[26] = _T("estate"); words.number[26] = 985; words.chinese[26] = _T("n. 地產、財產、莊園、身分、地位");	 words.ps[26] = _T("");
	words.word[27] = _T("adequate"); words.number[27] = 988; words.chinese[27] = _T("adj. 足夠的、充分的、適當的");	 words.ps[27] = _T("\r\nps. adequately (adv) 充分地、適當地。\r\n    相反詞：inadequate 不充分的、不夠格的");
	words.word[28] = _T("implement"); words.number[28] = 993; words.chinese[28] = _T("v. 執行、實施；n. 工具、器具、手段");	 words.ps[28] = _T("\r\nps. implementation (n) 實行、執行");
	words.word[29] = _T("accomplish"); words.number[29] = 994; words.chinese[29] = _T("v. 完成、實現、達到");	 words.ps[29] = _T("\r\nps. accomplishment (n) 成就、完成；accomplished (adj) 成功的、已實現的");
	words.word[30] = _T("portion"); words.number[30] = 997; words.chinese[30] = _T("n. 一部分；v. 分配、分成多份");	 words.ps[30] = _T("");
	words.word[31] = _T("blueprint"); words.number[31] = 1000; words.chinese[31] = _T("n. 藍圖、設計圖、計畫");	 words.ps[31] = _T("");

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
	words.word[0] = _T("refuse"); words.number[0] = 1001; words.chinese[0] = _T("n. 拒絕、回絕");	 words.ps[0] = _T("\r\nps. refusal (n) 拒絕");
	words.word[1] = _T("memorandum"); words.number[1] = 1005; words.chinese[1] = _T("n. 備忘錄、紀錄 = memo");	 words.ps[1] = _T("");
	words.word[2] = _T("outline"); words.number[2] = 1009; words.chinese[2] = _T("n. 提綱、概要、重點、輪廓；v. 概述、略述、畫輪廓");	 words.ps[2] = _T("");
	words.word[3] = _T("duplicate"); words.number[3] = 1010; words.chinese[3] = _T("n. 副本、複製；v. 複製；adj. 複製的、完全一樣的");	 words.ps[3] = _T("\r\nps. duplication (n) 複製、重複");
	words.word[4] = _T("insulation"); words.number[4] = 1014; words.chinese[4] = _T("n. 隔離、隔熱、絕緣");	 words.ps[4] = _T("\r\nps. insulate (v) 隔離、使絕緣、使隔熱");
	words.word[5] = _T("assign"); words.number[5] = 1016; words.chinese[5] = _T("v. 指派、分配、任命");	 words.ps[5] = _T("\r\nps. assignment (n) 任務、家庭作業");
	words.word[6] = _T("critical"); words.number[6] = 1019; words.chinese[6] = _T("adj. 關鍵性的、重要的、危急的、批判的、吹毛求疵的");	 words.ps[6] = _T("\r\nps. criticize (v) 批評、非難、苛求；critic (n) 批評家、評論員");
	words.word[7] = _T("expire"); words.number[7] = 1022; words.chinese[7] = _T("v. 到期、結束、死亡");	 words.ps[7] = _T("\r\nps. expiration (n) 到期、滿期、終止");
	words.word[8] = _T("oversee"); words.number[8] = 1026; words.chinese[8] = _T("v. 監督、管理");	 words.ps[8] = _T("\r\nps. 相似詞：supervise 管理。overseer (n) 工頭、監工");
	words.word[9] = _T("conclusion"); words.number[9] = 1027; words.chinese[9] = _T("n. 結論、決定、結局");	 words.ps[9] = _T("\r\nps. conclude (v) 下結論、做出(最後)決定、結束；\r\n    conclusive (adj) 結論的、決定性的");
	words.word[10] = _T("respect"); words.number[10] = 1031; words.chinese[10] = _T("v. 尊敬、敬重、遵守");	 words.ps[10] = _T("\r\nps. respectful (adj) 恭敬的、尊敬的；respective (adj) 各自的、個別的");
	words.word[11] = _T("admission"); words.number[11] = 1035; words.chinese[11] = _T("n. 入場許可、入學許可、入場券、承認");	 words.ps[11] = _T("\r\nps. admit (v)(666) 承認、許可");
	words.word[12] = _T("satisfactory"); words.number[12] = 1040; words.chinese[12] = _T("adj. 令人滿意的、符合要求的");	 words.ps[12] = _T("\r\nps. 相反詞：unsatisfactory (adj) 令人不滿足的。 satisfaction (n) 滿足、滿意");
	words.word[13] = _T("paycheck"); words.number[13] = 1041; words.chinese[13] = _T("n. 薪水(支票)、工資");	 words.ps[13] = _T("");
	words.word[14] = _T("suburban"); words.number[14] = 1045; words.chinese[14] = _T("adj. 郊區、近郊的、士氣的");	 words.ps[14] = _T("\r\nps. 相反詞：urban (adj) 都市的。suburb (n) 郊區、城郊");
	words.word[15] = _T("tariff"); words.number[15] = 1048; words.chinese[15] = _T("n. 關稅、稅率、關稅表");	 words.ps[15] = _T("");
	words.word[16] = _T("personality"); words.number[16] = 1051; words.chinese[16] = _T("n. 個性、性格、名人");	 words.ps[16] = _T("\r\nps. 相似詞：celebrity (797) 名人。personal (adj) 個人、私人的；\r\n    interpersonal (adj)(2378) 人際關係的、人與人之間的");
	words.word[17] = _T("domestic"); words.number[17] = 1053; words.chinese[17] = _T("adj. 國內的、家庭的");	 words.ps[17] = _T("\r\nps. domestically (adv) 國內地。相反詞：abroad 國外地；\r\n    國外的：foreign、oversea");
	words.word[18] = _T("suspend"); words.number[18] = 1058; words.chinese[18] = _T("v. 暫時停職/學、暫停、暫緩執行");	 words.ps[18] = _T("\r\nps. suspension (n) 暫停、中止、停職、停學");
	words.word[19] = _T("coverage"); words.number[19] = 1061; words.chinese[19] = _T("n. 保險範圍、涵蓋範圍");	 words.ps[19] = _T("");
	words.word[20] = _T("interfere"); words.number[20] = 1066; words.chinese[20] = _T("v. 干擾、妨礙、牴觸");	 words.ps[20] = _T("");
	words.word[21] = _T("keynote"); words.number[21] = 1070; words.chinese[21] = _T("n. 基調、主旨、基本方針；v. 做主旨發言");	 words.ps[21] = _T("");
	words.word[22] = _T("qualification"); words.number[22] = 1071; words.chinese[22] = _T("n. 資格、條件");	 words.ps[22] = _T("\r\nps. qualify (v)(510) 有具有資格、使合格");
	words.word[23] = _T("substantial"); words.number[23] = 1075; words.chinese[23] = _T("adj. 大量的、相當多的、實在的");	 words.ps[23] = _T("\r\nps. substantially (adv) 相當多地、重大地");
	words.word[24] = _T("prospective"); words.number[24] = 1077; words.chinese[24] = _T("adj. 有希望的、預期的、可能發生的");	 words.ps[24] = _T("\r\nps. prospect (v) 探勘；(n) 展望、前景、景色");
	words.word[25] = _T("content"); words.number[25] = 1081; words.chinese[25] = _T("n. 內容、容量；adj. 滿足的、滿意的；v. 使滿足");	 words.ps[25] = _T("\r\nps. contentment (n) 滿足、知足");
	words.word[26] = _T("proof"); words.number[26] = 1083; words.chinese[26] = _T("n. 證明、證據；adj. 能抵擋的");	 words.ps[26] = _T("");
	words.word[27] = _T("commitment"); words.number[27] = 1087; words.chinese[27] = _T("n. 奉獻、投入、致力、承諾");	 words.ps[27] = _T("\r\nps. commit (v) 忠於、投入、保證、做(錯事)、犯(罪)");
	words.word[28] = _T("extensive"); words.number[28] = 1091; words.chinese[28] = _T("adj. 大量的、廣泛的、大規模的");	 words.ps[28] = _T("\r\nps. extension (n) 延長、延期");
	words.word[29] = _T("pollution"); words.number[29] = 1094; words.chinese[29] = _T("n. 汙染");	 words.ps[29] = _T("\r\nps. pollutant (n) 汙染物");
	words.word[30] = _T("commute"); words.number[30] = 1096; words.chinese[30] = _T("v. 通勤、通學；n. 通勤、通學");	 words.ps[30] = _T("\r\nps. commuter (n) 通勤者");
	words.word[31] = _T("merge"); words.number[31] = 1099; words.chinese[31] = _T("v. 使合併、使融合");	 words.ps[31] = _T("\r\nps. merger (n) (公司等的)合併");

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
	words.word[0] = _T("suitable"); words.number[0] = 1102; words.chinese[0] = _T("adj. 適合的、適宜的");	 words.ps[0] = _T("\r\nps. suitably (adv) 適當地；suitability (n) 適合、相配");
	words.word[1] = _T("exceed"); words.number[1] = 1105; words.chinese[1] = _T("v. 超過、超過、優於");	 words.ps[1] = _T("\r\nps. exceedingly (adv) 極度地、非常地");
	words.word[2] = _T("crew"); words.number[2] = 1109; words.chinese[2] = _T("n. (船、飛機等的) 全體組員");	 words.ps[2] = _T("\r\nps. 相似詞：flight attendants；");
	words.word[3] = _T("dedicated"); words.number[3] = 1112; words.chinese[3] = _T("adj. 獻身的、致力的、專注的");	 words.ps[3] = _T("\r\nps. dedicate (v) 獻身、致力；dedication (n) 獻身、專心致力");
	words.word[4] = _T("stack"); words.number[4] = 1115; words.chinese[4] = _T("v. 堆疊、疊成堆；n. 一堆、堆疊物");	 words.ps[4] = _T("");
	words.word[5] = _T("otherwise"); words.number[5] = 1117; words.chinese[5] = _T("adv. 不然、否則、除此之外");	 words.ps[5] = _T("");
	words.word[6] = _T("courier"); words.number[6] = 1118; words.chinese[6] = _T("n. 快遞、快遞業者");	 words.ps[6] = _T("");
	words.word[7] = _T("expedite"); words.number[7] = 1122; words.chinese[7] = _T("v. 加速的處理、加速進行");	 words.ps[7] = _T("\r\nps. 相似詞：speed up。expedition (n) 探險、遠征、遠征隊");
	words.word[8] = _T("steering"); words.number[8] = 1125; words.chinese[8] = _T("n. 操舵裝置、方向盤、指導");	 words.ps[8] = _T("\r\nps. steer (v) 掌舵、帶領、指導、操縱");
	words.word[9] = _T("experiment"); words.number[9] = 1127; words.chinese[9] = _T("v. 進行實驗；n. 實驗");	 words.ps[9] = _T("\r\nps. experimental (adj) 實驗的；experimentally (adv) 實驗地");
	words.word[10] = _T("booklet"); words.number[10] = 1131; words.chinese[10] = _T("n. 小冊子、資料本");	 words.ps[10] = _T("");
	words.word[11] = _T("comprehensive"); words.number[11] = 1136; words.chinese[11] = _T("adj. 全面的、廣泛的");	 words.ps[11] = _T("\r\nps. comprehend (v) 領會、理解");
	words.word[12] = _T("polish"); words.number[12] = 1141; words.chinese[12] = _T("v. 擦亮、磨光；n. 光澤、擦亮");	 words.ps[12] = _T("");
	words.word[13] = _T("grocery"); words.number[13] = 1145; words.chinese[13] = _T("n. 食品雜貨、食品雜貨品");	 words.ps[13] = _T("");
	words.word[14] = _T("retain"); words.number[14] = 1147; words.chinese[14] = _T("v. 保留、保持、記住");	 words.ps[14] = _T("\r\nps. retainer (n) (給律師的)聘請預付金");
	words.word[15] = _T("assure"); words.number[15] = 1148; words.chinese[15] = _T("v. 向~保證、使安心、使確定");	 words.ps[15] = _T("\r\nps. assurance (n) 確信、保證");
	words.word[16] = _T("status"); words.number[16] = 1152; words.chinese[16] = _T("n. 情況、狀態、地位、身分");	 words.ps[16] = _T("");
	words.word[17] = _T("utility"); words.number[17] = 1155; words.chinese[17] = _T("n. 公用事業、實用性");	 words.ps[17] = _T("\r\nps. utilize (v)(1352) 利用");
	words.word[18] = _T("publicity"); words.number[18] = 1156; words.chinese[18] = _T("n. 宣傳、廣告、(公眾的)注意");	 words.ps[18] = _T("");
	words.word[19] = _T("draft"); words.number[19] = 1160; words.chinese[19] = _T("v. 草擬；n. 草稿、草案、匯款單");	 words.ps[19] = _T("");
	words.word[20] = _T("paperwork"); words.number[20] = 1166; words.chinese[20] = _T("n. 文書工作、書面作業");	 words.ps[20] = _T("");
	words.word[21] = _T("complete"); words.number[21] = 1169; words.chinese[21] = _T("v. 完成、使完全；adj. 完整的、完全的");	 words.ps[21] = _T("\r\nps. 相反詞：imcomplete (adj) 不完全的、不完整的。\r\n    completion (n) 實現、完成");
	words.word[22] = _T("occur"); words.number[22] = 1173; words.chinese[22] = _T("v. 發生、出現、被想起");	 words.ps[22] = _T("\r\nps. occurance (n) (事件等)發生");
	words.word[23] = _T("auditorium"); words.number[23] = 1175; words.chinese[23] = _T("n. 演藝廳、禮堂、會堂、觀眾席");	 words.ps[23] = _T("");
	words.word[24] = _T("relevant"); words.number[24] = 1179; words.chinese[24] = _T("adj. 有關的、切題的");	 words.ps[24] = _T("\r\nps. 相反詞：irrelevant (adj) 無關的、不切題的。relevance (n) 關聯");
	words.word[25] = _T("protective"); words.number[25] = 1180; words.chinese[25] = _T("adj. 保護的、防護的");	 words.ps[25] = _T("\r\nps. protection (n) 保護、防護");
	words.word[26] = _T("transmission"); words.number[26] = 1185; words.chinese[26] = _T("n. (信號、廣播的)傳輸、傳遞、變速器");	 words.ps[26] = _T("\r\nps. transmit (v) 傳送、傳播");
	words.word[27] = _T("equip"); words.number[27] = 1188; words.chinese[27] = _T("v. 配備、裝備、使有能力的");	 words.ps[27] = _T("\r\nps. equipment (n) 配備、裝備");
	words.word[28] = _T("portable"); words.number[28] = 1192; words.chinese[28] = _T("adj. 攜帶式的、便於攜帶的；n. 手提式製品");	 words.ps[28] = _T("");
	words.word[29] = _T("vacancy"); words.number[29] = 1193; words.chinese[29] = _T("n. 職缺、空缺、空房；");	 words.ps[29] = _T("\r\nps. vacate (v)(1466) 空出、搬出、離開、離職；\r\n    vacant (adj) 空著的、未被占用的");
	words.word[30] = _T("emphasize"); words.number[30] = 1196; words.chinese[30] = _T("v. 強調");	 words.ps[30] = _T("\r\nps. emphasis (n) 強調、重點；emphatic (adj) 強調的、加強語氣的");
	words.word[31] = _T("prohibit"); words.number[31] = 1200; words.chinese[31] = _T("v. 禁止、阻止");	 words.ps[31] = _T("\r\nps. prohibition (n) 禁止、阻止");

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
	words.word[0] = _T("correspondence"); words.number[0] = 1204; words.chinese[0] = _T("n. 通信、一致、符合");	 words.ps[0] = _T("\r\nps. correspond (v) 通信、和~符合、相當；\r\n    corresponding (adj) 對應的、一致的");
	words.word[1] = _T("absolute"); words.number[1] = 1206; words.chinese[1] = _T("adj. 絕對的、確實的");	 words.ps[1] = _T("\r\nps. absolutely (adv) 絕對地、完全地");
	words.word[2] = _T("streamline"); words.number[2] = 1207; words.chinese[2] = _T("v. 簡化、合理化；n. 流線型");	 words.ps[2] = _T("");
	words.word[3] = _T("lack"); words.number[3] = 1211; words.chinese[3] = _T("v. 缺乏、短缺；n. 匱乏、不足");	 words.ps[3] = _T("");
	words.word[4] = _T("itinerary"); words.number[4] = 1215; words.chinese[4] = _T("n. 行程表、旅行計畫");	 words.ps[4] = _T("");
	words.word[5] = _T("compose"); words.number[5] = 1218; words.chinese[5] = _T("v. 組成、構成、作曲、構圖");	 words.ps[5] = _T("\r\nps. composition (n) 樂曲、作文、構成；composer (n) 作曲家");
	words.word[6] = _T("confidence"); words.number[6] = 1220; words.chinese[6] = _T("n. 信心、把握、自信、秘密");	 words.ps[6] = _T("\r\nps. comfident (adj) 有信心的、有把握的");
	words.word[7] = _T("affair"); words.number[7] = 1225; words.chinese[7] = _T("n. 信件、事務、案子、外遇");	 words.ps[7] = _T("");
	words.word[8] = _T("raw"); words.number[8] = 1227; words.chinese[8] = _T("adj. 生的、無加工的、新鮮的");	 words.ps[8] = _T("");
	words.word[9] = _T("thorough"); words.number[9] = 1232; words.chinese[9] = _T("adj. 徹底的、完全的");	 words.ps[9] = _T("\r\nps. thoroughly (adv) 徹底地；thoroughness (n) 徹底、完全");
	words.word[10] = _T("superior"); words.number[10] = 1236; words.chinese[10] = _T("adj. 較好的、上等的、有優越感的");	 words.ps[10] = _T("\r\nps. superiority (n) 優越、優勢");
	words.word[11] = _T("assume"); words.number[11] = 1237; words.chinese[11] = _T("v. 承擔、以為、假定");	 words.ps[11] = _T("\r\nps. assumption (n) 推測、假定、承擔");
	words.word[12] = _T("routine"); words.number[12] = 1241; words.chinese[12] = _T("adj. 例行的、日常的；n. 例行公事、慣例");	 words.ps[12] = _T("\r\nps. routinely (adv) 慣常地、例行地");
	words.word[13] = _T("clarify"); words.number[13] = 1244; words.chinese[13] = _T("v. 釐清、弄清楚、淨化");	 words.ps[13] = _T("\r\nps. clarification (n) 淨化、釐清");
	words.word[14] = _T("appraisal"); words.number[14] = 1246; words.chinese[14] = _T("n. 評估、評量、考核");	 words.ps[14] = _T("\r\nps. appraise (v) 估價、評估、評價");
	words.word[15] = _T("restructuring"); words.number[15] = 1249; words.chinese[15] = _T("n. 改組、重整");	 words.ps[15] = _T("\r\nps. restructure (v) 重建、改組");
	words.word[16] = _T("complimentary"); words.number[16] = 1254; words.chinese[16] = _T("adj. 免費贈送的、稱讚的、表敬意的");	 words.ps[16] = _T("\r\nps. compliment (n)(1381) 讚美的話、敬意、致意；(v) 讚美、稱讚");
	words.word[17] = _T("compile"); words.number[17] = 1257; words.chinese[17] = _T("v. 彙整、蒐集");	 words.ps[17] = _T("");
	words.word[18] = _T("inflation"); words.number[18] = 1261; words.chinese[18] = _T("n. 通貨膨脹、上升");	 words.ps[18] = _T("\r\nps. 相反詞：deflation (n) 通貨緊縮。inflate (v) 使膨脹、抬高、充氣");
	words.word[19] = _T("urgent"); words.number[19] = 1262; words.chinese[19] = _T("adj. 緊急的、急迫的");	 words.ps[19] = _T("\r\nps. urgently (adv) 緊急地；urgency (n) 緊急、急迫");
	words.word[20] = _T("designate"); words.number[20] = 1265; words.chinese[20] = _T("v. 指定、指派、標明；adj. 指定的、被任命的");	 words.ps[20] = _T("");
	words.word[21] = _T("surround"); words.number[21] = 1269; words.chinese[21] = _T("v. 圍繞、包圍");	 words.ps[21] = _T("\r\nps. surrounding (adj) 周圍的、附近的；surroundings (n) 環境、周圍的事物");
	words.word[22] = _T("durable"); words.number[22] = 1272; words.chinese[22] = _T("adj. 耐用的、經久的");	 words.ps[22] = _T("\r\nps. durablility (n) 耐久性");
	words.word[23] = _T("customize"); words.number[23] = 1275; words.chinese[23] = _T("v. 訂做、訂製");	 words.ps[23] = _T("\r\nps. customer (n) 消費者");
	words.word[24] = _T("finding"); words.number[24] = 1279; words.chinese[24] = _T("n. 調查/研究結果、發現");	 words.ps[24] = _T("");
	words.word[25] = _T("pharmaceutical"); words.number[25] = 1283; words.chinese[25] = _T("adj. 製藥的、配藥的；n. 藥物");	 words.ps[25] = _T("");
	words.word[26] = _T("steady"); words.number[26] = 1285; words.chinese[26] = _T("adj. 穩定的、安定的；v. 使穩固；adv. 穩固地");	 words.ps[26] = _T("\r\nps. steadily (adv) 穩定地");
	words.word[27] = _T("reject"); words.number[27] = 1288; words.chinese[27] = _T("v. 否決、拒絕");	 words.ps[27] = _T("\r\nps. rejection (n) 拒絕、排斥");
	words.word[28] = _T("motivation"); words.number[28] = 1291; words.chinese[28] = _T("n. 動機、動力、誘因");	 words.ps[28] = _T("\r\nps. motivate (v) 賦予動機、激發；motivated (adj) 有動機的");
	words.word[29] = _T("acknowledge"); words.number[29] = 1295; words.chinese[29] = _T("v. 告知收到、承認、致謝");	 words.ps[29] = _T("");
	words.word[30] = _T("spokesperson"); words.number[30] = 1297; words.chinese[30] = _T("n. 發言人");	 words.ps[30] = _T("");
	words.word[31] = _T("recipient"); words.number[31] = 1298; words.chinese[31] = _T("n. 受領者、接受者");	 words.ps[31] = _T("\r\nps. receipt (n)(180) 收據、收到");

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
	words.word[0] = _T("remark"); words.number[0] = 1303; words.chinese[0] = _T("n. 致辭、演說、意見、評論");	 words.ps[0] = _T("");
	words.word[1] = _T("cautious"); words.number[1] = 1305; words.chinese[1] = _T("adj. 謹慎的、小心的");	 words.ps[1] = _T("\r\nps. cautiously (adv) 小心翼翼地、謹慎地");
	words.word[2] = _T("persuade"); words.number[2] = 1309; words.chinese[2] = _T("v. 說服、勸服");	 words.ps[2] = _T("\r\nps. persuasive (adj) 有說服力的；persuasion (n) 說服");
	words.word[3] = _T("overlook"); words.number[3] = 1310; words.chinese[3] = _T("v. 俯瞰、眺望、忽略、寬容");	 words.ps[3] = _T("");
	words.word[4] = _T("specification"); words.number[4] = 1314; words.chinese[4] = _T("n. 規格、詳細設計說明");	 words.ps[4] = _T("");
	words.word[5] = _T("incorporate"); words.number[5] = 1317; words.chinese[5] = _T("v. 納入、包含(組織、系統、計畫等)、把~合併");	 words.ps[5] = _T("\r\nps. corporate (adj) 法人的、社團的；coporation (n) 公司；\r\n    incorporation (n) 合併、法人組織、公司；cooperation 合作");
	words.word[6] = _T("detour"); words.number[6] = 1318; words.chinese[6] = _T("n. 繞行的路、迂迴路；v. 迂迴、繞行、使繞行");	 words.ps[6] = _T("");
	words.word[7] = _T("statistic"); words.number[7] = 1320; words.chinese[7] = _T("n. 統計、統計數據");	 words.ps[7] = _T("\r\nps. statistical (adj) 統計學的、統計的；statistician (n) 統計專家");
	words.word[8] = _T("sculpture"); words.number[8] = 1327; words.chinese[8] = _T("n. 雕刻品、雕像、雕刻術；v. 雕刻、從事雕刻");	 words.ps[8] = _T("");
	words.word[9] = _T("carton"); words.number[9] = 1330; words.chinese[9] = _T("n. 硬紙盒、塑膠盒");	 words.ps[9] = _T("");
	words.word[10] = _T("broaden"); words.number[10] = 1334; words.chinese[10] = _T("v. 擴展、使變寬");	 words.ps[10] = _T("\r\nps. 相似詞：expand (168)。 \r\n    broad (adj) 寬的；broadly (adv) 寬廣地、大體上地");
	words.word[11] = _T("abstract"); words.number[11] = 1338; words.chinese[11] = _T("n. 摘要、萃取物；v. 萃取；adj. 抽象的");	 words.ps[11] = _T("");
	words.word[12] = _T("outdated"); words.number[12] = 1340; words.chinese[12] = _T("adj. 舊式的、過時的");	 words.ps[12] = _T("");
	words.word[13] = _T("consistent"); words.number[13] = 1344; words.chinese[13] = _T("adj. 一貫的、前後一致的、始終如一的");	 words.ps[13] = _T("\r\nps. 相反詞：inconsistent (adj) 不一致的、前後矛盾的。\r\n    consistently (adv) 一貫地；consistency (n) 一貫性、協調");
	words.word[14] = _T("premier"); words.number[14] = 1348; words.chinese[14] = _T("adj. 最佳的、首要的；最著名的；n. 首相、總理");	 words.ps[14] = _T("");
	words.word[15] = _T("shortage"); words.number[15] = 1349; words.chinese[15] = _T("n. 短缺、匱乏");	 words.ps[15] = _T("");
	words.word[16] = _T("utilize"); words.number[16] = 1352; words.chinese[16] = _T("v. 利用");	 words.ps[16] = _T("\r\nps. utility (n) (水、電、瓦斯等)公共事業");
	words.word[17] = _T("improper"); words.number[17] = 1356; words.chinese[17] = _T("adj. 不適當的、錯誤的");	 words.ps[17] = _T("\r\nps. 相反詞：proper (adj) 適當的。improperly (adv) 不適當地");
	words.word[18] = _T("pledge"); words.number[18] = 1358; words.chinese[18] = _T("v. 承諾、發誓；n. 誓言、保證");	 words.ps[18] = _T("");
	words.word[19] = _T("favorable"); words.number[19] = 1362; words.chinese[19] = _T("adj. 有利的、適合的、贊同的、讚許的");	 words.ps[19] = _T("");
	words.word[20] = _T("overdue"); words.number[20] = 1365; words.chinese[20] = _T("adj. 逾時的、過期的");	 words.ps[20] = _T("\r\nps. favorably (adv) 讚許地、有利地");
	words.word[21] = _T("signature"); words.number[21] = 1368; words.chinese[21] = _T("n. 屬名、簽名");	 words.ps[21] = _T("");
	words.word[22] = _T("comform"); words.number[22] = 1371; words.chinese[22] = _T("v. 符合、順從、遵照、遵守");	 words.ps[22] = _T("\r\nps. sign (n) 記號、符號、標誌、前兆；(v) 簽名");
	words.word[23] = _T("allowance"); words.number[23] = 1375; words.chinese[23] = _T("n. 限額、零用錢、津貼、認可、容忍");	 words.ps[23] = _T("\r\nps. allowable (adj) 可允許的");
	words.word[24] = _T("resolve"); words.number[24] = 1380; words.chinese[24] = _T("v. 解決、決心；n. 決心、決意");	 words.ps[24] = _T("\r\nps. resolution (n) 決心、解決、決議");
	words.word[25] = _T("compliment"); words.number[25] = 1381; words.chinese[25] = _T("v. 稱讚、祝賀、表示敬意；n. 讚美、敬意、致意");	 words.ps[25] = _T("\r\nps. complimentary (adj)(1254) 稱讚的、免費贈送的");
	words.word[26] = _T("relative"); words.number[26] = 1382; words.chinese[26] = _T("adj. 相對的、比較上的、相關的；n. 親戚");	 words.ps[26] = _T("\r\nps. relatively (adv) 相對地、比較上地");
	words.word[27] = _T("informative"); words.number[27] = 1387; words.chinese[27] = _T("adj. 提供有用資訊的、給予知識的");	 words.ps[27] = _T("\r\nps. informatively (adv) 增進知識地");
	words.word[28] = _T("coordinate"); words.number[28] = 1389; words.chinese[28] = _T("v. 協調、使相配合");	 words.ps[28] = _T("\r\nps. coordination (n) 協調");
	words.word[29] = _T("faculty"); words.number[29] = 1393; words.chinese[29] = _T("n. (大學)全體教員、(大學)系、科、院");	 words.ps[29] = _T("");
	words.word[30] = _T("encounter"); words.number[30] = 1397; words.chinese[30] = _T("v. 遇到、遭遇、意外遇見；n. 偶然碰見");	 words.ps[30] = _T("");
	words.word[31] = _T("occasionally"); words.number[31] = 1400; words.chinese[31] = _T("adv. 偶爾地");	 words.ps[31] = _T("\r\nps. occasional (adj) 偶爾的、非經常的；occasion (n) 場合、機會；(v) 引起");

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
	words.word[0] = _T("interpret"); words.number[0] = 1403; words.chinese[0] = _T("v. 口譯、說明、理解為");	 words.ps[0] = _T("\r\nps. 相反詞：misinterpret (v) 誤解。 \r\n    interpreter (n) 口譯員；interpretation (n) 口譯、解釋");
	words.word[1] = _T("remote"); words.number[1] = 1407; words.chinese[1] = _T("adj. 偏遠的、遙遠的、遠距的");	 words.ps[1] = _T("\r\nps. remotely (adv) (時/空間上)遙遠地、(可能性)極小地");
	words.word[2] = _T("hospitality"); words.number[2] = 1410; words.chinese[2] = _T("n. 提供食宿等服務、慇情款待、好客");	 words.ps[2] = _T("\r\nps. hospitable (adj) 慇情招待的、好客的、適宜的");
	words.word[3] = _T("restrict"); words.number[3] = 1411; words.chinese[3] = _T("v. 限制(數量、大小)、限定");	 words.ps[3] = _T("\r\nps. restricted (adj) 受限的、被限定的；restriction (n) 限制、限定、約束");
	words.word[4] = _T("seasonal"); words.number[4] = 1414; words.chinese[4] = _T("adj. 季節性的、當令的");	 words.ps[4] = _T("");
	words.word[5] = _T("precaution"); words.number[5] = 1417; words.chinese[5] = _T("n. 預防措施、預防、預備");	 words.ps[5] = _T("");
	words.word[6] = _T("freight"); words.number[6] = 1419; words.chinese[6] = _T("n. (船運、空運等)貨物；v. 運輸");	 words.ps[6] = _T("\r\nps. freighter (n) 貨輪、運輸機");
	words.word[7] = _T("spacious"); words.number[7] = 1424; words.chinese[7] = _T("adj. 寬敞的");	 words.ps[7] = _T("");
	words.word[8] = _T("stimulate"); words.number[8] = 1428; words.chinese[8] = _T("v. 刺激、使有活力的、促使");	 words.ps[8] = _T("\r\nps. stimulation (n) 刺激、激勵；stimulating (adj) 激勵人的");
	words.word[9] = _T("advisory"); words.number[9] = 1431; words.chinese[9] = _T("adj. 諮詢的、顧問的、勸告的");	 words.ps[9] = _T("\r\nps. advise (v) 忠告、勸告；advice (n) 忠告、勸告；\r\n    advisable (adj) 可用的、明智的");
	words.word[10] = _T("expertise"); words.number[10] = 1435; words.chinese[10] = _T("n. 專業技術、專門知識");	 words.ps[10] = _T("\r\nps. expert (n) 專家");
	words.word[11] = _T("consensus"); words.number[11] = 1438; words.chinese[11] = _T("n. 共識、(意見)一致");	 words.ps[11] = _T("");
	words.word[12] = _T("appoint"); words.number[12] = 1442; words.chinese[12] = _T("v. 任命、指派、約定");	 words.ps[12] = _T("\r\nps. appointment (n)  (正式的)約會、約定、任命");
	words.word[13] = _T("pursue"); words.number[13] = 1446; words.chinese[13] = _T("v. 從事、追求、追趕、追蹤");	 words.ps[13] = _T("\r\nps. pursuit (n) 從事、追求、追蹤、愛好");
	words.word[14] = _T("fluctuation"); words.number[14] = 1448; words.chinese[14] = _T("n. 波動、變動");	 words.ps[14] = _T("\r\nps. fluctuate (v) 變動、波動、搖動");
	words.word[15] = _T("transcribe"); words.number[15] = 1449; words.chinese[15] = _T("v. 謄寫、抄錄");	 words.ps[15] = _T("\r\nps. transcript (n)(2391) 謄本、抄本、文字稿");
	words.word[16] = _T("partial"); words.number[16] = 1453; words.chinese[16] = _T("adj. 部分的、局部的、偏袒的、鍾愛的");	 words.ps[16] = _T("\r\nps. 相反詞：impartial (adj) 公正的、不偏不倚的。 partially (adv) 部分地");
	words.word[17] = _T("abandon"); words.number[17] = 1456; words.chinese[17] = _T("v. 放棄、拋棄、遺棄");	 words.ps[17] = _T("");
	words.word[18] = _T("innovation"); words.number[18] = 1459; words.chinese[18] = _T("創新、革新");	 words.ps[18] = _T("\r\nps. innovate (v) 革新、改革；innovative (adj) 創新的");
	words.word[19] = _T("numerous"); words.number[19] = 1462; words.chinese[19] = _T("adj. 眾多的、很多的");	 words.ps[19] = _T("\r\nps. numerously (adv) 多數地、無數地；\r\n    numerical (adj)(1927) 以數字表示的、數值的");
	words.word[20] = _T("vacate"); words.number[20] = 1466; words.chinese[20] = _T("v. 搬出(家、房子)、空出、辭(職)");	 words.ps[20] = _T("\r\nps. vacancy (n)(1193) 空位、空缺、職缺；vacant (adj) 空著的、未被占用的");
	words.word[21] = _T("combine"); words.number[21] = 1468; words.chinese[21] = _T("v. 使結合、使聯結");	 words.ps[21] = _T("\r\nps. combination (n) 聯合、結合體");
	words.word[22] = _T("enforce"); words.number[22] = 1472; words.chinese[22] = _T("v. 執行、實施、強迫、強制");	 words.ps[22] = _T("\r\nps. enforcement (n) 執行、強迫、強制");
	words.word[23] = _T("distinguish"); words.number[23] = 1475; words.chinese[23] = _T("v. 區別、識別、使傑出、使顯出特色");	 words.ps[23] = _T("");
	words.word[24] = _T("investigate"); words.number[24] = 1478; words.chinese[24] = _T("v. 調查、研究");	 words.ps[24] = _T("\r\nps. investigation (n) 調查、研究；investigative (adj) 調查的");
	words.word[25] = _T("circumstance"); words.number[25] = 1479; words.chinese[25] = _T("n. 情況、環境、情勢");	 words.ps[25] = _T("");
	words.word[26] = _T("negotiate"); words.number[26] = 1483; words.chinese[26] = _T("v. 協商、談判");	 words.ps[26] = _T("\r\nps. negotiation (n) 協商、談判；negotiable (adj) 可協商的、可商量的");
	words.word[27] = _T("confer"); words.number[27] = 1485; words.chinese[27] = _T("v. 商討、協商、授與(學位等)");	 words.ps[27] = _T("\r\nps. conferecnce (n) 研討會、(正式)會議");
	words.word[28] = _T("capability"); words.number[28] = 1490; words.chinese[28] = _T("n. 性能、能力、才能");	 words.ps[28] = _T("\r\nps. capable (adj) 有能力的、能幹的");
	words.word[29] = _T("recline"); words.number[29] = 1493; words.chinese[29] = _T("v. 向後傾、斜倚、斜躺");	 words.ps[29] = _T("");
	words.word[30] = _T("integrity"); words.number[30] = 1496; words.chinese[30] = _T("n. 正直的、誠實、完整、健全度");	 words.ps[30] = _T("");
	words.word[31] = _T("substitute"); words.number[31] = 1499; words.chinese[31] = _T("v. 用~代替；n. 代替者、代用品；adj. 替代的");	 words.ps[31] = _T("\r\nps. substitution (n) 代用、替換");

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
	words.word[0] = _T("interruption"); words.number[0] = 1503; words.chinese[0] = _T("n. (行動、狀況的)中斷、中止、打擾");	 words.ps[0] = _T("\r\nps. interrupt (v) 中斷、打擾、打斷");
	words.word[1] = _T("aspect"); words.number[1] = 1505; words.chinese[1] = _T("n. 觀點、方面、樣貌、樣子");	 words.ps[1] = _T("");
	words.word[2] = _T("gratitude"); words.number[2] = 1509; words.chinese[2] = _T("n. 感激");	 words.ps[2] = _T("\r\nps. grateful (adj)(1872) 感激的、表示感謝的");
	words.word[3] = _T("earnings"); words.number[3] = 1512; words.chinese[3] = _T("n. 收益、所得、薪資");	 words.ps[3] = _T("\r\nps. earn (v) 賺(錢)");
	words.word[4] = _T("diagnosis"); words.number[4] = 1515; words.chinese[4] = _T("n. (對疾病、問題)診斷、判斷、診斷書");	 words.ps[4] = _T("\r\nps. diagnose (v) 診斷、判斷；diagnostic (adj) 診斷的");
	words.word[5] = _T("output"); words.number[5] = 1518; words.chinese[5] = _T("n. 產量、生產、信息輸出");	 words.ps[5] = _T("\r\nps. 相反詞：input (v)(n) 輸入、投入");
	words.word[6] = _T("intensive"); words.number[6] = 1521; words.chinese[6] = _T("adj. 密集的、加強的、徹底的");	 words.ps[6] = _T("\r\nps. 相反詞：extensive (adj) 廣泛的、大規模的");
	words.word[7] = _T("asset"); words.number[7] = 1524; words.chinese[7] = _T("n. 有價值的人/事物、財產、資產");	 words.ps[7] = _T("");
	words.word[8] = _T("awareness"); words.number[8] = 1526; words.chinese[8] = _T("n. 意識、認識、體認");	 words.ps[8] = _T("\r\nps. aware (adj) 知道的、察覺的");
	words.word[9] = _T("calculate"); words.number[9] = 1528; words.chinese[9] = _T("v. 計算、推測");	 words.ps[9] = _T("\r\nps. calculation (n) 計算、估計、算計；calculator (n) 計算機、計算者");
	words.word[10] = _T("overcome"); words.number[10] = 1533; words.chinese[10] = _T("v. 克服、戰勝");	 words.ps[10] = _T("");
	words.word[11] = _T("component"); words.number[11] = 1536; words.chinese[11] = _T("n. (機器、設備的)零件、元件、構成要素");	 words.ps[11] = _T("");
	words.word[12] = _T("malfunction"); words.number[12] = 1539; words.chinese[12] = _T("n. (機器、程式)故障、失靈");	 words.ps[12] = _T("");
	words.word[13] = _T("subsidiary"); words.number[13] = 1543; words.chinese[13] = _T("n. 子公司；adj. 從屬的、輔助的、次要的");	 words.ps[13] = _T("");
	words.word[14] = _T("costly"); words.number[14] = 1546; words.chinese[14] = _T("adj. 花費高的、昂貴的");	 words.ps[14] = _T("\r\nps. cost (n) 費用、成本、代價；(v) 花費");
	words.word[15] = _T("disturb"); words.number[15] = 1550; words.chinese[15] = _T("v. 干擾、妨礙、擾亂");	 words.ps[15] = _T("\r\nps. disturbing (adj) 煩擾的；disturbance (n) 擾亂、打擾");
	words.word[16] = _T("internal"); words.number[16] = 1553; words.chinese[16] = _T("adj. 內部的、國內的");	 words.ps[16] = _T("\r\nps. 相反詞：external (adj) 外部的、外來的");
	words.word[17] = _T("modify"); words.number[17] = 1555; words.chinese[17] = _T("v. 修訂、修改、調整");	 words.ps[17] = _T("\r\nps. modification (n) 修改、改變");
	words.word[18] = _T("oppose"); words.number[18] = 1556; words.chinese[18] = _T("v. 反對(計畫、提案)、反抗");	 words.ps[18] = _T("\r\nps. opposition (n) 反對、對立、對手；\r\n    opposing (adj) 對立的、反對的；opposed (adj) 反對的、不同意的");
	words.word[19] = _T("bankrupt"); words.number[19] = 1560; words.chinese[19] = _T("adj. 破產的 = insolvent");	 words.ps[19] = _T("\r\nps. bankruptcy (n) 破產、倒閉 = insolvency");
	words.word[20] = _T("payable"); words.number[20] = 1565; words.chinese[20] = _T("adj. 可支付的、應支付的");	 words.ps[20] = _T("\r\nps. pay (v) 支付；payment (n) 支付(金額)、付款");
	words.word[21] = _T("reinforce"); words.number[21] = 1567; words.chinese[21] = _T("v. 強化、加強");	 words.ps[21] = _T("\r\nps. reinforcement  (n) 加強、鞏固、增援");
	words.word[22] = _T("restore"); words.number[22] = 1571; words.chinese[22] = _T("v. 回復、恢復、使復原");	 words.ps[22] = _T("\r\nps. restoration (n) 恢復、復原");
	words.word[23] = _T("adopt"); words.number[23] = 1574; words.chinese[23] = _T("v. 採用、採納");	 words.ps[23] = _T("\r\nps. adoption (n) 採用、收養");
	words.word[24] = _T("promising"); words.number[24] = 1576; words.chinese[24] = _T("adj. 有前途的、大有可為的");	 words.ps[24] = _T("\r\nps. promise (v) 承諾；(n) 承諾、諾言");
	words.word[25] = _T("provided"); words.number[25] = 1578; words.chinese[25] = _T("conj. 假如、以~為條件");	 words.ps[25] = _T("\r\nps. provide (v)(5) 提供、供給");
	words.word[26] = _T("leak"); words.number[26] = 1580; words.chinese[26] = _T("v. 滲漏、洩漏");	 words.ps[26] = _T("");
	words.word[27] = _T("congestion"); words.number[27] = 1584; words.chinese[27] = _T("n. 塞車、擁塞");	 words.ps[27] = _T("\r\nps. congested (adj) 壅塞的、充血的");
	words.word[28] = _T("alternate"); words.number[28] = 1589; words.chinese[28] = _T("adj. 替代的、輪流的；v. 交替；n. 替代者、候補者");	 words.ps[28] = _T("\r\nps. 相似詞：alternative (835) 替代的");
	words.word[29] = _T("contend"); words.number[29] = 1591; words.chinese[29] = _T("v. 競爭、爭奪、主張、聲明");	 words.ps[29] = _T("\r\nps. contender (n) 競爭者、爭奪者");
	words.word[30] = _T("terminate"); words.number[30] = 1595; words.chinese[30] = _T("v. 終止、結束");	 words.ps[30] = _T("\r\nps. termination (n) 終了、結束");
	words.word[31] = _T("duration"); words.number[31] = 1598; words.chinese[31] = _T("n. (活動、事件的)期間");	 words.ps[31] = _T("");

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
	words.word[7] = _T("bilingual");	words.number[7] = 2823; 	words.chinese[7] = _T("adj. 雙語的；n. 使用雙語者");
	words.word[8] = _T("assert"); 		words.number[8] = 2827; 	words.chinese[8] = _T("v. 堅稱、斷言；\r\nps. assertive (adj.) 斷言的、武斷的"); 
	words.word[9] = _T("exhausted"); 	words.number[9] = 2829; 	words.chinese[9] = _T("adj. 精疲力竭的、耗盡的、用完的；\r\nps. exhausting 使人精疲力竭的"); 
	words.word[10] = _T("grasp"); 		words.number[10] = 2831; 	words.chinese[10] = _T("v. 領會、理解、抓牢；n. 理解、緊抓");
	words.word[11] = _T("aptitude"); 	words.number[11] = 2837; 	words.chinese[11] = _T("n. 天資、才能、適宜、自然傾向");
	words.word[12] = _T("escalate");	words.number[12] = 2840; 	words.chinese[12] = _T("v. (程度)加劇、惡化、(薪資、物價等)逐漸上升");
	words.word[13] = _T("laundry"); 	words.number[13] = 2843; 	words.chinese[13] = _T("n. 送洗衣物、洗衣店");
	words.word[14] = _T("integrate"); 	words.number[14] = 2846; 	words.chinese[14] = _T("v. 整合、使完整；\r\nps. integration (n.) 整合、融合；integrated (adj.) 整合的");
	words.word[15] = _T("censorship");	words.number[15] = 2850; 	words.chinese[15] = _T("n. 審查(制度)；\r\nps. censor (n.) (出版物、電影等的)審查員");
	words.word[16] = _T("apprehensive");words.number[16] = 2852; 	words.chinese[16] = _T("adj. 擔憂的、憂慮的、領悟的");
	words.word[17] = _T("heritage"); 	words.number[17] = 2855; 	words.chinese[17] = _T("n. (文化歷史的)遺產、傳承");
	words.word[18] = _T("cuisine");		words.number[18] = 2859; 	words.chinese[18] = _T("n. 烹飪、烹飪法、菜餚");
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

