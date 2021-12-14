class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        int m=matrix.size();
        int n=matrix[0].size();
        cout<<m<<" "<<n;
        vector<pair<int,int>> index;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    index.push_back({i,j});
                }
            }
        }
        //sort(index.begin(),index.end());
        vector<pair<int,int>>::iterator itr;
        for(itr=index.begin();itr!=index.end();itr++)
        {
            for(int i=0;i<n;i++)
            {
                matrix[itr->first][i]=0;
            }
             for(int i=0;i<m;i++)
            {
                matrix[i][itr->second]=0;
            }
        }
    }
   
};