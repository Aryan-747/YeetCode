class Solution {
public:
    int maximum69Number (int num) {

        string numba = to_string(num);

        for(int i=0 ; i<numba.length(); i++)
        {
            if(numba[i] == '6')
            {
                numba[i] = '9';
                break;
            }
        }

        int newnum = stoi(numba);

        return newnum;
        
    }
};