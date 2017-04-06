#include "stdafx.h"
using namespace std;

// Definition for singly-linked list.
struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
	

};
class Compare 
{
public:
	bool operator()(ListNode* p1, ListNode* p2) 
	{
		return p1->val > p2->val;
	}
};

class Solution {
public:
	ListNode* mergeKLists(vector<ListNode*>& lists) 
	{
		priority_queue<ListNode*, vector<ListNode*>, Compare > que;

		int k = lists.size();
		for (int i = 0; i < k; ++i)
		{
			if (lists[i] != NULL)    
				que.push(lists[i]);
		}

		
		ListNode* pHead = new ListNode(-1);
		ListNode* pCur = pHead;

		while (!que.empty()) 
		{
			
			ListNode *tmp = que.top();
			que.pop();

		
			pCur->next = tmp;
			pCur = pCur->next;

			
			if (tmp->next != NULL) {
				que.push(tmp->next);
			}
		}
		pCur = pHead->next;
		delete pHead;    

		return pCur;
	}
};