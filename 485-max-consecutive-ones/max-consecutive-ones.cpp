class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int l = 0;
        int r = 0;
        int maxu = 0;
        int n = nums.size();

        while(r<n)
        {
            if(nums[r] == 1)
            {
                maxu = max(maxu,r-l+1);
                r++;
            }
            else
            {
                r++;
                l = r;
            }
        }

        return maxu;
        
    }
};