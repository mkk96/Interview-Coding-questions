class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int maj=nums[0],count=1;
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            if(maj==nums[i])
            {
                count++;
            }
            else
            {
                count--;
            }
            if(count<0)
            {
                count=1;
                maj=nums[i];
            }
        }
        return maj;
    }
};