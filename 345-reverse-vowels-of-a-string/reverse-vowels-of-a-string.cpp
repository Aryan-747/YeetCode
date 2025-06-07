class Solution {
public:

    bool isvowel(char ch)
    {
        ch = tolower(ch);

        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            return true;
        }

        return false;
    }

    string reverseVowels(string s) {

        int l = 0;
        int r = s.length()-1;

        while(l<r)
        {
            if(isvowel(s[l]) && isvowel(s[r]))
            {
                char temp = s[l];
                s[l] = s[r];
                s[r] = temp;

                l++;
                r--;
            }

            else if(!isvowel(s[l]))
            {
                l++;
            }

            else
            {
                r--;
            }

           
        }

        return s;
        
    }
};