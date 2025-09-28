class Solution {


    int findans(int[] nums, int goal)
    {
        if(goal<0) // base case
        {
            return 0;
        }

        int len = 0;
        int l = 0;
        int r = 0;
        int sum = 0;
        int n = nums.length;

        while(r<n)
        {
            sum+=nums[r];

            while(sum>goal)
            {
                sum-=nums[l];
                l++;
            }


            int curlen = r-l+1;
            len+=curlen;
       
            r++;
        }

        return len;

    }






    public int numSubarraysWithSum(int[] nums, int goal) {

        int ans = findans(nums,goal) - findans(nums,goal-1);

        return ans;
        
    }
}