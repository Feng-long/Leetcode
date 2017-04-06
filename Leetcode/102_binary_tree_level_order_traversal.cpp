#include "stdafx.h"
using namespace std;
/**
* Definition for a binary tree node.*/
struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:
	vector<vector<int>> result;
	int depth(TreeNode* root)
	{
		if (root == NULL)
		{
			return 0;
		}
		return 1 + max(depth(root->left), depth(root->right));
	}
	void traversal(TreeNode *root, int level, vector<int> &temp)
	{
		if (root == NULL || level <1)
		{
			return;
		}
		if (level == 1)
		{
			temp.push_back(root->val);

		}
		traversal(root->left, level - 1, temp);
		traversal(root->right, level - 1, temp);
	}
	vector<vector<int>> levelOrder(TreeNode* root)
	{
		int T = depth(root);
		for (int i = 1; i <= T; i++)
		{
			vector<int> temp;
			traversal(root, i, temp);
			result.push_back(temp);
		}
		return result;
	}

};