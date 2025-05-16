class Solution {
public:
    string minWindow(string s, string t) {

        int m = s.size();
        int n = t.size();

        vector<int> hashmap(256,0);

        for(int i=0 ; i<n ; i++)
        {
            hashmap[t[i]]++;
        }

        int minlen = INT_MAX;
        int sind = -1;
        int l = 0;
        int r = 0;
        int cnt = 0;

        while(r<m)
        {
            if(hashmap[s[r]]>0)
            {
                cnt++;
            }

            hashmap[s[r]]--;

            while(cnt == n)
            {
                if(r-l+1<minlen)
                {
                    sind = l;
                    minlen = r-l+1;
                }

                hashmap[s[l]]++;

                if(hashmap[s[l]]>0)
                {
                    cnt--;
                }

                l++;
            }

            r++;

        }

        if(minlen == INT_MAX)
        {
            return "";
        }

        return s.substr(sind,minlen);
        
    }
};