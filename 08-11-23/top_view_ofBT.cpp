vector<int> topView(Node *root)
    {

            vector<int> ans;
            if(root==NULL)
            {
                return ans;
            }

            queue<pair<Node*,int>> q;

            map<int,int> m;

            q.push({root,0});

            while(q.size()!=0)
            {
                Node* temp=q.front().first;
                int y=q.front().second;
                q.pop();

                if(m.find(y)==m.end())
                {
                    m[y]=temp->data;
                }
                if(temp->left!=NULL)
                {
                    q,push({temp->left,y-1});
                }
                if(temp->right!=NULL)
                {
                    q.push({temp->right,y+1});
                }
            }

            for(auto=it.begin();it!=m.end();++it)
            {
                ans.push_back(it->second);
            }
            return ans;

    }