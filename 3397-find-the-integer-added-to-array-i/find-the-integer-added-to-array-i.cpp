class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int min1 = INT_MAX;
        int min2 = INT_MAX;
        for(int x:nums1) min1 = min(min1,x);
        for(int x:nums2) min2 = min(min2,x);

        return min2 - min1;
    }
};