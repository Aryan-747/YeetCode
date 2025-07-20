class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int zeroes = 0;
        int l = 0;
        int r = 0;
        int n = nums.size();
        int maxlen = 0;

        while(r<n)
        {
            if(nums[r] == 0)
            {
                zeroes++;
            }
            
            // condition is no longer valid
            while(zeroes>k)
            {
                if(nums[l] == 0)
                {
                    zeroes--;
                }
                l++;
            }

            int len = r-l+1;
            maxlen = max(maxlen,len);
            r++;
        }

        return maxlen;








    }
};