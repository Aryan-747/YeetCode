class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int suffix = 1;
        int prefix = 1;

        int n = nums.size()-1;
        
        int maxprod = INT_MIN;

        for(int i=0 ; i<nums.size() ; i++)
        {
            if(suffix == 0)
            {
                suffix = 1;
            }

            if(prefix == 0)
            {
                prefix = 1;
            }

            prefix *= nums[i];
            suffix *= nums[n];
            n--;

            maxprod = max(maxprod,max(prefix,suffix));
        }

        return maxprod;

    
        
    }
};