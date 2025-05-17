class Solution {
public:
    int maxFreqSum(string s) {

        int maxV = 0;
        int maxC = 0;

        vector<int> hmap(128,0);

        for(int i=0 ; i<s.length(); i++)
        {
            hmap[s[i]]++;
        }

        for(int i=0 ; i<s.length(); i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                maxV = max(maxV,hmap[s[i]]);
            }
            else
            {
                maxC = max(maxC,hmap[s[i]]);
            }
        }

        return maxV+maxC;
        
    }
};