class Solution {
public:
    int characterReplacement(string s, int k) {

        vector<int> hmap(26,0);

        int l =0;
        int r =0;
        int longest =0;
        int n = s.length();
        int maxfreq = 0;
        int len = 0;

        while(r<n)
        {
            hmap[s[r]-'A']++;
            len = r-l+1;
            maxfreq = max(maxfreq,hmap[s[r]-'A']);

            if(len-maxfreq>k)
            {
                hmap[s[l]-'A']--;
                l++;
                len = r-l+1;
            }

            longest = max(len,longest);
            r++;
        }
        

        return longest;
    }
};