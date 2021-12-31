class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) 
    {
        vector<vector<int>> temp;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int right=n-1;
                int left=j+1;
                int sum=target-nums[i]-nums[j];
                while(left<right)
                {
                    vector<int> res;
                    if(sum==nums[left]+nums[right])
                    {
                        res.push_back(nums[i]);
                        res.push_back(nums[j]);
                        res.push_back(nums[left]);
                        res.push_back(nums[right]);
                        temp.push_back(res);
                        while(left+1<n&&res[2]==nums[left])
                        {
                            left++;
                        }
                        while(right-1>j&&res[3]==nums[right])
                        {
                            right--;
                        }
                    }
                    else if(nums[left]+nums[right]<sum)
                    {
                        left++;
                    }
                    else
                    {
                        right--;
                    }
                    
                }
                while(j+1<n&&nums[j]==nums[j+1])
                {
                    j++;
                }
            }
            while(i+1<n&&nums[i]==nums[i+1])
            {
                i++;
            }
        }
        return temp;
    }
};