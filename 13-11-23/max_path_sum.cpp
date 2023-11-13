int help(TreeNode* root)
if(root==NULL)
{
    return 0;
}

int a=max(0,help(root->left));
int b=max(0,help(root->right));

ans=max(ans,a+b+root->val);

return max(a,b)+root->val;