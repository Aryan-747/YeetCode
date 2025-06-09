class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int l = 0;
        int r = 0;
        int n = nums.size();

        int zeroes = 0;
        int maxfreq = 0;
        int maxlen = 0;

        while(r<n)
        {
            if(nums[r] == 0)
            {
                zeroes++;
            }

            int len = r-l+1;

            if(zeroes>k)
            {
                if(nums[l] == 0)
                {
                    zeroes--;
                }
                l++;
            }

            len = r-l+1;
            maxlen = max(maxlen,len);
            r++;
        }

        return maxlen;
        
    }
};