class Solution {
public:
    int findMin(vector<int>& nums) {

        int mini = INT_MAX;

        int low = 0;
        int high = nums.size()-1;
        
        while(low<=high)
        {
            int mid = (low+high)/2;

            if(nums[low]<=nums[mid]) // left half is sorted
            {
                mini = min(mini,nums[low]);
                // check for min in right half now
                low = mid +1;
            }
            else
            {
                mini = min(mini,nums[mid]);
                // check for min in left half
                high = mid - 1;
            }

        }

        return mini;


        
    }
};