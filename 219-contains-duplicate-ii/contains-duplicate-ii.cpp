class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        map<int,int> m3;
        int r = 0;
        int n = nums.size();

        while(r<n)
        {
            m3[nums[r]]++;

            if(m3[nums[r]]>=2)
            {
                for(int i=0 ; i<nums.size(); i++)
                {
                    if(nums[i] == nums[r] && i!=r)
                    {
                        if(abs(i-r)<=k)
                        {
                            return true;
                        }
                    }
                }
            }

            r++;
        }

        return false;
        
    }
};