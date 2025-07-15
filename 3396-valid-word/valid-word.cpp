class Solution {
public:
    bool isValid(string word) {

        if(word.length()<3)
        {
            return false; // first condition not true
        }

        // traversing word once to check if it has digits and english alphabets only

        int len = 0;
        for(char x: word)
        {
            if((x>=48 && x<=57) || (x>=65 && x<=90) || (x>=97 && x<=122))
            {
                len++;
            }
        }

        if(len == word.length()) // 2nd condition is true, we check the other two
        {
            bool vovpres = false;
            bool conspres = false;

            for(char x: word)
            {
                if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O' || x=='U' )
                {
                    vovpres = true;
                }
                else if(x>57) // not a number
                {
                    conspres = true;
                }
            }

            if(vovpres && conspres)
            {
                return true; // all conditions satisfied
            }
            else
            {
                return false; // either no consonant or no vowel is present
            }
        }

        return false; // conditon 2 not satisfied
        
    }
};