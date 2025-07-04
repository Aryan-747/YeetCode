class Solution {
public:
    char kthCharacter(int k) {

        string s = "ab";

        int len = s.size();

        while(len<k)
        {
            len = s.size();
            string temp = s;
            for(int i=0 ; i<temp.size(); i++)
            {
                if(temp[i] == 'z')
                {
                    temp[i] = 'a';
                }

                else
                {
                    temp[i] = temp[i]+1;
                }
                
            }
            s+=temp;
        }

        return s[k-1];

        
    }
};