class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) return false;
        int n = s.size();

        for (int idx = 0; idx < n; idx++) {
            if (goal[idx] == s[0]) {
                bool match = true;
                for (int i = 0; i < n; i++) {
                    if (s[i] != goal[(i + idx) % n]) {
                        match = false;
                        break;
                    }
                }
                if (match) return true;
            }
        }
        return false;
    }
};
