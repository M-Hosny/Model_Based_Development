function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Chart */
	this.urlHashMap["Assignment:12"] = "Assignment.c:35,73,98&Assignment.h:47,48";
	/* <Root>/Constant */
	this.urlHashMap["Assignment:7"] = "Assignment.c:36";
	/* <Root>/Function-Call
Subsystem */
	this.urlHashMap["Assignment:1"] = "Assignment.c:59,65";
	/* <Root>/Out1 */
	this.urlHashMap["Assignment:8"] = "Assignment.c:75&Assignment.h:53";
	/* <S1>:1 */
	this.urlHashMap["Assignment:12:1"] = "Assignment.c:53,55,66,69";
	/* <S1>:2 */
	this.urlHashMap["Assignment:12:2"] = "Assignment.c:50";
	/* <S1>:3 */
	this.urlHashMap["Assignment:12:3"] = "Assignment.c:60";
	/* <S1>:4 */
	this.urlHashMap["Assignment:12:4"] = "Assignment.c:62";
	/* <S1>:3:1 */
	this.urlHashMap["Assignment:12:3:1"] = "Assignment.c:56,57,61";
	/* <S2>/In1 */
	this.urlHashMap["Assignment:2"] = "Assignment.c:37&Assignment.h:38";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Assignment"};
	this.sidHashMap["Assignment"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "Assignment:12"};
	this.sidHashMap["Assignment:12"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "Assignment:1"};
	this.sidHashMap["Assignment:1"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<Root>/Chart"] = {sid: "Assignment:12"};
	this.sidHashMap["Assignment:12"] = {rtwname: "<Root>/Chart"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "Assignment:7"};
	this.sidHashMap["Assignment:7"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/Function-Call Subsystem"] = {sid: "Assignment:1"};
	this.sidHashMap["Assignment:1"] = {rtwname: "<Root>/Function-Call Subsystem"};
	this.rtwnameHashMap["<Root>/Lamp"] = {sid: "Assignment:9"};
	this.sidHashMap["Assignment:9"] = {rtwname: "<Root>/Lamp"};
	this.rtwnameHashMap["<Root>/Toggle Switch"] = {sid: "Assignment:10"};
	this.sidHashMap["Assignment:10"] = {rtwname: "<Root>/Toggle Switch"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "Assignment:8"};
	this.sidHashMap["Assignment:8"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<S1>:1"] = {sid: "Assignment:12:1"};
	this.sidHashMap["Assignment:12:1"] = {rtwname: "<S1>:1"};
	this.rtwnameHashMap["<S1>:2"] = {sid: "Assignment:12:2"};
	this.sidHashMap["Assignment:12:2"] = {rtwname: "<S1>:2"};
	this.rtwnameHashMap["<S1>:3"] = {sid: "Assignment:12:3"};
	this.sidHashMap["Assignment:12:3"] = {rtwname: "<S1>:3"};
	this.rtwnameHashMap["<S1>:4"] = {sid: "Assignment:12:4"};
	this.sidHashMap["Assignment:12:4"] = {rtwname: "<S1>:4"};
	this.rtwnameHashMap["<S1>:3:1"] = {sid: "Assignment:12:3:1"};
	this.sidHashMap["Assignment:12:3:1"] = {rtwname: "<S1>:3:1"};
	this.rtwnameHashMap["<S2>/In1"] = {sid: "Assignment:2"};
	this.sidHashMap["Assignment:2"] = {rtwname: "<S2>/In1"};
	this.rtwnameHashMap["<S2>/function"] = {sid: "Assignment:3"};
	this.sidHashMap["Assignment:3"] = {rtwname: "<S2>/function"};
	this.rtwnameHashMap["<S2>/Out1"] = {sid: "Assignment:4"};
	this.sidHashMap["Assignment:4"] = {rtwname: "<S2>/Out1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
