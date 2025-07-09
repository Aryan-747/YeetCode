class Solution {
public:
    int generateKey(int num1, int num2, int num3) {

        string s1 = to_string(num1);
        string s2 = to_string(num2);
        string s3 = to_string(num3);

        int zeroes = 4;

        s1.insert(0,zeroes-s1.length(),'0');
        s2.insert(0,zeroes-s2.length(),'0');
        s3.insert(0,zeroes-s3.length(),'0');

        
        string fins = "";

        for(int i=0 ; i<4 ; i++)
        {
            char min1 = min(s1[i],s2[i]);
            fins += min(min1,s3[i]);
        }

        int ans = stoi(fins);

        return ans;


    }
};