vector<int> Solution::repeatedNumber(const vector<int> &A) 
{
    int n1=A.size();
     int *hash=new int[n1+1];
    for(int i=0;i<=n1;i++)
    {
        hash[i]=0;
    }
    for(int i=0;i<n1;i++)
    {
        hash[A[i]]++;
    }
    vector<int> result(2,0);
    for(int i=1;i<=n1;i++)
    {
        if(hash[i]==0)
        {
            result[1]=i;
        }
        if(hash[i]==2)
        {
            result[0]=i;
        }
    }
    return result;
}
