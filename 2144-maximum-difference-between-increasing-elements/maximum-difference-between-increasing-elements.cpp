class Solution {
public:
    int maximumDifference(vector<int>& nums) {

        int maxd = INT_MIN;

        for(int i=0 ; i<nums.size()-1; i++)
        {
            for(int j=i+1; j<nums.size(); j++)
            {
                maxd = max(maxd,nums[j]-nums[i]);
            }
        }

        if(maxd <=0)
        {
            return -1;
        }

        return maxd;

        
    }
};