class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int sum = 0;
        int mxsum = INT_MIN;
        int n = nums.size();
        unordered_map<int, int> mp;
        int x = 0, y = 0;
        while(x < n){
            sum += nums[x];
            mp[nums[x]]++;
            while(mp[nums[x]] > 1){
                sum -= nums[y];
                mp[nums[y]]--;
                y++;
            }
            mxsum = max(mxsum, sum);
            x++;
        }
        return mxsum;
    }
};