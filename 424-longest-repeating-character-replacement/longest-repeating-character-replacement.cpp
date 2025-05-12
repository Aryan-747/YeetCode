class Solution {
public:
    int characterReplacement(string s, int k) {

        map<char,int> m1;

        int len = 0;
        int r = 0;
        int l = 0;
        int n = s.length();
        int maxlen = INT_MIN;
        int maxfreq = 0;

        while(r<n)
        {
            m1[s[r]]++;
            maxfreq = max(maxfreq,m1[s[r]]);
            len = r-l+1;

            if(len-maxfreq>k)
            {
                m1[s[l]]--;
                l++;
            }

            len = r-l+1;
            maxlen = max(maxlen,len);
            r++;
        }



        if(maxlen == INT_MIN)
        {
            return 0;
        }

        return maxlen;      
    }
};