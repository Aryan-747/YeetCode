class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> hmap(101);

        vector<int> res;

        // storing frequencies in hashmap
        for(int i=0 ; i<nums.size(); i++)
        {
            hmap[nums[i]]++;
        }

        for(int i=0 ; i<hmap.size(); i++)
        {
            if(hmap[i] == 2)
            {
                res.push_back(i);
            }
        }

        return res; // ans
        
    }
};