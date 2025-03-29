class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0;
        int r = 0;
        int mini = INT_MAX;
        int sum = 0;

        for(int i=r ; i<nums.size(); i++)
        {
            sum+=nums[i];
            r++;

            while(sum>=target)
            {
                int cursize = r-l;
                mini = min(mini,cursize);
                sum-=nums[l];
                l++;
            }
        }

        if(mini == INT_MAX)
        {
            return 0;
        }

        return mini;
        
    }
};