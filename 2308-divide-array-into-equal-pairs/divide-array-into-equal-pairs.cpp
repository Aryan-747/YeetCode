class Solution {
public:
    bool divideArray(vector<int>& nums) {

        sort(nums.begin(),nums.end());

        int nop = nums.size()/2;

        int p = 0;

        unordered_map<int,int> htable;

       /* for(int i=0 ; i<nums.size() ; i++)
        {
            htable.insert(nums[i]);
        }
        */

        for(int i=0 ; i<nums.size(); i++)
        {
            htable[nums[i]]++;
        }


       
       for(int i=0 ; i<htable.size() ; i++)
       {
           if(htable[i]%2 !=0)
           {
            return false;
           }
       }


       return true;
    }
};