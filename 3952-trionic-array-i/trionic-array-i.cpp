class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        bool inc = false;
        bool dec = false;
        bool secinc = false;
        int r = 1;
        while (r < nums.size() && nums[r] > nums[r - 1]) {
            inc = true;
            r++;
        }
        int temp = r;
        while ( r < nums.size() && nums[r] < nums[r - 1] && inc && r != 1) {
            dec = true;
            r++;
        }
        while (r < nums.size() && nums[r] > nums[r - 1] && dec && r != temp) {
            secinc = true;
            r++;
        }

        return (inc && dec && secinc && r == nums.size()) ? true : false;
    }
};