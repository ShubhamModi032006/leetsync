class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (k > 0) {
                int sum = 0;
                for (int j = i + 1; j < k + i + 1; j++) {
                    sum += code[j % n];
                }
                ans.push_back(sum);
            } else if (k == 0) {
                ans.push_back(0);
            } else {
                int sum = 0;
                for (int j = 1; j <= abs(k); j++) {
                    sum += code[(i - j + n) % n];
                }
                ans.push_back(sum);
            }
        }
        return ans;
    }
};