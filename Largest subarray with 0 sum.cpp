// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        int m=0,sum=0;
        map<int,int> hashmap;
        for(int i=0;i<n;i++)
        {
            sum+=A[i];
            if(sum==0&&m<i+1)
            {
                m=i+1;
            }
            else
            {
                if(hashmap.find(sum)!=hashmap.end())
                {
                    if(m<i-hashmap[sum])
                    {
                        m=i-hashmap[sum];
                    }
                }
                else
                {
                    hashmap[sum]=i;
                }
            }
        }
        return m;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}


  // } Driver Code Ends