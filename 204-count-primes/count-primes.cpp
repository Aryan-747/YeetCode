class Solution {
public:

    vector<int> primes(int n)
    {
        vector<int> p(n,0);

        p[0] = 1; // not prime
        p[1] = 1; // not prime

        vector<int> ans;

        for(long long i=2 ; i<n ; i++)
        {
            if(p[i] == 0)
            {
                for(long long j=i*i ; j<n ; j+=i)
                {
                    p[j] = 1;
                }
            }
        }

        for(int i=0 ;i<p.size(); i++)
        {
            if(p[i] == 0)
            {
                ans.push_back(i);
            }
        }

        return ans;

    }

    int countPrimes(int n) {

        if(n == 0 || n == 1)
        {
            return 0;
        }

        vector<int> ans = primes(n);

        return ans.size();


        
    }
};