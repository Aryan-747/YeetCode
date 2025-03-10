class Solution {
public:

    void permu(int index, vector<int> &nums, set<vector<int>> &ans)
    {
        if(index>=nums.size())
        {
            ans.insert(nums);
            return;
            
        }

        for(int i=index ; i<nums.size();i++)
        {
            swap(nums[i],nums[index]);
            permu(index+1,nums,ans);
            swap(nums[i],nums[index]);
        }
    }


    vector<vector<int>> permuteUnique(vector<int>& nums) {

        set<vector<int>> ans;
        int index = 0;

        permu(index,nums,ans);

        vector<vector<int>> fans;

        for(vector<int> i : ans)
        {
            fans.push_back(i);
        }

        return fans;


        
    }
};