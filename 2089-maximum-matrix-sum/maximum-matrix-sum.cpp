class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum = 0;
        int count = 0;
        int minnum = INT_MAX;
        int n = matrix.size();
        int m = matrix[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] < 0) {
                    count++;
                }
                int val = abs(matrix[i][j]);
                sum += val;
                minnum = min(minnum, val);
            }
        }
        cout << sum << endl;
        cout << minnum << endl;
        if (count % 2 == 0)
            return sum;
        return sum - 2 * minnum;
    }
};

