bool myComparemethod(string s1, string s2)
{
    return (s1+s2)>(s2+s1); // returning if first concatenation is bigger than second
}



class Solution {
public:
    string largestNumber(vector<int>& nums) {

        vector<string> snums;

        for(int x: nums)
        {
            snums.push_back(to_string(x)); // type conversion and storing in string form
        }

        sort(snums.begin(),snums.end(),myComparemethod); // sorting using custom comparator declared globally (outside class)

        // edge case
        if(snums[0] == "0")
        {
            return "0";
        }

        string ans = ""; // empty string to store answer

        for(string x: snums)
        {
            ans+=x;
        }

        return ans;
        
    }
};