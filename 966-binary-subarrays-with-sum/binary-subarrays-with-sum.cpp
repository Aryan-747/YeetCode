class Solution {
public:

    int myfun(vector<int> &nums, int goal)
    {
        if(goal<0)
        {
            return 0;
        }

        int l = 0;
        int r = 0;
        int cnt = 0;
        int sum = 0;
        int n = nums.size();

        while(r<n)
        {

            sum+=nums[r];

            while(sum>goal)
            {
                sum-=nums[l];
                l++;
            }
            int len = r-l+1;
            cnt+=len;
            r++;
        }

        return cnt;

    }


    int numSubarraysWithSum(vector<int>& nums, int goal) {

       int finale = myfun(nums,goal) - myfun(nums,goal-1);


       return finale;
        
    }
};