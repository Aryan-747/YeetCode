class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        
        // min diff
        sort(arr.begin(),arr.end());
        int mindif = arr[arr.size()-1] - arr[arr.size()-2];

        for(int i=1 ; i<arr.size(); i++)
        {
            mindif = min(mindif, (arr[i]-arr[i-1]));
        }

        vector<vector<int>> result;

        for(int i=1 ; i<arr.size() ; i++)
        {
            if(arr[i]-arr[i-1] == mindif)
            {
            vector<int> abs = {arr[i-1],arr[i]};
            result.push_back(abs);
            }
        }

        return result;
    }
};