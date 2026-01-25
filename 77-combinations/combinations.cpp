class Solution {
public:
    vector<vector<int>> result;
    void solve(int st, int k, int &n, vector<int>& temp){
        if(k == 0) {
            result.push_back(temp);
            return;
        }
        if(st > n) return;

        temp.push_back(st);
        solve(st+1, k-1, n, temp);

        temp.pop_back();
        solve(st+1, k, n, temp);
    }

    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;
        solve(1, k, n, temp);
        return result;
    }
};  