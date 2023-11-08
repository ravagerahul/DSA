void postorder(TreeNode* root)
{
    if(root==NULL) return;

    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<endl;
}