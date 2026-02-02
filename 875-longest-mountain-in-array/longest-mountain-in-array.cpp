class Solution {
public:
    int longestMountain(vector<int>& arr) {
        // int n = arr.size();
        // if (n < 3)
        //     return 0;
        // int maxl = 0;
        // int len = 0;
        // for (int i = 1; i < n; i++) {
        //     int up = 0;
        //     int down = 0;
        //     int j = i;
        //     while (j < n && arr[j] > arr[j - 1]) {
        //         j++;
        //         up++;
        //     }

        //     while (up != 0 && j < (n) && arr[j] < arr[j - 1]) {
        //         j++;
        //         down++;
        //     }
        //     if (up > 0 && down > 0) {
        //         maxl = max(maxl, up + down + 1);
        //     }
        // }
        // return maxl;

        int maxl = 0;
        int n = arr.size();
        if (n < 3)
            return 0;
        for (int i = 1; i < n;) {
            if (arr[i] <= arr[i - 1]) {
                i++;
                continue;
            }
            int j = i;
            int up = 0;
            bool f1 = false;
            int down = 0;
            bool f2 = false;
            while (j < n && arr[j] > arr[j - 1])
                j++, up++, f1 = true;
            while (j < n && arr[j] < arr[j - 1])
                j++, down++, f2 = true;
            if (up + down + 1 > 2 && f1 && f2)
                maxl = max(maxl, up + down + 1);
            i = j;
        }
        return maxl;
    }
};