class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int l=0;
        int r=0;
        int maxlen = INT_MIN;
        int n=s.length();
        vector<int> heshmep(256,-1);

        while(r<n)
        {

            if(heshmep[s[r]]!=-1)
            {
                if(heshmep[s[r]]>=l)
                {
                    l = heshmep[s[r]]+1;
                }
            }

            int len = r-l+1;
            maxlen = max(maxlen,len);
            heshmep[s[r]] = r;
            r++;
        }

        if(maxlen == INT_MIN)
        {
            return 0;
        }

        return maxlen;
        
    }
};