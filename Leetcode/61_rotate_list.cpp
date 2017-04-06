#include "stdafx.h"
using namespace std;

// Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
	ListNode* rotateRight(ListNode* head, int k)
	{
		if (!head)
		{
			return head;
		}
		ListNode* temp = head;
		int length = 0;
		while (temp->next != NULL)
		{
			temp = temp->next;
			length++;
		}
		length++;
		temp->next = head;
		if (k%length != 0)

		{
			for (auto i = 0; i<length - k%length; i++)
			{
				temp = temp->next;
			}
		}
		ListNode* newhead = temp->next;
		temp->next = NULL;
		return newhead;
	}
};