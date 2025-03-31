class Solution {
public:

    int toofun(vector<int> &nums, int k)
    {

        if(k<0)
        {
            return 0;
        }

        int l=0;
        int r=0;
        int cnt =0;

        int maxcnt = 0;
        int n = nums.size();

        while(r<n)
        {
            if(nums[r]%2 != 0)
            {
                cnt++;
            }

            while(cnt>k)
            {
                if(nums[l]%2!=0)
                {
                    cnt--;
                }
                l++;
            }

            int len = r-l+1;
            maxcnt+=len;
            r++;
        }

        return maxcnt;


    }

    int numberOfSubarrays(vector<int>& nums, int k) {

        int finol = toofun(nums,k) - toofun(nums,k-1);

        return finol;
        
    }
};