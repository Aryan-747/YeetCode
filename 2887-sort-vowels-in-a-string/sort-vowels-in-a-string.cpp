class Solution {
public:

     bool isvow(char x)
        {
            switch(x){
                case 'a':
                    return true;
                case 'e':
                    return true;
                case 'i':
                    return true;
                case 'o':
                    return true;
                case 'u':
                    return true;
                case 'A':
                    return true;
                case 'E':
                    return true;
                case 'I':
                    return true;
                case 'O':
                    return true;
                case 'U':
                    return true; 
                default:
                    return false;
            }

        }


    string sortVowels(string s) {

        vector<char> vows;

        // inserting all vowels in a vector
        for(char x : s)
        {
            if(isvow(x))
            {
                vows.push_back(x);
            }
        }

        // sorting the vector
        sort(vows.begin(),vows.end());

        int vid = 0;

        for(int c = 0 ; c<s.length(); c++)
        {
            if(isvow(s[c]))
            {
                s[c] = vows[vid];
                vid++;
            }
        }

        return s;
        
    }
};