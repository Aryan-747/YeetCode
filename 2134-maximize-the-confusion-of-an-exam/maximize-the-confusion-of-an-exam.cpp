class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        
        int maxfreq = 0;
        int l = 0;
        int r = 0;
        int n = answerKey.size();
        int maxlen = 0;
        int len = 0;
        map<int,int> heshmap;

        while(r<n)
        {
            heshmap[answerKey[r]]++;
            maxfreq = max(maxfreq,heshmap[answerKey[r]]);
            len = r-l+1;

            if((len-maxfreq)>k)
            {
                heshmap[answerKey[l]]--;

                if(heshmap[answerKey[l]] == 0)
                {
                    heshmap.erase(answerKey[l]);
                }
                l++;

                len = r-l+1;
            }

            maxlen = max(maxlen,len);
            r++;
        }

        return maxlen;
        
    }
};