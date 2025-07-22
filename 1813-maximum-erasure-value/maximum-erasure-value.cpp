class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {

        int maxsum = 0;

        unordered_map<int,int> m1; // better time complexity

        int l = 0;
        int r = 1;
        int n = nums.size();
        int sum = 0;

        // edge case 

        if(nums.size() == 1)
        {
            return nums[0];
        }

        // inserting first element in map
        m1[nums[0]]++;
        sum+=nums[0];

        while(r<n)
        {
            while(m1.find(nums[r]) != m1.end())
            {
                m1[nums[l]]--;
                sum-=nums[l];

                if(m1[nums[l]] == 0)
                {
                    m1.erase(nums[l]);
                }
                l++;
            }

            m1[nums[r]]++;
            sum+=nums[r];

            maxsum = max(maxsum,sum);
            r++;
        }

        return maxsum;
        
    }
};