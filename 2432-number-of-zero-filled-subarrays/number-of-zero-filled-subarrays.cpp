class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {

        long long totsum = 0;
        int l = 0;
        int r = 0;

        int cursum = 0;
        int n = nums.size();


        while(r<n)
        {
            cursum+=nums[r];

            if(cursum == 0)
            {
                totsum += r-l+1;
            }

            while(cursum>0 || cursum<0)
            {
                cursum-=nums[l];
                l++;
            }

            r++;
        }

        return totsum;
        
    }
};