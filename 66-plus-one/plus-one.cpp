class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int carry = 1;

        reverse(digits.begin(),digits.end());

        for(int i=0 ; i<digits.size(); i++)
        {
            digits[i] = digits[i]+1;

            if(digits[i] == 10)
            {
                carry = 1;
                digits[i] = 0;
            }
            else
            {
                carry = 0;
                break;
            }
        }

        if(carry == 1)
        {
            digits.push_back(carry);
        }

        reverse(digits.begin(),digits.end());

        return digits;
        
    }
};