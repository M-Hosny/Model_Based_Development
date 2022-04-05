function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Chart */
	this.urlHashMap["Assign:1"] = "Assign.c:35,98,125&Assign.h:47,48";
	/* <Root>/Constant */
	this.urlHashMap["Assign:2"] = "msg=rtwMsg_CodeGenerationReducedBlock&block=Assign:2";
	/* <Root>/Function-Call
Subsystem */
	this.urlHashMap["Assign:3"] = "Assign.c:56,88,126";
	/* <Root>/Out1 */
	this.urlHashMap["Assign:11"] = "Assign.c:100&Assign.h:53";
	/* <S1>:1 */
	this.urlHashMap["Assign:1:1"] = "Assign.c:50,52,91,94";
	/* <S1>:2 */
	this.urlHashMap["Assign:1:2"] = "Assign.c:47";
	/* <S1>:3 */
	this.urlHashMap["Assign:1:3"] = "Assign.c:58";
	/* <S1>:4 */
	this.urlHashMap["Assign:1:4"] = "Assign.c:60";
	/* <S1>:3:1 */
	this.urlHashMap["Assign:1:3:1"] = "Assign.c:53,54,59";
	/* <S2>/CheckSwitchStatus */
	this.urlHashMap["Assign:6"] = "msg=rtwMsg_CodeGenerationReducedBlock&block=Assign:6";
	/* <S2>/LedState
 */
	this.urlHashMap["Assign:7"] = "Assign.c:57,128&Assign.h:38";
	/* <S3>:1 */
	this.urlHashMap["Assign:6:1"] = "Assign.c:67";
	/* <S3>:2 */
	this.urlHashMap["Assign:6:2"] = "Assign.c:69";
	/* <S3>:3 */
	this.urlHashMap["Assign:6:3"] = "msg=rtwMsg_notTraceable&block=Assign:6:3";
	/* <S3>:4 */
	this.urlHashMap["Assign:6:4"] = "Assign.c:70";
	/* <S3>:5 */
	this.urlHashMap["Assign:6:5"] = "Assign.c:71";
	/* <S3>:6 */
	this.urlHashMap["Assign:6:6"] = "Assign.c:72";
	/* <S4>:1 */
	this.urlHashMap["Assign:7:1"] = "Assign.c:82";
	/* <S4>:2 */
	this.urlHashMap["Assign:7:2"] = "Assign.c:84";
	/* <S4>:3 */
	this.urlHashMap["Assign:7:3"] = "msg=rtwMsg_notTraceable&block=Assign:7:3";
	/* <S4>:4 */
	this.urlHashMap["Assign:7:4"] = "Assign.c:85";
	/* <S4>:5 */
	this.urlHashMap["Assign:7:5"] = "Assign.c:89";
	/* <S4>:6 */
	this.urlHashMap["Assign:7:6"] = "Assign.c:90";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Assign"};
	this.sidHashMap["Assign"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "Assign:1"};
	this.sidHashMap["Assign:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "Assign:3"};
	this.sidHashMap["Assign:3"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<S3>"] = {sid: "Assign:6"};
	this.sidHashMap["Assign:6"] = {rtwname: "<S3>"};
	this.rtwnameHashMap["<S4>"] = {sid: "Assign:7"};
	this.sidHashMap["Assign:7"] = {rtwname: "<S4>"};
	this.rtwnameHashMap["<Root>/Chart"] = {sid: "Assign:1"};
	this.sidHashMap["Assign:1"] = {rtwname: "<Root>/Chart"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "Assign:2"};
	this.sidHashMap["Assign:2"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/Function-Call Subsystem"] = {sid: "Assign:3"};
	this.sidHashMap["Assign:3"] = {rtwname: "<Root>/Function-Call Subsystem"};
	this.rtwnameHashMap["<Root>/Lamp"] = {sid: "Assign:9"};
	this.sidHashMap["Assign:9"] = {rtwname: "<Root>/Lamp"};
	this.rtwnameHashMap["<Root>/Toggle Switch"] = {sid: "Assign:10"};
	this.sidHashMap["Assign:10"] = {rtwname: "<Root>/Toggle Switch"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "Assign:11"};
	this.sidHashMap["Assign:11"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<S1>:1"] = {sid: "Assign:1:1"};
	this.sidHashMap["Assign:1:1"] = {rtwname: "<S1>:1"};
	this.rtwnameHashMap["<S1>:2"] = {sid: "Assign:1:2"};
	this.sidHashMap["Assign:1:2"] = {rtwname: "<S1>:2"};
	this.rtwnameHashMap["<S1>:3"] = {sid: "Assign:1:3"};
	this.sidHashMap["Assign:1:3"] = {rtwname: "<S1>:3"};
	this.rtwnameHashMap["<S1>:4"] = {sid: "Assign:1:4"};
	this.sidHashMap["Assign:1:4"] = {rtwname: "<S1>:4"};
	this.rtwnameHashMap["<S1>:3:1"] = {sid: "Assign:1:3:1"};
	this.sidHashMap["Assign:1:3:1"] = {rtwname: "<S1>:3:1"};
	this.rtwnameHashMap["<S2>/In1"] = {sid: "Assign:4"};
	this.sidHashMap["Assign:4"] = {rtwname: "<S2>/In1"};
	this.rtwnameHashMap["<S2>/function"] = {sid: "Assign:5"};
	this.sidHashMap["Assign:5"] = {rtwname: "<S2>/function"};
	this.rtwnameHashMap["<S2>/CheckSwitchStatus"] = {sid: "Assign:6"};
	this.sidHashMap["Assign:6"] = {rtwname: "<S2>/CheckSwitchStatus"};
	this.rtwnameHashMap["<S2>/LedState "] = {sid: "Assign:7"};
	this.sidHashMap["Assign:7"] = {rtwname: "<S2>/LedState "};
	this.rtwnameHashMap["<S2>/Out1"] = {sid: "Assign:8"};
	this.sidHashMap["Assign:8"] = {rtwname: "<S2>/Out1"};
	this.rtwnameHashMap["<S3>:1"] = {sid: "Assign:6:1"};
	this.sidHashMap["Assign:6:1"] = {rtwname: "<S3>:1"};
	this.rtwnameHashMap["<S3>:2"] = {sid: "Assign:6:2"};
	this.sidHashMap["Assign:6:2"] = {rtwname: "<S3>:2"};
	this.rtwnameHashMap["<S3>:3"] = {sid: "Assign:6:3"};
	this.sidHashMap["Assign:6:3"] = {rtwname: "<S3>:3"};
	this.rtwnameHashMap["<S3>:4"] = {sid: "Assign:6:4"};
	this.sidHashMap["Assign:6:4"] = {rtwname: "<S3>:4"};
	this.rtwnameHashMap["<S3>:5"] = {sid: "Assign:6:5"};
	this.sidHashMap["Assign:6:5"] = {rtwname: "<S3>:5"};
	this.rtwnameHashMap["<S3>:6"] = {sid: "Assign:6:6"};
	this.sidHashMap["Assign:6:6"] = {rtwname: "<S3>:6"};
	this.rtwnameHashMap["<S4>:1"] = {sid: "Assign:7:1"};
	this.sidHashMap["Assign:7:1"] = {rtwname: "<S4>:1"};
	this.rtwnameHashMap["<S4>:2"] = {sid: "Assign:7:2"};
	this.sidHashMap["Assign:7:2"] = {rtwname: "<S4>:2"};
	this.rtwnameHashMap["<S4>:3"] = {sid: "Assign:7:3"};
	this.sidHashMap["Assign:7:3"] = {rtwname: "<S4>:3"};
	this.rtwnameHashMap["<S4>:4"] = {sid: "Assign:7:4"};
	this.sidHashMap["Assign:7:4"] = {rtwname: "<S4>:4"};
	this.rtwnameHashMap["<S4>:5"] = {sid: "Assign:7:5"};
	this.sidHashMap["Assign:7:5"] = {rtwname: "<S4>:5"};
	this.rtwnameHashMap["<S4>:6"] = {sid: "Assign:7:6"};
	this.sidHashMap["Assign:7:6"] = {rtwname: "<S4>:6"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
