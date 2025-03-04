class Solution {
 public:
  int firstUniqChar(string s) {

    int fre[26] = {0};

    for(char c: s)
    {
        fre[c-'a']++;
    }

    for(int i=0 ; i<s.length() ; i++)
    {
        if(fre[s[i]-'a'] == 1)
        {
            return i;
        }
    }

    return -1;


  }
};