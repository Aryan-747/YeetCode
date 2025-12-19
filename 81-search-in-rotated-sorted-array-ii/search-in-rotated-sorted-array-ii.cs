public class Solution {
    public bool Search(int[] nums, int target) {

        int low = 0;
        int high = nums.Length-1;

        // using binary search
        while(low<=high)
        {
            int mid = (low+high)/2;

            // element found in array
            if(nums[mid] == target)
            {
                return true;
            }
            
            // duplicates found
            if((nums[low] == nums[mid]) && (nums[mid] == nums[high]))
            {
                low++;
                high--;
            }

           else if(nums[low]<=nums[mid]) // first half is sorted
            {
                if(target>=nums[low] && target<=nums[mid])
                {
                    high = mid-1;
                }
                else
                {
                    low = mid+1;
                }
            }

            else
            {
                if((target>=nums[mid]) && (target<=nums[high]))
                {
                    low = mid+1;
                }
                else
                {
                    high = mid-1;
                }
            }
        }

        return false;

    }
}