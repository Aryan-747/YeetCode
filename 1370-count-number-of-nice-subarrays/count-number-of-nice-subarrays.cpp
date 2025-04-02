class Solution {
public:

    int toof(vector<int> &nums,int k)
    {
        if(k<0)
        {
            return 0;
        }

        int l=0;
        int r=0;
        int n=nums.size();
        int cnt=0;
        int maxlen=0;

        while(r<n)
        {
            if(nums[r]%2!=0)
            {
                cnt++;
            }

            while(cnt>k)
            {
                if(nums[l]%2!=0)
                {
                    cnt--;
                }
                l++;
            }

            int len = r-l+1;
            maxlen+=len;
            r++;
        }

        return maxlen;


    }




    int numberOfSubarrays(vector<int>& nums, int k) {

        int fein = toof(nums,k) - toof(nums,k-1);

        return fein;
        
    }
};