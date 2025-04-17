class Solution {
public:
    long long countBadPairs(vector<int>& nums) {

        map<int,int> heshmap;

        long long n = nums.size();

        long long cnt = 0;

        long long tot = n*(n-1)/2;

        for(int i=0 ; i<nums.size() ; i++)
        {
            int key = nums[i]-i;
            cnt+=heshmap[key];
            heshmap[key]++;
        }

        return tot-cnt;
        
    }
};