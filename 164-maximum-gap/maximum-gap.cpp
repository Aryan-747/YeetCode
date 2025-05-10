class Solution {
public:
    int maximumGap(vector<int>& nums) {

        int maxgap = INT_MIN;

        sort(nums.begin(),nums.end());

        for(int i=1; i<nums.size() ; i++)
        {
            int maxgape = nums[i] - nums[i-1];

            maxgap = max(maxgape,maxgap);
        }

        if(maxgap == INT_MIN)
        {
            return 0;
        }

        return maxgap;
        
    }
};