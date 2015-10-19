void dfs(string origTxt, vector<string> result, string item, int segIndex, int start) {
	//终止条件
	if(start >= origTxt.length())
		return;

	if(segIndex == 4) {
		string subStr = origTxt.subStr(start);
		if(isValidIpItem(subStr))
			result.push_back(item + "." + subStr);
		return;
	}

	for(int i = 1; i < 4 && ((start + i) <= origTxt.length()); i++) {
		string subStr = origTxt.subStr(start, start + i);
		if(isValidIpItem(subStr)) {
			if(segIndex == 1) {
				dfs(origTxt, result, subStr, segIndex + 1, start + i);
			} else {
				dfs(origTxt, result, item + "." + subStr, segIndex + 1, start + i);
			}
		}
	}
}