function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Chart */
	this.urlHashMap["Traffic_Light:1"] = "Traffic_Light.c:19,41,119,151&Traffic_Light.h:38,39,40,57,58,59";
	/* <Root>/Out1 */
	this.urlHashMap["Traffic_Light:5"] = "Traffic_Light.c:121&Traffic_Light.h:64";
	/* <Root>/Out2 */
	this.urlHashMap["Traffic_Light:6"] = "Traffic_Light.c:124&Traffic_Light.h:65";
	/* <Root>/Out3 */
	this.urlHashMap["Traffic_Light:7"] = "Traffic_Light.c:127&Traffic_Light.h:66";
	/* <S1>:3 */
	this.urlHashMap["Traffic_Light:1:3"] = "Traffic_Light.c:64,88";
	/* <S1>:4 */
	this.urlHashMap["Traffic_Light:1:4"] = "Traffic_Light.c:82,106";
	/* <S1>:1 */
	this.urlHashMap["Traffic_Light:1:1"] = "Traffic_Light.c:57,70,100";
	/* <S1>:2 */
	this.urlHashMap["Traffic_Light:1:2"] = "Traffic_Light.c:53";
	/* <S1>:7 */
	this.urlHashMap["Traffic_Light:1:7"] = "Traffic_Light.c:66";
	/* <S1>:5 */
	this.urlHashMap["Traffic_Light:1:5"] = "Traffic_Light.c:102";
	/* <S1>:15 */
	this.urlHashMap["Traffic_Light:1:15"] = "Traffic_Light.c:84";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Traffic_Light"};
	this.sidHashMap["Traffic_Light"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "Traffic_Light:1"};
	this.sidHashMap["Traffic_Light:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/Chart"] = {sid: "Traffic_Light:1"};
	this.sidHashMap["Traffic_Light:1"] = {rtwname: "<Root>/Chart"};
	this.rtwnameHashMap["<Root>/Lamp"] = {sid: "Traffic_Light:2"};
	this.sidHashMap["Traffic_Light:2"] = {rtwname: "<Root>/Lamp"};
	this.rtwnameHashMap["<Root>/Lamp1"] = {sid: "Traffic_Light:3"};
	this.sidHashMap["Traffic_Light:3"] = {rtwname: "<Root>/Lamp1"};
	this.rtwnameHashMap["<Root>/Lamp2"] = {sid: "Traffic_Light:4"};
	this.sidHashMap["Traffic_Light:4"] = {rtwname: "<Root>/Lamp2"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "Traffic_Light:5"};
	this.sidHashMap["Traffic_Light:5"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<Root>/Out2"] = {sid: "Traffic_Light:6"};
	this.sidHashMap["Traffic_Light:6"] = {rtwname: "<Root>/Out2"};
	this.rtwnameHashMap["<Root>/Out3"] = {sid: "Traffic_Light:7"};
	this.sidHashMap["Traffic_Light:7"] = {rtwname: "<Root>/Out3"};
	this.rtwnameHashMap["<S1>:3"] = {sid: "Traffic_Light:1:3"};
	this.sidHashMap["Traffic_Light:1:3"] = {rtwname: "<S1>:3"};
	this.rtwnameHashMap["<S1>:4"] = {sid: "Traffic_Light:1:4"};
	this.sidHashMap["Traffic_Light:1:4"] = {rtwname: "<S1>:4"};
	this.rtwnameHashMap["<S1>:1"] = {sid: "Traffic_Light:1:1"};
	this.sidHashMap["Traffic_Light:1:1"] = {rtwname: "<S1>:1"};
	this.rtwnameHashMap["<S1>:2"] = {sid: "Traffic_Light:1:2"};
	this.sidHashMap["Traffic_Light:1:2"] = {rtwname: "<S1>:2"};
	this.rtwnameHashMap["<S1>:7"] = {sid: "Traffic_Light:1:7"};
	this.sidHashMap["Traffic_Light:1:7"] = {rtwname: "<S1>:7"};
	this.rtwnameHashMap["<S1>:5"] = {sid: "Traffic_Light:1:5"};
	this.sidHashMap["Traffic_Light:1:5"] = {rtwname: "<S1>:5"};
	this.rtwnameHashMap["<S1>:15"] = {sid: "Traffic_Light:1:15"};
	this.sidHashMap["Traffic_Light:1:15"] = {rtwname: "<S1>:15"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
