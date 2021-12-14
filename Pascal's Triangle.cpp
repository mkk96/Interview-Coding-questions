class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> result;
        result.push_back({1});
        int array[numRows][numRows];
        for(int i=0;i<numRows;i++)
        {
            array[i][0]=1;
            array[i][i]=1;
        }
        for(int i=1;i<numRows;i++)
        {
            vector<int> temp;
            temp.push_back(1);
            for(int j=1;j<i;j++)
            {
                array[i][j]=array[i-1][j-1]+array[i-1][j];
                temp.push_back(array[i][j]);
            }
            temp.push_back(1);
            result.push_back(temp);
        }
        return result;
    }
};