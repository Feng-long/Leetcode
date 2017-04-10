#include "stdafx.h"
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
	ListNode* addTwoNumbers(ListNode* L1, ListNode* L2)
	{
		int count = 0;
		ListNode head(-1);
		ListNode* prev = &head;
		for (ListNode* p1 = L1, *p2 = L2; p1 != NULL || p2 != NULL; p1 = (p1 == NULL ? NULL : p1->next), p2 = (p2 == NULL ? NULL : p2->next), prev = prev->next)
		{
			int value = ((p1 == NULL ? 0 : p1->val) + (p2 == NULL ? 0 : p2->val) + count) % 10;
			prev->next = new ListNode(value);
			count = ((p1 == NULL ? 0 : p1->val) + (p2 == NULL ? 0 : p2->val) + count) / 10;
		}
		if (count > 0)
		{
			prev->next = new ListNode(count);
		}
		return head.next;
	}
};