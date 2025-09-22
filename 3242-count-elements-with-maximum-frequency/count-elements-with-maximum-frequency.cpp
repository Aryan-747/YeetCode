class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {

        // storing frequencies 
        int max_freq = INT_MIN;

        vector<int> hashmap(101,0);

        for(int i=0 ; i<nums.size(); i++)
        {
            hashmap[nums[i]]++;
            max_freq = max(max_freq,hashmap[nums[i]]);
        }


        int cnt = 0;

        for(int i=0 ; i<hashmap.size(); i++)
        {
            if(hashmap[i] == max_freq)
            {
                cnt+=max_freq;
            }
        }

        return cnt;
        
        
    }
};