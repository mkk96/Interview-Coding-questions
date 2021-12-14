class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int temp=0,max=INT_MIN;
        vector<int> ::iterator itr;
        for(itr=nums.begin();itr!=nums.end();itr++)
        {
            if(temp<0&&*itr>-1)
            {
                temp=0;
            }
            temp+=*itr;
            if(temp>max)
            {
                max=temp;
            }
            
        }
        if(max<0)
        {
            return *max_element(nums.begin(),nums.end());
        }
        return max;
    }
};