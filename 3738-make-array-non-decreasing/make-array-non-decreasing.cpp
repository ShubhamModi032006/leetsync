class Solution {
public:
    int maximumPossibleSize(vector<int>& nums) {
        int max = nums[0];
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] >= max){
                max = nums[i];
                ans++;
            }
        }
        return ans;

    }
};