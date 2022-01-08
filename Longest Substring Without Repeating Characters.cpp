class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int *hash=new int[255];
        for(int i=0;i<255;i++)
        {
            hash[i]=0;
        }
        int n=s.size();
        if(n==0)
        {
            return 0;
        }
        char temp;
        int m=0,j=0;
        for(int i=0;i<n;i++)
        {
            hash[s[i]]++;
            if(hash[s[i]]==2)
            {
                while(true)
                {
                    hash[s[j]]--;
                    if(s[j]==s[i])
                    {
                        j++;
                        break;
                    }
                    j++;
                }
            }
            if((i-j)>m)
            {
                m=i-j;
            }
        }
        return m+1;
    }
};