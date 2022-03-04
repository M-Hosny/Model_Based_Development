function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Operand_One */
	this.urlHashMap["Calculator:2"] = "Calculator.c:74&Calculator.h:52";
	/* <Root>/Operand_Two */
	this.urlHashMap["Calculator:1"] = "Calculator.c:75&Calculator.h:53";
	/* <Root>/Subsystem */
	this.urlHashMap["Calculator:39"] = "Calculator.c:32,72,80&Calculator.h:36,47";
	/* <Root>/Add_Res */
	this.urlHashMap["Calculator:3"] = "Calculator.c:82&Calculator.h:58";
	/* <Root>/Sub_Res */
	this.urlHashMap["Calculator:7"] = "Calculator.c:85&Calculator.h:59";
	/* <Root>/Mul_Res */
	this.urlHashMap["Calculator:38"] = "Calculator.c:88&Calculator.h:60";
	/* <Root>/Div_Res
 */
	this.urlHashMap["Calculator:36"] = "Calculator.c:91&Calculator.h:61";
	/* <Root>/Zero_Div_Flag */
	this.urlHashMap["Calculator:27"] = "Calculator.c:94&Calculator.h:62";
	/* <S1>/Add */
	this.urlHashMap["Calculator:4"] = "Calculator.c:36&Calculator.h:38";
	/* <S1>/Constant */
	this.urlHashMap["Calculator:32"] = "Calculator.c:40";
	/* <S1>/If */
	this.urlHashMap["Calculator:25"] = "Calculator.c:39,60";
	/* <S1>/If Action
Subsystem */
	this.urlHashMap["Calculator:21"] = "Calculator.c:44,50";
	/* <S1>/If Action
Subsystem1 */
	this.urlHashMap["Calculator:28"] = "Calculator.c:52,57";
	/* <S1>/Product */
	this.urlHashMap["Calculator:6"] = "Calculator.c:62&Calculator.h:39";
	/* <S1>/Subtract */
	this.urlHashMap["Calculator:5"] = "Calculator.c:65&Calculator.h:40";
	/* <S2>/Action Port */
	this.urlHashMap["Calculator:23"] = "Calculator.c:45";
	/* <S2>/Divide */
	this.urlHashMap["Calculator:37"] = "Calculator.c:47&Calculator.h:42";
	/* <S3>/In1 */
	this.urlHashMap["Calculator:29"] = "Calculator.c:41&Calculator.h:41";
	/* <S3>/Action Port */
	this.urlHashMap["Calculator:30"] = "Calculator.c:53";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Calculator"};
	this.sidHashMap["Calculator"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "Calculator:39"};
	this.sidHashMap["Calculator:39"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "Calculator:21"};
	this.sidHashMap["Calculator:21"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<S3>"] = {sid: "Calculator:28"};
	this.sidHashMap["Calculator:28"] = {rtwname: "<S3>"};
	this.rtwnameHashMap["<Root>/Operand_One"] = {sid: "Calculator:2"};
	this.sidHashMap["Calculator:2"] = {rtwname: "<Root>/Operand_One"};
	this.rtwnameHashMap["<Root>/Operand_Two"] = {sid: "Calculator:1"};
	this.sidHashMap["Calculator:1"] = {rtwname: "<Root>/Operand_Two"};
	this.rtwnameHashMap["<Root>/Subsystem"] = {sid: "Calculator:39"};
	this.sidHashMap["Calculator:39"] = {rtwname: "<Root>/Subsystem"};
	this.rtwnameHashMap["<Root>/Add_Res"] = {sid: "Calculator:3"};
	this.sidHashMap["Calculator:3"] = {rtwname: "<Root>/Add_Res"};
	this.rtwnameHashMap["<Root>/Sub_Res"] = {sid: "Calculator:7"};
	this.sidHashMap["Calculator:7"] = {rtwname: "<Root>/Sub_Res"};
	this.rtwnameHashMap["<Root>/Mul_Res"] = {sid: "Calculator:38"};
	this.sidHashMap["Calculator:38"] = {rtwname: "<Root>/Mul_Res"};
	this.rtwnameHashMap["<Root>/Div_Res "] = {sid: "Calculator:36"};
	this.sidHashMap["Calculator:36"] = {rtwname: "<Root>/Div_Res "};
	this.rtwnameHashMap["<Root>/Zero_Div_Flag"] = {sid: "Calculator:27"};
	this.sidHashMap["Calculator:27"] = {rtwname: "<Root>/Zero_Div_Flag"};
	this.rtwnameHashMap["<S1>/Operand_One"] = {sid: "Calculator:40"};
	this.sidHashMap["Calculator:40"] = {rtwname: "<S1>/Operand_One"};
	this.rtwnameHashMap["<S1>/Operand_Two"] = {sid: "Calculator:41"};
	this.sidHashMap["Calculator:41"] = {rtwname: "<S1>/Operand_Two"};
	this.rtwnameHashMap["<S1>/Add"] = {sid: "Calculator:4"};
	this.sidHashMap["Calculator:4"] = {rtwname: "<S1>/Add"};
	this.rtwnameHashMap["<S1>/Constant"] = {sid: "Calculator:32"};
	this.sidHashMap["Calculator:32"] = {rtwname: "<S1>/Constant"};
	this.rtwnameHashMap["<S1>/If"] = {sid: "Calculator:25"};
	this.sidHashMap["Calculator:25"] = {rtwname: "<S1>/If"};
	this.rtwnameHashMap["<S1>/If Action Subsystem"] = {sid: "Calculator:21"};
	this.sidHashMap["Calculator:21"] = {rtwname: "<S1>/If Action Subsystem"};
	this.rtwnameHashMap["<S1>/If Action Subsystem1"] = {sid: "Calculator:28"};
	this.sidHashMap["Calculator:28"] = {rtwname: "<S1>/If Action Subsystem1"};
	this.rtwnameHashMap["<S1>/Product"] = {sid: "Calculator:6"};
	this.sidHashMap["Calculator:6"] = {rtwname: "<S1>/Product"};
	this.rtwnameHashMap["<S1>/Subtract"] = {sid: "Calculator:5"};
	this.sidHashMap["Calculator:5"] = {rtwname: "<S1>/Subtract"};
	this.rtwnameHashMap["<S1>/Add_Res"] = {sid: "Calculator:42"};
	this.sidHashMap["Calculator:42"] = {rtwname: "<S1>/Add_Res"};
	this.rtwnameHashMap["<S1>/Sub_Res"] = {sid: "Calculator:43"};
	this.sidHashMap["Calculator:43"] = {rtwname: "<S1>/Sub_Res"};
	this.rtwnameHashMap["<S1>/Mul_Res"] = {sid: "Calculator:44"};
	this.sidHashMap["Calculator:44"] = {rtwname: "<S1>/Mul_Res"};
	this.rtwnameHashMap["<S1>/Div_Res "] = {sid: "Calculator:45"};
	this.sidHashMap["Calculator:45"] = {rtwname: "<S1>/Div_Res "};
	this.rtwnameHashMap["<S1>/Zero_Div_Flag"] = {sid: "Calculator:46"};
	this.sidHashMap["Calculator:46"] = {rtwname: "<S1>/Zero_Div_Flag"};
	this.rtwnameHashMap["<S2>/In1"] = {sid: "Calculator:22"};
	this.sidHashMap["Calculator:22"] = {rtwname: "<S2>/In1"};
	this.rtwnameHashMap["<S2>/In2"] = {sid: "Calculator:33"};
	this.sidHashMap["Calculator:33"] = {rtwname: "<S2>/In2"};
	this.rtwnameHashMap["<S2>/Action Port"] = {sid: "Calculator:23"};
	this.sidHashMap["Calculator:23"] = {rtwname: "<S2>/Action Port"};
	this.rtwnameHashMap["<S2>/Divide"] = {sid: "Calculator:37"};
	this.sidHashMap["Calculator:37"] = {rtwname: "<S2>/Divide"};
	this.rtwnameHashMap["<S2>/Out1"] = {sid: "Calculator:24"};
	this.sidHashMap["Calculator:24"] = {rtwname: "<S2>/Out1"};
	this.rtwnameHashMap["<S3>/In1"] = {sid: "Calculator:29"};
	this.sidHashMap["Calculator:29"] = {rtwname: "<S3>/In1"};
	this.rtwnameHashMap["<S3>/Action Port"] = {sid: "Calculator:30"};
	this.sidHashMap["Calculator:30"] = {rtwname: "<S3>/Action Port"};
	this.rtwnameHashMap["<S3>/Out1"] = {sid: "Calculator:31"};
	this.sidHashMap["Calculator:31"] = {rtwname: "<S3>/Out1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
