class Solution {
public:

    // static vector for memoization for first 100 fibs (0 to 99)
    int STS[100] = {0};


    void inl(int STS[])
    {
        for(int i=0 ; i<100 ; i++)
        {
            STS[i] = -1;
        }
    }


    int fiboc(int n)
    {
        if(n<=1)
        {
            STS[n] = n;
            return STS[n];
        }

        if(STS[n]!= -1)
        {
            return STS[n];
        }
        STS[n] = fiboc(n-1) + fiboc(n-2);
        return STS[n];
    }



    int fib(int n) {

        //func to initialze static array to -1;
        inl(STS);

        int fibo = fiboc(n);


        return fibo;
        
    }
};