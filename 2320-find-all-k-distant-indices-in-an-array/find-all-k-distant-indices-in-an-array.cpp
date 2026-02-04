class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> idx;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == key) {
                idx.push_back(i);
            }
        }

        int x = 0;
        int i = 0;
        vector<int> res;
        while (x < nums.size() && i < idx.size()) {
            if (abs(x - idx[i]) <= k) {
                res.push_back(x);
                x++;
            } else if (i < idx.size() && idx[i] < abs(x - k)) {
                i++;
            } else {
                x++;
            }
        }
        return res;
    }
};