class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        int l=1;
        int r=nums.size()-1;
        int n = nums.size();
        
        if(nums.size() == 1)
        {
            return 0;
        }

        if(nums[0]>nums[1])
        {
            return 0;
        }

        if(nums[r]>nums[r-1])
        {
            return r;
        }

        while(l<=r)
        {
            int mid = (l+r)/2;

            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])
            {
                return mid;
            }

            else if (nums[mid]<nums[mid+1])
            {
                l = mid+1;
            }
            else
            {
                r = mid-1;
            }
        }

        return 0;
        
    }
};