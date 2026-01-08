class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int maxnum = INT_MIN;
        for (int num : piles) {
            maxnum = max(maxnum, num);
        }

        int l = 1;
        int r = maxnum;
        int k = INT_MAX;
        while (l <= r) {

            long long bper = 0;
            int mid = l + (r - l) / 2;
            for (int i = 0; i < piles.size(); i++) {
                bper += ceil((double)piles[i] / mid);
            }
            if (bper > h) {
                l = mid + 1;
            } else {
                k = min(k, mid);
                r = mid - 1;
            }
        }
        return k;
    }
};

