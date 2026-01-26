class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n = arr.size();
        int mindiff = INT_MAX;
        sort(arr.begin(), arr.end());

        for (int i = 1; i < n; i++) {
            mindiff = min(mindiff, arr[i] - arr[i - 1]);
        }

        vector<vector<int>> ans;
        for (int i = 1; i < n; i++) {
            int diff = arr[i] - arr[i - 1];
            if (diff == mindiff) {
                ans.push_back({arr[i - 1], arr[i]});
            }
        }
        return ans;
    }
};
