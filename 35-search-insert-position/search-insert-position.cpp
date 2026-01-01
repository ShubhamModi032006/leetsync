class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int mid = 0;
        int r = nums.size() - 1;
        while (r >= l) {
            mid = l + (r - l) / 2;
            if (target == nums[mid])
                return mid;
            else if (target > nums[mid]) {
                l = mid + 1;
                cout << "l: " << l << endl;
            } else {
                r = mid - 1;
            }
        }
        return l;
    }
};