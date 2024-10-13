class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m==0)
        {
            nums1[m]=nums2[m];
        }
        else
        {
        int it=0;
        for(int i=0;i<n;i++)
        {
            for(int j=m-1;j>=0;j--)
            {
                if(nums1[j]>nums2[i])
                {
                    int temp=nums1[j];
                    nums1[j]=nums2[i];
                    nums1[i+j+1]=temp;
                    it++;
                }
                
            }

        
        if(nums1[m+it-2]<nums2[i])
        {
            nums1[m+it]=nums2[i];
        }
        }
        }
    }
};
