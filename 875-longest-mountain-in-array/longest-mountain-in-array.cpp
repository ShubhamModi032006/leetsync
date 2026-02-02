class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n = arr.size();
        if (n < 3)
            return 0;
        int maxl = 0;
        int len = 0;
        for (int i = 1; i < n; i++) {
            int up = 0;
            int down = 0;
            int j = i;
            while (j < n && arr[j] > arr[j - 1]) {
                j++;
                up++;
            }

            while (up != 0 && j < (n) && arr[j] < arr[j - 1]) {
                j++;
                down++;
            }
            if (up > 0 && down > 0) {
                maxl = max(maxl, up + down + 1);
            }
        }
        return maxl;
    }
};