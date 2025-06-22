class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {

        vector<string> ans;

        int len = s.length();

        if(len%k == 0)
        {
            for(int i=0 ; i<=s.length()-k ; i+=k)
            {
                ans.push_back(s.substr(i,k));
            }
        }

        else
        {
            while(len%k !=0)
            {
                s += fill;
                len = s.length();
            }

            for(int i=0 ; i<=s.length()-k ; i+=k)
            {
                ans.push_back(s.substr(i,k));
            }

        }
        
        return ans;
    }   
};