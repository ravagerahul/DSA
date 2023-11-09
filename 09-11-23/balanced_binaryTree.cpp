 int help(TreeNode* root)
    {
        if(root==NULL) return 0;

        int a=1+help(root->left);
        int b=1+help(root->right);

        if(abs(a-b)>1)
        {
            ans=false;
        }

        return max(a,b);
    }
    bool isBalanced(TreeNode* root) {
        
        help(root);

        return ans;
    }