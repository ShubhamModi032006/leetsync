class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int l =0;
        int r =nums.size() - 1;
        sort(nums.begin(),nums.end());
        int ans = 0;
        while(l < r){
            int sum = nums[l] + nums[r];
            if(sum == k) {
                ans++;
                l++;
                r--;
            }
            else if(sum > k) r--;
            else l++;
        }
        return ans;
    }
};