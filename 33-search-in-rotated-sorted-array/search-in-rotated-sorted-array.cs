public class Solution {
    public int Search(int[] nums, int target) {

        int low = 0;
        int high = nums.Count()-1;

        while(low<=high)
        {
            int mid = (low+high)/2;

            if(nums[mid] == target)
            {
                return mid;
            }

            // Sorted Half
            if(nums[low]<=nums[mid])
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
                if(target>=nums[mid] && target<=nums[high])
                {
                    low = mid+1;
                }
                
                else
                {
                    high = mid-1;
                }
            }
        }

        return -1; // not found
        
    }
}