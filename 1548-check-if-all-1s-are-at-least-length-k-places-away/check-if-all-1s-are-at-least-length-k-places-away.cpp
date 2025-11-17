class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {

        if(k == 0) // edgecase
        {
            return true; 
        }

        for(int i=0 ; i<nums.size(); i++)
        {
            if(nums[i] == 1)
            {
                int curdis = 0;

                for(int j=i+1 ; j<nums.size(); j++)
                {
                    if(nums[j] == 1)
                    {
                        if(curdis<k)
                        {
                        return false;
                        }
                    }
                    curdis++;
                }
            }
        }

        return true;
        
    }
};