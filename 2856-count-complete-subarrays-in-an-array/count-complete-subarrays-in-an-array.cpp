class Solution {
public:


    int toofun(vector<int> &nums, int distin)
    {
        if(distin<=0)
        {
            return 0;
        }

        map<int,int> m2;

        int l = 0;
        int r = 0;
        int n = nums.size();
        int cnt = 0;

        while(r<n)
        {
            m2[nums[r]]++;

            while(m2.size()>distin)
            {
                m2[nums[l]]--;

                if(m2[nums[l]] == 0)
                {
                    m2.erase(nums[l]);
                }
                l++;
            }

            int len = r-l+1;
            cnt+=len;
            r++;
        }

        return cnt;
    }


    int countCompleteSubarrays(vector<int>& nums) {

        map<int,int> m1;

        for(int i=0 ; i<nums.size() ; i++)
        {
            m1[nums[i]]++;
        }

        int distin = m1.size();

        int finol = toofun(nums,distin) - toofun(nums,distin-1);

        return finol;
        
    }
};