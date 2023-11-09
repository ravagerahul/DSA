if(root==NULL)
        {
            return NULL;
        }

        if(root==p)
        {
            return p;
        }
        if(root==q)
        {
            return q;

        }
        TreeNode* left=lowestCommonAncestor(root->left,p,q);
        TreeNode* right=lowestCommonAncestor(root->right,p,q);
        if(left==NULL)  return right;

        else if(right==NULL) return left;
        return root;