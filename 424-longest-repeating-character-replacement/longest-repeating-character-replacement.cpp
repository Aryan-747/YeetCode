class Solution {
public:
    int characterReplacement(string s, int k) {

        int l = 0;
        int r = 0;
        int n = s.length();
        int maxfreq = 0;
        int len = 0;

        map<int,int> Fmap;

        int maxlen = INT_MIN;

        while(r<n)
        {
            Fmap[s[r]]++;
            len = r-l+1;
            maxfreq = max(maxfreq,Fmap[s[r]]);
            if(len-maxfreq>k)
            {
                Fmap[s[l]]--;

                if(Fmap[s[l]] == 0)
                {
                    Fmap.erase(s[l]);
                } 
                l++;
            }

            len = r-l+1;
            maxlen = max(maxlen,len);
            r++;
        }

        if(maxlen == INT_MIN)
        {
            return -1;
        }
        
        return maxlen;
        
    }
};