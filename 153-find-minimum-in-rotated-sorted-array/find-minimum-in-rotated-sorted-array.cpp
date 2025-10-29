class Solution {
public:
    int findMin(vector<int>& nums) {

        int low = 0;
        int high = nums.size()-1;

        int mini = INT_MAX; // variable to store minimum

        while(low<=high)
        {
            int mid = (low+high)/2;

            if(nums[low]<=nums[mid]) // first half is sorted
            {
                mini = min(mini,nums[low]);
                low = mid +1 ; // find mini in next half
            }

            else // second half is sorted
            {
                mini = min(mini,nums[mid]);
                high = mid-1;
            }

        }

        return mini;

        
    }
};