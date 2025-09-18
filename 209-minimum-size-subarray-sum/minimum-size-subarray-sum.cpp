class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int minlen = INT_MAX;

        int l = 0;
        int r = 0;
        int n = nums.size();

        int sum = 0;

        while(r<n)
        {
            sum+=nums[r];

            while(sum>=target)
            {
                sum-=nums[l];
                minlen = min(minlen,r-l+1);
                l++;
            }

            r++;
        }

        if(minlen == INT_MAX)
        {
            return 0;
        }

        return minlen;


    }
};