#include "stdafx.h"
using namespace std;
/**
* Definition for a binary tree node.*/
struct TreeNode 
{
     int val;
     TreeNode *left;
	 TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	vector <int> temp;
	vector<int> inorderTraversal(TreeNode* root)
	{
		if (root != NULL)
		{

			inorderTraversal(root->left);
			temp.push_back(root->val);
			inorderTraversal(root->right);
		}
		return temp;
	}

};