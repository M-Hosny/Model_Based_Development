function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/In1 */
	this.urlHashMap["Factorial:6"] = "Factorial.c:36&Factorial.h:37";
	/* <Root>/MATLAB Function */
	this.urlHashMap["Factorial:1"] = "Factorial.c:35,49";
	/* <Root>/Out1 */
	this.urlHashMap["Factorial:7"] = "Factorial.c:48&Factorial.h:42";
	/* <S1>:1 */
	this.urlHashMap["Factorial:1:1"] = "Factorial.c:38";
	/* <S1>:1:3 */
	this.urlHashMap["Factorial:1:1:3"] = "Factorial.c:39";
	/* <S1>:1:4 */
	this.urlHashMap["Factorial:1:1:4"] = "Factorial.c:42";
	/* <S1>:1:5 */
	this.urlHashMap["Factorial:1:1:5"] = "Factorial.c:44";
	/* <S1>:1:7 */
	this.urlHashMap["Factorial:1:1:7"] = "Factorial.c:51";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Factorial"};
	this.sidHashMap["Factorial"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "Factorial:1"};
	this.sidHashMap["Factorial:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "Factorial:6"};
	this.sidHashMap["Factorial:6"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/MATLAB Function"] = {sid: "Factorial:1"};
	this.sidHashMap["Factorial:1"] = {rtwname: "<Root>/MATLAB Function"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "Factorial:7"};
	this.sidHashMap["Factorial:7"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<S1>:1"] = {sid: "Factorial:1:1"};
	this.sidHashMap["Factorial:1:1"] = {rtwname: "<S1>:1"};
	this.rtwnameHashMap["<S1>:1:3"] = {sid: "Factorial:1:1:3"};
	this.sidHashMap["Factorial:1:1:3"] = {rtwname: "<S1>:1:3"};
	this.rtwnameHashMap["<S1>:1:4"] = {sid: "Factorial:1:1:4"};
	this.sidHashMap["Factorial:1:1:4"] = {rtwname: "<S1>:1:4"};
	this.rtwnameHashMap["<S1>:1:5"] = {sid: "Factorial:1:1:5"};
	this.sidHashMap["Factorial:1:1:5"] = {rtwname: "<S1>:1:5"};
	this.rtwnameHashMap["<S1>:1:7"] = {sid: "Factorial:1:1:7"};
	this.sidHashMap["Factorial:1:1:7"] = {rtwname: "<S1>:1:7"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
