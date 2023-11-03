 int orangesRotting(vector<vector<int>>& grid) {

        int m=grid.size();
        int n=grid[0].size();

        queue<pair<pair<int,int>,int>> q;

        int vis[m][n];

        int cntf=0;
        int cnt=0;

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({{i,j},0});
                }
                else
                {
                    vis[i][j]=0;
                }
                if(grid[i][j]==1)
                {
                    cntf++;
                }

            }
        }
        int tm=INT_MIN;

        vector<int> drow{1,0,-1,0};
        vector<int> dcol{0,1,0,-1};
        while(q.size()!=0)
        {
            int r=q.front().first.first;
            int c=q.front().first.second;
            int t=q.front().second;
            q.pop();
            tm=max(tm,t);

            for(int i=0;i<4;i++)
            {
                int nrow=r+drow[i];
                int ncol=c+dcol[i];

                if(nrow>=0 && ncol<n && nrow<m && ncol>=0 && vis[nrow][ncol]==0 && grid[nrow][ncol]==1)
                {
                    vis[nrow][ncol]=1;
                    q.push({{nrow,ncol},t+1});
                    cnt++;
                }
            }
        }

        return (cnt==cntf)?tm:-1;


 }
