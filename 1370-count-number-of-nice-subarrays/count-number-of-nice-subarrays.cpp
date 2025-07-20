class Solution {
public:


    int findans(vector<int> &nums, int k)
    {
        // base case
        if(k<0)
        {
            return 0;
        }

        int l = 0;
        int r = 0;
        int n = nums.size();
        int totnum = 0;
        int oddcnt = 0;

        while(r<n)
        {
            if(nums[r]%2!=0)
            {
                oddcnt++;
            }

            while(oddcnt>k)
            {
                if(nums[l]%2!=0)
                {
                    oddcnt--;
                }
                l++;
            }

            int len = r-l+1;
            totnum+=len;
            r++;
        }

        return totnum;

    }



    int numberOfSubarrays(vector<int>& nums, int k) {

        int answer = findans(nums,k) - findans(nums,k-1);

        return answer;
        
    }
};