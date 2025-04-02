class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        vector<int> mapi(256,-1);

        int l=0;
        int r=0;
        int maxlen = 0;

        int n = s.length();

        while(r<n)
        {

            if(mapi[s[r]!=-1])
            {
                if(mapi[s[r]]>=l)
                {
                    l = mapi[s[r]]+1;
                }
            }

            int len = r-l+1;
            maxlen = max(maxlen,len);
            mapi[s[r]] = r;
            r++;
        }

        if(maxlen == INT_MIN)
        {
            return 0;
        }

        return maxlen;        
    }
};