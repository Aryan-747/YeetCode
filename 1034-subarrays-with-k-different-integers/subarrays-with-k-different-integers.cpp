class Solution {
public:

    int toofun(vector<int> &nums, int k)
    {
        if(k<0)
        {
            return 0;
        }

        map<int,int> m1;

        int l = 0;
        int r = 0;
        int n = nums.size();
        int numberof = 0;

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

            int len = r-l+1;
            numberof+=len;
            r++;
        }

        return numberof;


    }


    int subarraysWithKDistinct(vector<int>& nums, int k) {

        int po = toofun(nums,k) - toofun(nums,k-1);

        return po;
        
    }
};