/**
* Definition for a binary tree node.*/
#include "stdafx.h"
using namespace std;
struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:
	bool isSameTree(TreeNode* p, TreeNode* q) {


		if (!p && !q)
			return true;

		if ((!p&&q) || (!q&&p) || (p->val != q->val))
			return false;


		return  isSameTree(p->left, q->left) && isSameTree(p->right, q->right);


	}
};