class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        int num1=INT_MIN,num2=INT_MIN;
        int count1=0,count2=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(num1==nums[i])
            {
                count1++;
            }
            else if(num2==nums[i])
            {
                count2++;
            }
            else if(count1==0)
            {
                count1=1;
                num1=nums[i];
            }
            else if(count2==0)
            {
                count2=1;
                num2=nums[i];
            }
            else
            {
                count1--;
                count2--;
            }
        }
        vector<int> result;
        count1=0;
        for(int i=0;i<n;i++)
        {
            if(num1==nums[i])
            {
                count1++;
            }
        }
        if(count1>n/3)
        {
            result.push_back(num1);
        }
        count1=0;
        for(int i=0;i<n;i++)
        {
            if(num2==nums[i])
            {
                count1++;
            }
        }
        if(count1>n/3)
        {
            result.push_back(num2);
        }
        return result;
    }
};