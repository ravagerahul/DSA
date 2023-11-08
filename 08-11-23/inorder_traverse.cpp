void inorder(TreeNode* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<endl;
    inorder(root->right);
}