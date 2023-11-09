void leftOnly(TreeNode<int>* root,vector<int>&ans)
{
    if(root==NULL || (root->left==NULL && root->right==NULL))
    {
        return ;
    }

    ans.push_back(root->data);

    if(root->left==NULL)
    {
        leftOnly(root->right,ans);
    }
    leftOnly(root->left,ans);
}
void leafOnly(TreeNode<int>* root,vector<int> &ans)
{
    if(root==NULL) return;

    if(root->left==NULL && root->right==NULL)
    {
        ans.push_back(root->data);
    }

    leafOnly(root->left,ans);
    leafOnly(root->right,ans);
}

void rightOnly(TreeNode<int>* root,vector<int>&ans)
{
     if(root==NULL || (root->left==NULL && root->right==NULL))
    {
        return ;
    }

    

    if(root->right==NULL)
    {
        rightOnly(root->left,ans);
    }
    rightOnly(root->right,ans);

    ans.push_back(root->data);
}
vector<int> traverseBoundary(TreeNode<int> *root)
{
	// Write your code here.
    vector<int> ans;
    ans.push_back(root->data);
    leftOnly(root->left,ans);
    leafOnly(root,ans);
    rightOnly(root->right,ans);
    return ans;
}