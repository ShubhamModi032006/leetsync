class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> pos;
        vector<int> nag;
        for (int i = 0; i < n; i++) {
            if (nums[i] >= 0) {
                pos.push_back(nums[i]);
            } else {
                nag.push_back(nums[i]);
            }
        }

        int nn = 0;
        int p = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                nums[i] = pos[p++];
            } else {
                nums[i] = nag[nn++];
            }
        }
        return nums;
    }
};