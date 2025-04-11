class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxfreq = 0;
        map<char,int> fmap;

        int l =0;
        int r =0;
        int n =s.length();
        int len = 0;
        int maxlen = 0;

        while(r<n)
        {
            fmap[s[r]]++;
            maxfreq = max(maxfreq,fmap[s[r]]);
            len = r-l+1;

            while(len-maxfreq>k)
            {
                fmap[s[l]]--;

                if(fmap[s[l]] == 0)
                {
                    fmap.erase(s[l]);
                }
                l++;

                len = r-l+1;
            }

            maxlen = max(len,maxlen);
            r++;
        }

        return maxlen;
        
    }
};