/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool istrue(TreeNode* node, long long min, long long max){
        if(node==NULL)return true;
        if(node->val <= min || node->val >=max)return false;
        return istrue(node->left,min,node->val)&&istrue(node->right,node->val,max);
    }
    bool isValidBST(TreeNode* root) {
        return istrue(root,LLONG_MIN,LLONG_MAX);
    }
};