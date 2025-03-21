class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
       int hmap[255];

       for(int i=0 ; i<255 ; i++)
       {
        hmap[i] = -1;
       }

       if(s == "")
       {
        return 0;
       }

       if(s == " ")
       {
        return 1;
       }

        int maxlen = INT_MIN;
        int l=0;
        int len = s.length();
        int r = 0;

        while(r<len)
        {

            if(hmap[s[r]]!=-1)
            {
                if(hmap[s[r]]>=l)
                {
                    l = hmap[s[r]]+1;
                }
            }


            hmap[s[r]] = r;
            maxlen = max(maxlen,(r-l)+1);
            r++;

        }

        return maxlen;
    }
};