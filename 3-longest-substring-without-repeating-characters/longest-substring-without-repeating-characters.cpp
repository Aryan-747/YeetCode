class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        vector<int> hmap(256,-1);

        int l = 0;
        int r = 0;
        int n = s.length();

        int maxu = 0;

        while(r<n)
        {
            if(hmap[s[r]]!= -1)
            {
                if(hmap[s[r]]>=l)
                {
                    l = hmap[s[r]]+1;
                }
            }

            int len = r-l+1;

            maxu = max(maxu,len);

            hmap[s[r]] = r;
            r++;
        }
        
        return maxu;
    }
};