class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0;
        int rigth = nums.size() - 1;
        vector<int> ans(2, -1);

        while (left <= rigth) {
            int mid = left + (rigth - left) / 2;
            if (nums[mid] >= target) {
                rigth = mid - 1;
            } else {
                left = mid + 1;
            }
            if(nums[mid] == target) ans[0] = mid;
        }

        left = 0, rigth = nums.size() - 1;
        while (left <= rigth) {
            int mid = left + (rigth - left) / 2;
            if (nums[mid] > target) {
                rigth = mid - 1;
            } else {
                left = mid + 1;
            }
            if(nums[mid] == target) ans[1] = mid;
        }
        return ans;
    }
};