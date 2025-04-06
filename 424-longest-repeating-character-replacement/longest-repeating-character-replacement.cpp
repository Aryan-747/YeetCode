class Solution {
public:
    int characterReplacement(string s, int k) {

        int l = 0;
        int r = 0;
        int n = s.length();
        map<int,int> m1;
        int longest = 0;
        int maxfreq = 0;

        while(r<n)
        {

            m1[s[r]]++;
            maxfreq = max(maxfreq,m1[s[r]]);
            int len = r-l+1;
            
            if((len-maxfreq)>k)
            {
                m1[s[l]]--;

                if(m1[s[l]] == 0)
                {
                    m1.erase(s[l]);
                }
                l++;
            }

            len = r-l+1;
            longest = max(longest,len);
            r++;
        }

        return longest;

    }
};