class Solution {
public:
    string triangleType(vector<int>& nums) {


        if (nums[0]+nums[1]>nums[2] && nums[1]+nums[2]>nums[0] && nums[0]+nums[2]>nums[1])
        {
        vector<int> heshmap(101,0);

        for(int i=0 ; i<nums.size(); i++)
        {
            heshmap[nums[i]]++;
        }

        for(int i=0 ; i<heshmap.size(); i++)
        {
            if(heshmap[i] == 3)
            {
                return "equilateral";
            }
            else if(heshmap[i] == 2)
            {
                return "isosceles";
            }
        }
        return "scalene";
        }

        else
        {
            return "none";
        }

    }
        
};