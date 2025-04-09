class Solution {
public:
    int minOperations(vector<int>& nums, int k) {

        int r=0;
        int n=nums.size();
        int maxi = 0;

        map<int,int> m1;

        while(r<n)
        {
            
            if(nums[r]<k)
            {
                return -1;
            }
            if(nums[r]>k)
            {
                m1[nums[r]]++;
            }

            r++;
        }

        return m1.size();
        
    }
};