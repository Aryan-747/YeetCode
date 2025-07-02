class Solution {
public:

    bool isAnagram(string s, string t) {

    bool check = true;

    if(s.length()!= t.length())
    {
        return false;
    }

    else
    {
        int* alp = new int[26];

        for(int k=0 ; k<26 ; k++)
        {
            alp[k] = 0;
        }

        for(int i=0 ;i<s.length() ; i++)
        {
            alp[(char)s[i]-'a']++;
        }

        for(int i=0 ; i<t.length() ; i++)
        {
            alp[(char)t[i]-'a']--;
        }


        for(int i=0 ; i<26; i++)
        {
            if(alp[i]!=0)
            {
                check = false;
                break;
            }
        }

        return check;

    }
}
};