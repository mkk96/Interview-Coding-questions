class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int max=1;
        int temp=1;
        int n=nums.size();
        if(n==0)
        {
            return 0;
        }
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]+1==nums[i+1])
            {
                temp++;
                if(temp>max)
                {
                    max=temp;
                }
            }
            else if(nums[i]==nums[i+1])
            {
                
            }
            else
            {
                temp=1;
            }
        }
        return max;
    }
};