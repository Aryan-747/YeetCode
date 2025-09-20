class Solution {
public:

    int findans(vector<int> &nums, int k)
    {
        // base case
        if(k<0)
        {
            return 0;
        }

        int l = 0;
        int r = 0;
        int n = nums.size();
        
        int oddcount = 0;
        int noofarrays = 0;

        while(r<n)
        {
            if(nums[r]%2!=0)
            {
                oddcount++;
            }

            while(oddcount>k)
            {
                if(nums[l]%2!=0)
                {
                    oddcount--;
                }
                l++;
            }

            int len = r-l+1;
            noofarrays +=len;
            r++;
        }

        return noofarrays;

    }



    int numberOfSubarrays(vector<int>& nums, int k) {
        

        int ans = findans(nums,k) - findans(nums,k-1);
        return ans;

    }
};