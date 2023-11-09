queue<TreeNode*> q;

q.push(root);
vector<vector<int>> ans;
if(root==NULL)  return ans;
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
        v[i]=temp->val;
    
    }

    ans.push_back(v);
}
return ans;
    }