void preorder(TreeNode* root)
{
    if(root==NULL)
    {
        return;
    }

    cout<<root->data<<endl;
    preorder(root->left);
    preorder(root->right);
}
