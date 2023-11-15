
TreeNode* help(vector<int> pre,int ps,int pe,vector<int> in,int is,int ie,map<int,int> m)
{
    if(ps>pe || is>ie) return NULL;

    TreeNode* root=new TreeNode(pre[pe]);

    int inRoot=m[root->val];
     int numLeft=inRoot-is;

    root->left=help(pre,ps,ps+numLeft-1,in,is,inRoot-1,m);
    root->right=help(pre,ps+numLeft,pe-1,in,inRoot+1,ie,m);

    return root;
}
TreeNode* buildTree(vector<int>& pre, vector<int>& in) {

    map<int,int> m;

    for(int i=0;i<in.size();i++)
    {
        m[in[i]]=i;
    }

    return help(pre,0,pre.size()-1,in,0,in.size()-1,m);
        
    }