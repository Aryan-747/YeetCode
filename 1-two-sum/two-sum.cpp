class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> retour;

        for(int i=0 ; i<nums.size()-1 ; i++)
        {
            for(int j=i+1 ; j<nums.size(); j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    retour.push_back(i);
                    retour.push_back(j);
                }
            }
        }

        return retour;
        
    }
};