queue<TreeNode*> q;

        vector<vector<int>> ans;
        if(root==NULL)
        {
            return ans;
        }

        q.push(root);
        bool lefttoright=true;
        while(q.size()!=0)
        {
            int size=q.size();
            vector<int> v(size);
            for(int i=0;i<size;i++)
            {
                TreeNode* temp=q.front();
                q.pop();
                if(temp->left!=NULL)
                {
                    q.push(temp->left);
                }
                if(temp->right!=NULL)
                {
                    q.push(temp->right);
                }

                if(lefttoright)
                {
                    v[i]=temp->val;
                }
                else
                {
                    v[size-i-1]=temp->val;
                }

            }
            lefttoright=!lefttoright;
            ans.push_back(v);

        }
        return ans;