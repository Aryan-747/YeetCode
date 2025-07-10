
bool customcomp(string s1, string s2)
{
    return (s1+s2)>(s2+s1);
}



class Solution {
public:
    string largestNumber(vector<int>& nums) {

        vector<string> numbers;

        for(int x: nums)
        {
            numbers.push_back(to_string(x));
        }

        // sorting using custom comparator which is declared globally

        sort(numbers.begin(),numbers.end(),customcomp);

        // edge case if largest number is '0';

        if(numbers[0] == "0")
        {
            return "0";
        }

        string ans;

        // storing ans from sorted string array in string variable ans

        for(string x: numbers)
        {
            ans+=x;
        }

        return ans;
        
    }
};