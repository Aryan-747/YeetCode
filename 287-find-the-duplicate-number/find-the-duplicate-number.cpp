class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    
        /* Using hashset (O(n) Space) (O(n) Time)

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

        */

        // Using most optimized Tortoise and hare approach (O(n) time) (O(1) space)

        int slow = 0;
        int fast = 0;

        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }
        while(slow!=fast);

        slow = 0;

        while(slow!=fast)
        {
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;
    }
};