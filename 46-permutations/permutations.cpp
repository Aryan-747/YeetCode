class Solution {
public:
    
    void permuts(vector<vector<int>> &ans, vector<int> &nums, int index)
    {

        if(index>=nums.size())
        {
            ans.push_back(nums);
            return;
        }

        for(int i=index ; i<nums.size(); i++)
        {
            swap(nums[i],nums[index]);
            permuts(ans,nums,index+1);
            swap(nums[i],nums[index]); // backtracking
        }

    }


    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> ans;
        int index = 0;

        permuts(ans,nums,index);


        return ans; // returning all permuts

    }
};