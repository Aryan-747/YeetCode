class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> ans;

        // lower bound

        int lowind = INT_MAX;

        int low = 0;
        int high = nums.size()-1;

        while(low<=high)
        {
            int mid = (low+high)/2;

            if(nums[mid] == target)
            {
                lowind = min(lowind,mid);
                high = mid -1;
            }

            else if(nums[mid]<target)
            {
                low = mid + 1;
            }

            else
            {
                high = mid - 1;
            }
        }

        if(lowind == INT_MAX)
        {
            ans.push_back(-1);
        }
        else
        {
            ans.push_back(lowind);
        }



        // upper bound

        low = 0;
        high = nums.size()-1;
        int upperind = INT_MIN;

        while(low<=high)
        {
            int mid = (low+high)/2;

            if(nums[mid] == target)
            {
                upperind = max(upperind,mid);
                low = mid+1;
            }

            else if(nums[mid]>target)
            {
                high = mid -1;
            }

            else
            {
                low = mid +1;
            }
        }




        if(upperind == INT_MIN)
        {
            ans.push_back(-1);
        }
        else
        {
            ans.push_back(upperind);
        }

        return ans;


    
        
    }
};