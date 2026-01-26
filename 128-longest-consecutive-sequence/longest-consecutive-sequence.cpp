class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> mp;
        int n = nums.size();
        if (n == 0)
            return 0;
        int maxl = 0;

        for (int i = 0; i < n; i++) {
            mp.insert(nums[i]);
        }

        for (auto it : mp) {
            if (mp.find(it - 1) == mp.end()) {
                int len = 1;
                int x = it;
                while (mp.find(x + 1) != mp.end()) {
                    x = x + 1;
                    len += 1;
                }
                maxl = max(maxl, len);
            }
        }
        return maxl;
    }
};
