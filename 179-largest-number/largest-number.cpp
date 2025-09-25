// declaring custom comparator globally

bool myComp(string s1, string s2)
{
    if((s1+s2)>(s2+s1))
    {
        return 1;
    }
    
    return 0;
}


class Solution {
public:
    string largestNumber(vector<int>& nums) {

        string ans = "";

        vector<string> snums; // converting integer to string

        for(int x : nums)
        {
            snums.push_back(to_string(x));
        }

        sort(snums.begin(),snums.end(),myComp); // sorting with custom comparator

        // edge case

        if(snums[0] == "0")
        {
            return "0";
        }

        // putting ans in string 

        for(string x : snums)
        {
            ans+=x;
        }

        return ans;
        
    }
};