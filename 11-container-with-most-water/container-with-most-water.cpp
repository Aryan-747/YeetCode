class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int maxvol = INT_MIN;
        int left = 0;
        int right = height.size()-1;

        while(left<right)
        {
            int currvol = (min(height[left],height[right])*(right-left));
            maxvol = max(currvol,maxvol);

            if(height[left]<height[right])
            {
                left++;
            }
            else
            {
                right--;
            }

        }
        
        return maxvol;
    }
};