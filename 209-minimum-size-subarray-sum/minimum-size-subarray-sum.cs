public class Solution {
    public int MinSubArrayLen(int target, int[] nums) {

        int minlen = int.MaxValue;

        int l=0;
        int r=0;
        
        int sum = 0;

        while(r<nums.Length)
        {
            sum+=nums[r];

            while(sum>=target)
            {
                sum-=nums[l];
                minlen = Math.Min(minlen,r-l+1);
                l++;
            }
            r++;
        }

        if(minlen == int.MaxValue)
        {
            return 0;
        }
        
        return minlen;
    }
}