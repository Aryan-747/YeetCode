class Solution {
public:
    bool isValid(string s) {

        stack<char> s1;

        for(int i=0 ; i<s.length(); i++)
        {
            // preserve openings
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                s1.push(s[i]);
            }

            // it is a closing
            else
            {

                // s1 is empty, i.e no opening hence return false
                if(s1.empty())
                {
                    return false;
                }

                char bs = s1.top();
                s1.pop();

                if(s[i] == ')' && bs != '(')
                {
                    return false;
                }

                else if(s[i] == '}' && bs != '{')
                {
                    return false;
                }

                else if(s[i] == ']' && bs != '[')
                {
                    return false;
                }

            }
        }

        return s1.empty();
        
    }
};