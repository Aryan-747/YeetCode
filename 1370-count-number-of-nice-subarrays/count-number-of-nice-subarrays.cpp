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
        int numberof = 0;
        int oddcnt = 0;
        bool oddpresnt = false;

        while(r<n)
        {
            if(nums[r]%2 !=0)
            {
                oddcnt++;
                oddpresnt = true;
            }

            while(oddcnt>k)
            {
                if(nums[l]%2 !=0)
                {
                    oddcnt--;
                }
                l++;
            }

            int len = r-l+1;
            numberof+=len;
            r++;
        }

        if(!oddpresnt)
        {
            return 0;
        }

        return numberof;
    }


    int numberOfSubarrays(vector<int>& nums, int k) {

        int finol = toofun(nums,k) - toofun(nums,k-1);

        return finol;
        
    }
};