class Solution {
public:
    int numberOfSubstrings(string s) {

        int l=0;
        int r=0;
        int n=s.length();

        int tots = 0;

        vector<int> hmap(3,0);

        while(r<n)
        {
            hmap[s[r]-'a']++;
            while(hmap[0]>0 && hmap[1]>0 && hmap[2]>0)
            {
                tots +=n-r;
                hmap[s[l]-'a']--;
                l++;
            }
            r++;
        }
        
        return tots;
    }
};