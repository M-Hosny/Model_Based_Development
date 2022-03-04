function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Operand_One */
	this.urlHashMap["Logic_Calculator:13"] = "Logic_Calculator.c:35,43,51,66&Logic_Calculator.h:38";
	/* <Root>/Operand_Two */
	this.urlHashMap["Logic_Calculator:14"] = "Logic_Calculator.c:36,44,52,72&Logic_Calculator.h:39";
	/* <Root>/AND
Operation */
	this.urlHashMap["Logic_Calculator:25"] = "Logic_Calculator.c:37";
	/* <Root>/NOT
Operator1 */
	this.urlHashMap["Logic_Calculator:28"] = "Logic_Calculator.c:67";
	/* <Root>/NOT
Operator2 */
	this.urlHashMap["Logic_Calculator:29"] = "Logic_Calculator.c:73";
	/* <Root>/OR
Operation */
	this.urlHashMap["Logic_Calculator:30"] = "Logic_Calculator.c:45";
	/* <Root>/XNOR
Operation */
	this.urlHashMap["Logic_Calculator:31"] = "Logic_Calculator.c:61";
	/* <Root>/XOR
Operation */
	this.urlHashMap["Logic_Calculator:26"] = "Logic_Calculator.c:50";
	/* <Root>/AND_Res */
	this.urlHashMap["Logic_Calculator:15"] = "Logic_Calculator.c:34&Logic_Calculator.h:44";
	/* <Root>/OR_Res */
	this.urlHashMap["Logic_Calculator:16"] = "Logic_Calculator.c:42&Logic_Calculator.h:45";
	/* <Root>/XOR_Res */
	this.urlHashMap["Logic_Calculator:18"] = "Logic_Calculator.c:57&Logic_Calculator.h:46";
	/* <Root>/XNOR_Res */
	this.urlHashMap["Logic_Calculator:19"] = "Logic_Calculator.c:60&Logic_Calculator.h:47";
	/* <Root>/NOT_OP1_Res */
	this.urlHashMap["Logic_Calculator:20"] = "Logic_Calculator.c:65&Logic_Calculator.h:48";
	/* <Root>/NOT_OP2_Res */
	this.urlHashMap["Logic_Calculator:21"] = "Logic_Calculator.c:71&Logic_Calculator.h:49";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Logic_Calculator"};
	this.sidHashMap["Logic_Calculator"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/Operand_One"] = {sid: "Logic_Calculator:13"};
	this.sidHashMap["Logic_Calculator:13"] = {rtwname: "<Root>/Operand_One"};
	this.rtwnameHashMap["<Root>/Operand_Two"] = {sid: "Logic_Calculator:14"};
	this.sidHashMap["Logic_Calculator:14"] = {rtwname: "<Root>/Operand_Two"};
	this.rtwnameHashMap["<Root>/AND Operation"] = {sid: "Logic_Calculator:25"};
	this.sidHashMap["Logic_Calculator:25"] = {rtwname: "<Root>/AND Operation"};
	this.rtwnameHashMap["<Root>/NOT Operator1"] = {sid: "Logic_Calculator:28"};
	this.sidHashMap["Logic_Calculator:28"] = {rtwname: "<Root>/NOT Operator1"};
	this.rtwnameHashMap["<Root>/NOT Operator2"] = {sid: "Logic_Calculator:29"};
	this.sidHashMap["Logic_Calculator:29"] = {rtwname: "<Root>/NOT Operator2"};
	this.rtwnameHashMap["<Root>/OR Operation"] = {sid: "Logic_Calculator:30"};
	this.sidHashMap["Logic_Calculator:30"] = {rtwname: "<Root>/OR Operation"};
	this.rtwnameHashMap["<Root>/XNOR Operation"] = {sid: "Logic_Calculator:31"};
	this.sidHashMap["Logic_Calculator:31"] = {rtwname: "<Root>/XNOR Operation"};
	this.rtwnameHashMap["<Root>/XOR Operation"] = {sid: "Logic_Calculator:26"};
	this.sidHashMap["Logic_Calculator:26"] = {rtwname: "<Root>/XOR Operation"};
	this.rtwnameHashMap["<Root>/AND_Res"] = {sid: "Logic_Calculator:15"};
	this.sidHashMap["Logic_Calculator:15"] = {rtwname: "<Root>/AND_Res"};
	this.rtwnameHashMap["<Root>/OR_Res"] = {sid: "Logic_Calculator:16"};
	this.sidHashMap["Logic_Calculator:16"] = {rtwname: "<Root>/OR_Res"};
	this.rtwnameHashMap["<Root>/XOR_Res"] = {sid: "Logic_Calculator:18"};
	this.sidHashMap["Logic_Calculator:18"] = {rtwname: "<Root>/XOR_Res"};
	this.rtwnameHashMap["<Root>/XNOR_Res"] = {sid: "Logic_Calculator:19"};
	this.sidHashMap["Logic_Calculator:19"] = {rtwname: "<Root>/XNOR_Res"};
	this.rtwnameHashMap["<Root>/NOT_OP1_Res"] = {sid: "Logic_Calculator:20"};
	this.sidHashMap["Logic_Calculator:20"] = {rtwname: "<Root>/NOT_OP1_Res"};
	this.rtwnameHashMap["<Root>/NOT_OP2_Res"] = {sid: "Logic_Calculator:21"};
	this.sidHashMap["Logic_Calculator:21"] = {rtwname: "<Root>/NOT_OP2_Res"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
