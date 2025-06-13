class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {

        int maxd = INT_MIN;

        maxd = max(maxd,abs(nums[0]-nums[nums.size()-1]));

        for(int i=0 ; i<nums.size()-1; i++)
        {
            maxd = max(maxd,abs(nums[i]-nums[i+1]));
        }

        return maxd;
        
    }
};