class Solution {
public:
    int longestSubarray(vector<int>& nums){

        int longes = INT_MIN;

        int l = 0;
        int r = 0;
        int zeroes = 0;
        int n = nums.size();
        int len = 0;

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

            len = r-l+1;
            longes = max(longes,len-1);
            r++;
        }

        if(longes == INT_MIN)
        {
            return nums.size()-1;
        }

        return longes;
        
    }
};