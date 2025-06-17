class Solution {
public:
    int maximumDifference(vector<int>& nums) {

        int min = nums[0];

        int maxd = -1;


        for(int i=1 ; i<nums.size(); i++)
        {
            if(nums[i]>min)
            {
                maxd = max(maxd,nums[i]-min);
            }

            else
            {
                min = nums[i];
            }
        }


        return maxd;
        
    }
};