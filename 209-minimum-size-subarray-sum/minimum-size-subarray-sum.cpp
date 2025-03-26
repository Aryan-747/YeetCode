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
            if(nums[r] >= target)
            {
                minlen = 1;
                break;
            }

            if(nums[r]<target)
            {
                sum+=nums[r];
              
                if (sum>=target)
                {
                    int len = r-l+1;
                    minlen = min(minlen,len);
                    sum = 0;
                    r = l+1;
                    l = r;
                }
                else
                {
                r++;
                }
            }
            else
            {
                r++;
                l = r;
            }
            
        }

        if(minlen == INT_MAX)
        {
            return 0;
        }

        return minlen;
        
    }
};