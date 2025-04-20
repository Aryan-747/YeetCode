class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int l = 0;
        int r = 0;
        int n = nums.size();
        int zeroes = 0;

        int maxlen = INT_MIN;

        while(r<n)
        {
            if(nums[r] == 0)
            {
                zeroes++;
            }

            if(zeroes>k)
            {
                if(nums[l] == 0)
                {
                    zeroes--;
                }
                l++;
            }


            int len = r-l+1;
            maxlen = max(len,maxlen);
            r++;
        }


        if(maxlen == INT_MIN)
        {
            return -1;
        }
        
        return maxlen;
    }
};