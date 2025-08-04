class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        int maxlen = INT_MIN;

        unordered_map<int,int> m1; // better time complexity

        int l = 0;
        int r = 0;
        int n = fruits.size();

        while(r<n)
        {
            m1[fruits[r]]++;

            // basket limit exceeded, i.e >2;

            while(m1.size()>2)
            {
                m1[fruits[l]]--;

                if(m1[fruits[l]] == 0)
                {
                    m1.erase(fruits[l]);
                }

                l++;
            }

            int len = r-l+1;
            maxlen = max(len,maxlen);
            r++;
        }

        // edge case
        if(maxlen == INT_MIN)
        {
            return -1;
        }

        return maxlen;
        
    }
};