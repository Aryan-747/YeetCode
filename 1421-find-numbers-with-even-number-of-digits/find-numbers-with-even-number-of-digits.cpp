class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int fincount = 0;

        for(int i=0 ; i<nums.size(); i++)
        {
            int count = 0;
            int dummy = nums[i];
            while(dummy>0)
            {
                count++;
                dummy = dummy/10;
            }

            if(count%2 == 0)
            {
                fincount++;
            }
            count = 0;
        }

        return fincount;


    }
};