class Solution {
public:
    // Submitted for 100DaysLeetCodeChallenge DAY 70
    void preOrder(TreeNode* root, vector <int> &v)
    {
        if(root==NULL) return;
        v.push_back(root->val);
        preOrder(root->left, v);
        preOrder(root->right, v);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector <int> v;
        preOrder(root, v);
        return v;
    }
};