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
private: vector<vector<int>> result;
public:
	int depth(TreeNode* root)
	{
		if (root == NULL)
		{
			return 0;
		}
		return 1 + max(depth(root->left), depth(root->right));
	}
	void traverse(TreeNode* root, int level, vector<int> &temp)
	{
		if (level < 1 || root == NULL)
		{
			return;
		}
		if (level == 1)
		{
			temp.push_back(root->val);
		}
		traverse(root->left, level - 1, temp);
		traverse(root->right, level - 1, temp);
	}
	vector<vector<int>> zigzagLevelOrder(TreeNode* root)
	{
		int T = depth(root);
		for (int i = 1; i <= T; i++)
		{
			vector<int> temp;
			traverse(root, i, temp);
			if (!(i % 2))
			{
				reverse(temp.begin(), temp.end());
			}
			result.push_back(temp);
		}
		return result;
	}


};