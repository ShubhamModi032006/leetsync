class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> odd;
        vector<int> even;
        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) {
                even.push_back(nums[i]);
            } else {
                odd.push_back(nums[i]);
            }
        }

        sort(odd.begin(), odd.end(), [](int a, int b) { return a > b; });
        sort(even.begin(), even.end());
        int x = 0;
        int y = 0;
        int i = 0;
        vector<int> ans(nums.size());
        while (i < nums.size()) {
            if (i % 2 == 0) {
                ans[i] = even[x++];
            } else {
                ans[i] = odd[y++];
            }
            i++;
        }
        return ans;
    }
};