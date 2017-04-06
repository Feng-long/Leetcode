#include "stdafx.h"
using namespace std;

// Definition for singly-linked list.
 struct ListNode
 {
     int val;
     ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };

class Solution
{
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
	{
		ListNode *temp1 = l1;
		ListNode *temp2 = l2;
		ListNode newnode(1);
		ListNode *p = &newnode;
		while (temp1 != NULL && temp2 != NULL)
		{
			if (temp1->val <temp2->val)
			{
				p->next = temp1;
				temp1 = temp1->next;
			}
			else
			{
				p->next = temp2;
				temp2 = temp2->next;
			}
			p = p->next;
		}
		if (temp1 != NULL)
		{
			p->next = temp1;
		}
		if (temp2 != NULL)
		{
			p->next = temp2;
		}
		return newnode.next;
	}
};