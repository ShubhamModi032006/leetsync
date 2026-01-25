class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int temp = nums[k-1] - nums[0];
        int ans = temp;
        for(int i=k;i<nums.size();i++){
            temp =  nums[i] - nums[i - k + 1];
            ans = min(ans,temp);
        }
        return ans;
    }
};