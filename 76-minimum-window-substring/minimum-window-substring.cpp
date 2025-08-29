class Solution {
public:
    string minWindow(string s, string t) {

        int minlen = INT_MAX;
        vector<int> hashmap(256,0);

        int n = s.length(); // length of string
        int m = t.length(); // length of string containing characters to be present

        int l = 0;
        int r = 0;

        if(n<m) // edge case
        {
            return "";
        }

        // prestoring characters of string t in hashmap

        for(int i=0 ; i<m ; i++)
        {
            hashmap[t[i]]++;
        }


        int sind = -1; // starting index;
        int cnt = 0;

        while(r<n)
        {

            if(hashmap[s[r]]>0) // present in map already
            {
                cnt++;
            }
            hashmap[s[r]]--;


            while(cnt == m)
            {
                if((r-l+1)<minlen) // new smaller substring found, so update
                {
                    sind = l;
                    minlen = r-l+1;
                }

                hashmap[s[l]]++;

                if(hashmap[s[l]]>0) // got reinserted in map, so reduce count
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