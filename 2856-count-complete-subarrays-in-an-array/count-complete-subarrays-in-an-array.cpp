class Solution {
public:
    

    int toofun(vector<int> nums, int k)
    {
        if(k<0)
        {
            return 0;
        }

        int l = 0;
        int r = 0;
        int n = nums.size();

        map<int,int> m1;
        int numse = 0;

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

            numse+=r-l+1;

            r++;
        }

        return numse;
    }


    int countCompleteSubarrays(vector<int>& nums) {

        int k;

        set<int> s1;

        for(int i=0 ; i<nums.size(); i++)
        {
            s1.insert(nums[i]);
        }

        k = s1.size();

        int ans = toofun(nums,k) - toofun(nums,k-1);

        return ans;
        
    }
};