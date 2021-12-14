class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int hash[3];
        for(int i=0;i<3;i++)
        {
            hash[i]=0;
        }
        vector<int>::iterator itr;
        for(itr=nums.begin();itr!=nums.end();itr++)
        {
            hash[*itr]++;
        }
        int k=0;
        for(int i=0;i<3;i++)
        {
            while(hash[i]--)
            {
                nums[k++]=i;
            }
        }
    }
};