class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int low = 0;
        int high = matrix.size()-1;

        while(low<=high)
        {
            int mid = (low+high)/2;

            if(matrix[mid][0] == target)
            {
                return true;
            }

            int l2 = 0;
            int r2 = matrix[0].size()-1;

            while(l2<=r2)
            {
                int mid2 = (l2+r2)/2;

                if(matrix[mid][mid2] == target)
                {
                    return true;
                }

                if(matrix[mid][mid2]>target)
                {
                    r2 = mid2-1;
                }
                else
                {
                    l2 = mid2+1;
                }
            }

            if(matrix[mid][0]<target)
            {
                low = mid +1;
            }
            else
            {
                high = mid -1;
            }
        }

        return false;
        
    }
};