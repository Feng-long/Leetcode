/*
simple string 
*/
#include "stdafx.h"
using namespace std;
class Solution {
public:
	string reverseString(string s) {
		reverse(s.begin(), s.end());
		return s;
	}
};