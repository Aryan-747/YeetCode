class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {

        int l = 0;
        int r = 0;
        int n = answerKey.length();
        int maxfreq = 0;
        map<char,int> m1;
        int len = 0;
        int maxlen = 0;

        while(r<n)
        {
            m1[answerKey[r]]++;
            maxfreq = max(maxfreq,m1[answerKey[r]]);
            len = r-l+1;

            while((len-maxfreq)>k)
            {
                m1[answerKey[l]]--;
                l++;
                len = r-l+1;
            }

            maxlen = max(maxlen,len);
            r++;
        }

        return maxlen;
        
    }
};