function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/In1 */
	this.urlHashMap["Factorial_using_charts:1"] = "Factorial_using_charts.c:82&Factorial_using_charts.h:37";
	/* <Root>/Chart */
	this.urlHashMap["Factorial_using_charts:2"] = "Factorial_using_charts.c:81,100";
	/* <Root>/Out1 */
	this.urlHashMap["Factorial_using_charts:3"] = "Factorial_using_charts.c:102&Factorial_using_charts.h:42";
	/* <S1>:1 */
	this.urlHashMap["Factorial_using_charts:2:1"] = "Factorial_using_charts.c:87";
	/* <S1>:2 */
	this.urlHashMap["Factorial_using_charts:2:2"] = "Factorial_using_charts.c:92";
	/* <S1>:3 */
	this.urlHashMap["Factorial_using_charts:2:3"] = "Factorial_using_charts.c:93";
	/* <S1>:4 */
	this.urlHashMap["Factorial_using_charts:2:4"] = "Factorial_using_charts.c:88";
	/* <S1>:5 */
	this.urlHashMap["Factorial_using_charts:2:5"] = "Factorial_using_charts.c:96";
	/* <S1>:6 */
	this.urlHashMap["Factorial_using_charts:2:6"] = "Factorial_using_charts.c:103";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Factorial_using_charts"};
	this.sidHashMap["Factorial_using_charts"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "Factorial_using_charts:2"};
	this.sidHashMap["Factorial_using_charts:2"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "Factorial_using_charts:1"};
	this.sidHashMap["Factorial_using_charts:1"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/Chart"] = {sid: "Factorial_using_charts:2"};
	this.sidHashMap["Factorial_using_charts:2"] = {rtwname: "<Root>/Chart"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "Factorial_using_charts:3"};
	this.sidHashMap["Factorial_using_charts:3"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<S1>:1"] = {sid: "Factorial_using_charts:2:1"};
	this.sidHashMap["Factorial_using_charts:2:1"] = {rtwname: "<S1>:1"};
	this.rtwnameHashMap["<S1>:2"] = {sid: "Factorial_using_charts:2:2"};
	this.sidHashMap["Factorial_using_charts:2:2"] = {rtwname: "<S1>:2"};
	this.rtwnameHashMap["<S1>:3"] = {sid: "Factorial_using_charts:2:3"};
	this.sidHashMap["Factorial_using_charts:2:3"] = {rtwname: "<S1>:3"};
	this.rtwnameHashMap["<S1>:4"] = {sid: "Factorial_using_charts:2:4"};
	this.sidHashMap["Factorial_using_charts:2:4"] = {rtwname: "<S1>:4"};
	this.rtwnameHashMap["<S1>:5"] = {sid: "Factorial_using_charts:2:5"};
	this.sidHashMap["Factorial_using_charts:2:5"] = {rtwname: "<S1>:5"};
	this.rtwnameHashMap["<S1>:6"] = {sid: "Factorial_using_charts:2:6"};
	this.sidHashMap["Factorial_using_charts:2:6"] = {rtwname: "<S1>:6"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
