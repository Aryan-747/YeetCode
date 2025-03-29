class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int l=0;
        int r=0;
        int n = s.length();
        int maxsubsize = INT_MIN;

        vector<int> hmap(256,-1);

        while(r<n)
        {

            int maxu = r-l+1;
            maxsubsize = max(maxu,maxsubsize);
            hmap[s[r]] = r;
            r++;
            if(hmap[s[r]]!=-1)
            {
                if(hmap[s[r]]>=l)
                {
                    l = hmap[s[r]]+1;
                }
            }

        }

        if(maxsubsize == INT_MIN)
        {
            return 0;
        }

        return maxsubsize;
        
    }
};