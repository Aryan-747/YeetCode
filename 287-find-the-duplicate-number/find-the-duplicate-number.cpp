class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        vector<int> hesh(nums.size(),-1);

        for(int i=0 ; i<nums.size() ; i++)
        {
            if(hesh[nums[i]]!=-1)
            {
                return nums[i];
            }

            hesh[nums[i]] = i;
        }

        return -1;
        
    }
};