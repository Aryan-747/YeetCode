class Solution {
public:


    int toofun(vector<int> &nums, int goal)
    {
        if(goal<0)
        {
            return 0;
        }

        int l = 0;
        int r = 0;
        int n = nums.size();
        int sum = 0;
        int no = 0;

        map<int,int> m1;

        while(r<n)
        {
            sum+=nums[r];

            while(sum>goal)
            {
                sum-=nums[l];
                l++;
            }

            int len = r-l+1;
            no+=len;
            r++;
        }

        return no;
    }



    int numSubarraysWithSum(vector<int>& nums, int goal) {

        int finol = toofun(nums,goal)- toofun(nums,goal-1);

        return finol;
        
    }
};