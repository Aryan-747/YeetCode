class Solution {
public:
    int maximumCount(vector<int>& nums) {

        int ncnt = 0;
        int pcnt = 0;

        int low = 0;
        int high = nums.size()-1;

        while(low<=high)
        {
            int mid = (low+high)/2;

            if(nums[low]<0)
            {
                ncnt++;
                low++;
            }

            else if(nums[mid]>0)
            {
                high = mid-1;
            }
            else
            {
                low++;
            }
        }

        low = 0;
        high = nums.size()-1;

        while(low<=high)
        {
            int mid = (low+high)/2;

            if(nums[high]>0)
            {
                pcnt++;
                high--;
            }

            else if(nums[mid]<0)
            {
                low = mid+1;
            }
            else
            {
                high--;
            }
        }

        if(ncnt>=pcnt)
        {
            return ncnt;
        }

        else
        {
            return pcnt;
        }
        
    }
};