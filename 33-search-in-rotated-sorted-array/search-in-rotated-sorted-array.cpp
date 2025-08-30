class Solution {
public:
    int search(vector<int>& arr, int target) {

        int low = 0;
        int high = arr.size()-1;

        // implementing binary search 

        while(low<=high)
        {
            int mid = (low+high)/2;

            if(arr[mid] == target)
            {
                return mid;
            }

            if(arr[low]<=arr[mid]) // sorted half
            {
                if(target>=arr[low] && target<=arr[mid])
                {
                    high = mid-1;
                }
                else
                {
                    low = mid +1;
                }
            }

            else // rotated half
            {
                if(target>=arr[mid] && target<=arr[high])
                {
                    low = mid +1;
                }
                else
                {
                    high = mid -1;
                }
            }

        }

        return -1; // not found
        
    }
};