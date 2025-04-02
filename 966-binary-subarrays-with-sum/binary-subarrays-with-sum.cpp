class Solution {
public:

    int toofun(vector<int> &nums, int goal)
    {
        if(goal<0)
        {
            return 0;
        }

        int l=0;
        int r=0;
        int n=nums.size();
        int maxlen = 0;
        int sum = 0;

        while(r<n)
        {
            sum+=nums[r];

            while(sum>goal)
            {
                sum-=nums[l];
                l++;
            }

            int len = r-l+1;
            maxlen +=len;
            r++;
        }

        return maxlen;


    }

    int numSubarraysWithSum(vector<int>& nums, int goal) {

        int final = toofun(nums,goal) - toofun(nums,goal-1);

        return final;
        
    }
};