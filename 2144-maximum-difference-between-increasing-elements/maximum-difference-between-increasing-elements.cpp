class Solution {
public:
    int maximumDifference(vector<int>& nums) {

        // optimal O(n) two pointer approach

        int diff = -1;
        int min = nums[0];

        int l = 1;

        while(l<nums.size())
        {
            if(min<nums[l])
            {
                diff = max(diff,(nums[l]-min));
            }

            else
            {
                min = nums[l];
            }
            l++;
        }

        if(diff == -1)
        {
            return -1;
        }

        return diff;        
    }
};