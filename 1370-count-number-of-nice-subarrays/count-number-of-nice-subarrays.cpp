class Solution {
public:

    int toofun(vector<int> &nums, int k)
    {
        if(k<0)
        {
            return 0;
        }

        int l =0;
        int r =0;
        int n =nums.size();
        int oddcnt = 0;
        int numofsubs =0;

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
            numofsubs += len;
            r++;
        }

        return numofsubs;
    }


    int numberOfSubarrays(vector<int>& nums, int k) {

        int fino = toofun(nums,k) - toofun(nums,k-1);

        return fino;
        
    }
};