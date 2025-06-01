class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {

        int l = 1;
        int r = 0;

        if(nums.size() == 1)
        {
            return true;
        }

        while(r<nums.size()-1)
        {
            if((nums[r]%2 == 0 && nums[l]%2==0) || (nums[r]%2!=0 && nums[l]%2!= 0))
            {
                return false;
            }

            r++;
            l++;

        }

        return true;
        
    }
};