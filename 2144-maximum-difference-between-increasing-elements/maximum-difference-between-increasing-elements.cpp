class Solution {
public:
    int maximumDifference(vector<int>& nums) {

        int maxd = -1;

        // using min max method
        int first = nums[0]; // min

        for(int i=1 ; i<nums.size(); i++)
        {
            if(nums[i]>first)
            {
                int diff = nums[i]-first;
                maxd = max(maxd,diff);
            }
            else
            {
                first = nums[i];
            }

        }

        return maxd;
        
    }
};