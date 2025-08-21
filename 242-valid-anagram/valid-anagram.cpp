class Solution {
public:
    bool isAnagram(string s, string t) {

        // can never be an anagram
        if(s.length() != t.length())
        {
            return false;
        }


        vector<int> hmap1(26,0);
        vector<int> hmap2(26,0);

        for(int i=0 ; i<s.length(); i++)
        {
            hmap1[s[i]-'a']++;
            hmap2[t[i]-'a']++;
        }

        for(int i=0 ; i<hmap1.size(); i++)
        {
            if(hmap1[i]!=hmap2[i])
            {
                return false;
            }
        }

        return true;


        
    }
};