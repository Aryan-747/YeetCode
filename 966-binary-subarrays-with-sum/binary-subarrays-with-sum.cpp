class Solution {
public:

    int toof(vector<int> &nums, int goal)
    {
        if(goal<0)
        {
            return 0;
        }

        int l=0;
        int r=0;
        int n = nums.size();
        int numbe =0;
        int sum =0;

        while(r<n)
        {
            sum+=nums[r];

            while(sum>goal)
            {
                sum-=nums[l];
                l++;
            }

            int len = r-l+1;
            numbe+=len;
            r++;
        }

        return numbe;



    }



    int numSubarraysWithSum(vector<int>& nums, int goal) {

        int finol = toof(nums,goal) - toof(nums,goal-1);

        return finol;
        
    }
};