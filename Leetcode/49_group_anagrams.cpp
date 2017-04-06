#include "stdafx.h"
using namespace std;
class Solution {
public:
	vector<vector<string>> groupAnagrams(vector<string>& strs)
	{
		unordered_map<string, vector<string>> group;
		for (const auto s : strs)
		{
			string k = s;
			sort(k.begin(), k.end());
			group[k].push_back(s);
		}
		vector<vector<string>> result;
		for (auto i = group.cbegin(); i != group.cend(); i++)
		{
			vector<string> temp(i->second.begin(), i->second.end());
			sort(temp.begin(), temp.end());
			result.push_back(temp);
		}
		return result;
	}
};