void help(Node* root,vector<int> &v,int level)
{
    if(root==NULL)  return;
    
    if(v.size()==level) v.push_back(root->data);
     help(root->right,v,level+1);
    help(root->left,v,level+1);
   
}
vector<int> leftView(Node *root)
{
   // Your code herevector
   vector<int> ans;
   help(root,ans,0);
 retun ans;  
}