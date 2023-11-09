int path=0;
int help(TreeNode* root)
{
    if(root==NULL)
        {
            return 0;
        }

        int a=help(root->left);
        int b=help(root->right);

        path=max(path,a+b);

        return max(a,b)+1;
}
    int diameterOfBinaryTree(TreeNode* root) {
        if(root->left==NULL && root->right==NULL)
        {
            return 0;
        }
        help(root);

        return path;
    }