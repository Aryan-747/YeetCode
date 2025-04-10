class Solution {
public:

    int myfunc(vector<int> &nums, int k)
    {
        if(k<=1)
        {
            return 0;
        }

        int l=0;
        int r=0;
        int n=nums.size();
        int total = 0;
        int prod = 1;
        while(r<n)
        {
            prod*=nums[r];

            while(prod>=k)
            {
                prod = prod/nums[l];
                l++;
            }

            int len = r-l+1;
            total+=len;
            r++;
        }

        return total;
    }



    int numSubarrayProductLessThanK(vector<int>& nums, int k) {

        int final = myfunc(nums,k);

        return final;
        
    }
};