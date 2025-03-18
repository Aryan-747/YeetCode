class Solution {
public:
    int kthFactor(int n, int k) {

        vector<int> ftors;

        for(int i = 1 ; i<=n ; i++)
        {
            if(n%i == 0)
            {
                ftors.push_back(i);
            }
        }

        for(int i=0 ; i<ftors.size() ; i++)
        {
            if((i+1) == k)
            {
                return(ftors[i]);
            }
        }

        return -1;
        
    }
};