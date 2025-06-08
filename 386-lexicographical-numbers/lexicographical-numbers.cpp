class Solution {
public:
    vector<int> lexicalOrder(int n) {

        vector<string> dummy;

        for(int i=1 ; i<=n ; i++)
        {
            dummy.push_back(to_string(i));
        }

        vector<int> ans;

        sort(dummy.begin(),dummy.end());

        for(int i=0 ; i<dummy.size() ; i++)
        {
            ans.push_back(stoi(dummy[i]));
        }

        return ans;
        
    }
};