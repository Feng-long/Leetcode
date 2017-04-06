#include "stdafx.h"
using namespace std;

// Definition for singly-linked list.
struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution
{
public:
	ListNode* removeNthFromEnd(ListNode* head, int n)
	{
		ListNode newnode(-1);
		newnode.next = head;
		ListNode* l1 = &newnode; ListNode* l2 = &newnode;
		for (auto i = 0; i < n; i++)
		{
			l2 = l2->next;
		}
		while (l2->next)
		{
			l2 = l2->next;
			l1 = l1->next;
		}
		l1->next = l1->next->next;
		return newnode.next;
	}
};