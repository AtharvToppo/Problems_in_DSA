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
    void inorder(TreeNode* root,int &prev,int &ans)
    {
        //base case
        if(!root)
        {
            return;
        }

        //left side
        inorder(root->left,prev,ans);
        //node
        ans=min(ans,abs(prev-root->val));
        prev=root->val;
        //right side
        inorder(root->right,prev,ans);
    }
    int minDiffInBST(TreeNode* root) {
        int prev=INT_MAX;
        int ans=INT_MAX;

        inorder(root,prev,ans);
        return ans;
    }
};