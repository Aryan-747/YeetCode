class Solution {
public:
    int longestSubarray(vector<int>& nums) {

        int longest = INT_MIN;

        // similar to flipping at max one zero problem, only diff is we remove the zero instead of flipping

        int l = 0;
        int r = 0;
        int n = nums.size();

        int zeroes = 0;

        while(r<n)
        {
            if(nums[r] == 0)
            {
                zeroes++;
            }

            while(zeroes>1)
            {
                if(nums[l] == 0)
                {
                    zeroes--;
                }
                l++;
            }

            int len = (r-l); // since we remove the zero instead of flipping
            longest = max(longest,len);
            r++;
        }

        return longest;
        
    }
};