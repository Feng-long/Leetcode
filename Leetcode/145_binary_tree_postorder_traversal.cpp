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
private:
	vector<int> temp;
public:
	vector<int> postorderTraversal(TreeNode* root)
	{
		if (root != NULL)
		{
			postorderTraversal(root->left);
			postorderTraversal(root->right);
			temp.push_back(root->val);
		}
		return temp;
	}
};