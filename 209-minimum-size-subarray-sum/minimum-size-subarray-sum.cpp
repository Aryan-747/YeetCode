class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int sum = 0;
        int l = 0;
        int r = 0;
        int n = nums.size();
        int minlen = INT_MAX;
        while(r<n)
        {
            sum+=nums[r];

            while(sum>=target)
            {
                sum-=nums[l];
                int len = r-l+1;
                minlen = min(minlen,len);
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