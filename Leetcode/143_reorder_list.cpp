#include "stdafx.h"
#include "stdafx.h"
// Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution
{
public:
	void reorderList(ListNode* head)
	{
		if (head == NULL || head->next == NULL)
		{
			return;
		}
		ListNode* list1 = head;
		ListNode* list2 = head;
		while (list2 != NULL && list2->next != NULL)
		{
			list2 = list2->next->next;
			list1 = list1->next;
		}
		list2 = list1->next;
		list1->next = NULL;
		reverse(list2);
		list1 = head;
		combine(list1, list2);

	}
private:
	void reverse(ListNode* &list)
	{
		if (list == NULL || list->next == NULL)
		{
			return;
		}
		ListNode* p = list;
		ListNode* q = p->next;
		p->next = NULL;
		ListNode* r = q->next;
		q->next = p;
		while (r != NULL)
		{
			p = q;
			q = r;
			r = q->next;
			q->next = p;
		}
		list = q;
	}
	void combine(ListNode* &list1, ListNode* &list2)
	{
		ListNode * lista = list1;
		ListNode * listb = list2;
		while (listb != NULL)
		{
			ListNode * tempa = lista->next;
			ListNode * tempb = listb->next;
			lista->next = listb;
			listb->next = tempa;
			lista = tempa;
			listb = tempb;
		}
	}

};