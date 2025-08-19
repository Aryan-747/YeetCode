class Solution {
public:
    int longestContinuousSubstring(string s) {

        int maxlen = INT_MIN;

        int l = 0;
        int r = 1;
        int n = s.length();

        while(r<n)
        {
            if(s[r] == (s[r-1]+1)) // comparing with prev
            {
                maxlen = max(maxlen,r-l+1);
            }

            else
            {
                l = r;
            }
            r++;
        }

        if(maxlen == INT_MIN) // no valid alphabetical continuous substring present
        {
            return 1;
        }

        return maxlen;
        
    }
};