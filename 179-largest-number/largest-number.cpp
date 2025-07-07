class Solution {
public:


    // custom comparator

    static bool myCompare(string s1, string s2)
    {
        if((s1+s2)>(s2+s1))
        {
            return 1;
        }

        return 0;
    }



    string largestNumber(vector<int>& nums) {

        vector<string> ans;

        for(int x: nums)
        {
            ans.push_back(to_string(x));
        }

        sort(ans.begin(), ans.end(), myCompare); // sorting using custom comparator
        
        // edge case
        if(ans[0] == "0")
        {
            return "0";
        }

        string result = "";

        for(string x: ans)
        {
            result+=x;
        }

        return result;
    }
};