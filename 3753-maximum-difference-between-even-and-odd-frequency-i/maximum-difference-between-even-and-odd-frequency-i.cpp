class Solution {
public:
    int maxDifference(string s) {

        int evenfreq = 0;
        int oddfreq = 0;

        vector<int> hesh(26,0);

        for(int i=0 ; i<s.length(); i++)
        {
            hesh[s[i]-'a']++;
        }

        int maxd = INT_MIN;
        
        for(int i=0 ; i<s.length()-1; i++)
        {
            for(int j=i+1; j<s.length(); j++)
            {
                if(hesh[s[i]-'a']%2!=0)
                {
                    if(hesh[s[j]-'a']%2 == 0)
                    {
                        maxd = max(maxd,hesh[s[i]-'a']-hesh[s[j]-'a']);
                    }
                }

                else
                {
                    if(hesh[s[j]-'a']%2!=0)
                    {
                        maxd = max(maxd,hesh[s[j]-'a']-hesh[s[i]-'a']);
                    }
                }
            }
        }

        return maxd;


        
    }
};