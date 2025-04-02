class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {

        long long maxer = 0;

        for(int i=0 ; i<nums.size()-2; i++)
        {
            for(int j=i+1 ; j<nums.size()-1; j++)
            {
                for(int k=j+1 ; k<nums.size() ; k++)
                {
                    long long prod = (long long)(nums[i]-nums[j])*nums[k];
                    maxer = max(prod,maxer);
                }
            }
        }

        if(maxer<0)
        {
            return 0;
        }

        return maxer;
        
    }
};