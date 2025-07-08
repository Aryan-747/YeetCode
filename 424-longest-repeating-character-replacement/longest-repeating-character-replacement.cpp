class Solution {
public:
    int characterReplacement(string s, int k) {

        int l = 0;
        int maxfreq = 0;
        int r = 0;
        int n = s.length();

        unordered_map<char,int> m1; // better time complexity while using unordered
        int maxlen = 0;


        while(r<n)
        {
            m1[s[r]]++;
            maxfreq = max(maxfreq,m1[s[r]]);
            int len = r-l+1;

            if((len-maxfreq)>k)
            {
                m1[s[l]]--; // removing element from start

                if(m1[s[l]] == 0)
                {
                    m1.erase(s[l]);
                }

                l++; // moving window;
            }

            len = r-l+1;
            maxlen = max(maxlen,len);
            r++;
        }

        return maxlen;
        

    }
};