class Solution {
public:

    void permut(vector<vector<int>> &permuts, vector<int> &nums, int index)
    {
        if(index>=nums.size())
        {
            permuts.push_back(nums);
            return;
        }

        for(int i=index; i<nums.size(); i++)
        {
            swap(nums[i],nums[index]);
            permut(permuts,nums,index+1);
            swap(nums[i],nums[index]);
        }


    }


    vector<vector<int>> permute(vector<int>& nums) {

        vector<vector<int>> permuts;

        int index = 0;

        permut(permuts,nums,index);

        return permuts;
        
    }
};