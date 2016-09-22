/*
A more straightforward solution is to pair searching and swap
*/
#include "stdafx.h"
using namespace std;
class Solution {
public:
	string reverseVowels(string s)
	{
		string vowel = "aeiouAEIOU";
		vector<int> index;
		string vowels;
		for (int i = 0; i < s.size(); i++)
		{
			if (vowel.find(s[i]) != string::npos)
			{
				index.push_back(i);
				vowels.insert(vowels.begin(), s[i]);
			}
		}
		for (int i = 0; i < index.size(); i++)
		{
			s[index[i]] = vowels[i];
		}
		return s;
	}
};