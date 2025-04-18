class Solution {
public:
    int singleNumber(vector<int>& nums) {

        map<int,int> m1;

        for(int i=0 ; i<nums.size() ; i++)
        {
            m1[nums[i]]++;
        }

        for(int i=0 ; i<nums.size() ; i++)
        {
            if(m1[nums[i]] == 1)
            {
                return nums[i];
            }
        }

        return 0;

        
    }
};