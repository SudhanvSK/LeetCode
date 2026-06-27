class Solution {
public:
    vector<int> v;
    void inorder(TreeNode* r)
    {
        if(r==NULL) return;
        inorder(r->left);
        v.push_back(r->val);
        inorder(r->right);
    }
    vector<int> inorderTraversal(TreeNode* root) 
    {
        inorder(root);
        return v;
    }
};