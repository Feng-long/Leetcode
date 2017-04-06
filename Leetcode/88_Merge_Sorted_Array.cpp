/*
Motivated by the discussion. constrain by >=0. No need to judge whether it's empty 
*/
#include "stdafx.h"
using namespace std;
class Solution
{
public:
	void merge(vector<int>& a, int m, vector<int>& b, int n)
	{
		int p = m - 1, q = n - 1, k = n + m - 1;
		a.resize(m + n);
		while (p >= 0 && q >= 0) a[k--] = a[p]>b[q] ? a[p--] : b[q--];
		for (int i = p; i >= 0; i--) a[k--] = a[i];
		for (int i = q; i >= 0; i--) a[k--] = b[i];
	}

};