class Solution {
public:
    int characterReplacement(string s, int k) {

        vector<int> heshmap(26,0);

        int l=0;
        int r=0;

        int n=s.length();

        int longest = 0;

        int maxfreq = 0;

        int len = 0;

        while(r<n)
        {
            heshmap[s[r]-'A']++;     

            len = r-l+1;
            maxfreq = max(maxfreq,heshmap[s[r]-'A']);   
            
            if((len-maxfreq)>k)
            {
                heshmap[s[l]-'A']--;
                l++;

                len = r-l+1;
            }
            longest = max(longest,len);
            r++;

        }

        return longest;
    }
};