class Solution {
public:

    int toofun(vector<int> &nums, int k)
    {
        if(k<0)
        {
            return 0;
        }

        int l = 0;
        int r = 0;
        int n = nums.size();
        int len = 0;
        int numof = 0;
        
        map<int,int> m1;

        while(r<n)
        {
            m1[nums[r]]++;

            while(m1.size()>k)
            {
                m1[nums[l]]--;

                if(m1[nums[l]] == 0)
                {
                    m1.erase(nums[l]);
                }
                l++;
            }

            len = r-l+1;
            numof+=len;
            r++;
        }

        return numof;

    }




    int subarraysWithKDistinct(vector<int>& nums, int k) {

        int finoyl = toofun(nums,k) - toofun(nums,k-1);

        return finoyl;
        
    }
};