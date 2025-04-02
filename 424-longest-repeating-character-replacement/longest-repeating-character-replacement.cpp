class Solution {
public:
    int characterReplacement(string s, int k) {

        int l=0;
        int r=0;
        int n=s.length();
        vector<int> hmap(26,0);
        int maxfreq = 0;
        int maxlen = 0;


        while(r<n)
        {
            hmap[s[r]-'A']++;

            maxfreq = max(maxfreq,hmap[s[r]-'A']);
            int len = r-l+1;

            if(len-maxfreq>k)
            {
                hmap[s[l]-'A']--;
                
                l++;
            }

            len = r-l+1;
            maxlen = max(maxlen,len);
            r++;                
        }

        return maxlen;
        
    }
};