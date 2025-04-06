class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int r=0;
        int n=s.length();
        int maxlen = 0;
        vector<int> heshmap(256,-1);

        while(r<n)
        {
            if(heshmap[s[r]]!=-1)
            {
                if(heshmap[s[r]]>=l)
                {
                    l = heshmap[s[r]]+1;
                }
            }

            int len = r-l+1;
            maxlen = max(maxlen,len);
            heshmap[s[r]] = r;
            r++;
        }
        
        return maxlen;
    }
};