class Solution {
public:
    string minWindow(string s, string t) {

        vector<int> hmap(128, 0);
        int m = s.size();
        int n = t.size();

        for (int i = 0; i < n; i++) {
            hmap[t[i]]++;
        }

        int l = 0;
        int r = 0;
        int minlen = INT_MAX;
        int sind = -1;
        int cnt = 0;

        while (r < m) {

            if (hmap[s[r]] > 0) {
                cnt++;
            }

            hmap[s[r]]--;

            while (cnt == n) {

                    if (r-l+1 < minlen) {
                        minlen = r - l + 1;
                        sind = l;
                    }
                    hmap[s[l]]++;

                    if (hmap[s[l]]>0) {
                        cnt = cnt - 1;
                    }

                    l++;
                }

                r++;
            }

            if (sind == -1) {
                return "";
            }

            return s.substr(sind, minlen);
    }
        };