class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        

        // TC O(2n)
        // SC O(n);
        
        vector<int> hesh(nums.size()+1,0);

        for(int i=0 ; i<nums.size(); i++)
        {
            hesh[nums[i]]++;
        }

        vector<int> fin;

        for(int i=0 ; i<hesh.size(); i++)
        {
            if(hesh[i] == 2)
            {
                fin.push_back(i);
            }
        }

        return fin;
    }
};