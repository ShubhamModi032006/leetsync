class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n = s.size();
        int count = 0;
        int l = 0;
        int cost = 0;
        for (int i = 0; i < n; i++) {
            int diff = abs(t[i] - s[i]);
            cost += diff;
            while (cost > maxCost) {
                cost -= abs(s[l] - t[l]);
                l++;
            }
            count = max(count, i - l + 1);
        }
        return count;
    }
};

