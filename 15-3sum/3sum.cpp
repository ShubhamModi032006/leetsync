class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> arr;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            int temp = nums[i];
            int l = i + 1;
            int r = nums.size() - 1;
            while (l < r) {
                int sum = temp + nums[l] + nums[r];
                if (sum > 0) {
                    r -= 1;
                } else if (sum < 0) {
                    l += 1;
                } else {
                    arr.push_back({temp, nums[l], nums[r]});
                    l++;
                    r--;
                    while (l < r && nums[l] == nums[l - 1])
                         l++;
                    while (l < r && nums[r] == nums[r + 1])
                         r--;
                }
            }
        }
        return arr;
    }
};