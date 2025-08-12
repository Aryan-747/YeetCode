class Solution {
public:
    bool isValid(string s) {

        stack<char> s1;

        for(int i=0 ; i<s.length(); i++)
        {
            // pushing all openings in stack
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                s1.push(s[i]);
            }


            else
            {

                if(s1.empty()) // no opening exists
                {
                    return false;
                }

                char ls = s1.top();
                s1.pop();


                if((s[i] == ')' &&  ls!='(') || (s[i] == '}' && ls != '{') || (s[i] == ']' && ls != '['))
                {
                    return false;
                }
            }

        }

        return s1.empty();
        
    }
};