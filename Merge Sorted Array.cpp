class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        for(int i=0;i<n;i++)
        {
            nums1[m+i]=nums2[i];
        }
        n=m+n;
        for(int i=ceil((float)n/2);;i=ceil((float)i/2))
        {
            int j=0;
            int k=i;
            while(k<n)
            {
                if(nums1[j]>nums1[k])
                {
                    swap(nums1[j],nums1[k]);
                }
                j++,k++;
            }
            if(i==1)
            {
                break;
            }
        }
    }
};