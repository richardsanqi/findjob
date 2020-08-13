#include <iostream>
#include <vector>

using namespace std;


class TreeNode {
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
 

class Solution {
public:
    void mrecursion(TreeNode* cur,vector<int>& res)
    {
        if(cur==NULL)
        return;
        mrecursion(cur->left,res);
        res.push_back(cur->val);
        mrecursion(cur->right,res);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        mrecursion(root,res);
        return res;
    }
};

