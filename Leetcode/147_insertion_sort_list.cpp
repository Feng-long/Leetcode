#include "stdafx.h"
using namespace std;
//Definition for singly-linked list.
 struct ListNode {
     int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* insertionSortList(ListNode* head)
	{
		if (!head)
		{
			return head;
		}
		ListNode newnode(INT_MIN);
		newnode.next= NULL;
		ListNode* l1 = head;
		while (l1)
		{
			auto pos = findposition(&newnode, l1->val);
			ListNode* tmp = l1->next;		
				l1->next = pos->next;
				pos->next = l1;
			l1 = tmp;
		}
		return newnode.next;
	}
	ListNode* findposition(ListNode* L, int key)
	{
		ListNode* pre = L;
		ListNode* cur = L->next;
		while (cur != NULL && cur->val < key)
		{
			pre = cur;
			cur = cur->next;

		}
		return pre;
	}
};