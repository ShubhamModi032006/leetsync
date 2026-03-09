class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {
        int n = nums.size();

        vector<long long> lsum(n);
        vector<long long> rpro(n);

        long long sum = 0;
        long long pro = 1;

        if (nums.size() < 2)
            return -1;

        for (int i = 0; i < n; i++) {
            lsum[i] = sum;
            sum += nums[i];
        }

        for (int i = n-1; i >= 0; i--) {
            rpro[i] = pro;
            if (nums[i] != 0 && pro > LLONG_MAX / nums[i]) {
                pro = LLONG_MAX;
            } else {
                pro *= nums[i];
            }
        }

        for (int i = 0; i < n; i++) {
            if (lsum[i] == rpro[i])
                return i;
        }

        return -1;
    }
};