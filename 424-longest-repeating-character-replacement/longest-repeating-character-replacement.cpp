class Solution {
public:
    int characterReplacement(string s, int k) {

        int l = 0;
        int r = 0;
        int n = s.length();

        unordered_map<char,int> m1; // better time complexity

        int longest = INT_MIN;
        int maxfreq = 0;
        int len = 0;

        while(r<n)
        {
            m1[s[r]]++;
            len = r-l+1;
            maxfreq = max(maxfreq,m1[s[r]]);

            if(len-maxfreq>k)
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

        if(longest == INT_MIN)
        {
            return -1;
        }


        return longest;
        
    }
};