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
    TreeNode *head,*temp;
public:
    TreeNode* increasingBST(TreeNode* root) {
        head=temp=NULL;
        inorder(root);
        return head;
    }
    void inorder(TreeNode* root){
        if(!root) return;
        inorder(root->left);
        if(!head){
            head=temp= new TreeNode(root->val);
        }
        else{
            temp->right=new TreeNode(root->val);
            temp=temp->right;
        }
        inorder(root->right);
    }
    
};