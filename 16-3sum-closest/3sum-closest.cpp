class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int temp = nums[0] + nums[1] + nums[2];
        int closest = INT_MAX;
        for(int i=0;i<nums.size();i++){
            int l = i+1;
            int r = nums.size() - 1;
            while(l < r){
                int sum = nums[i] + nums[l] + nums[r];
                if(abs(target - sum) < abs(target - temp)){
                    temp = sum;
                }
                if(sum == target) return sum;
                else if (sum < target) l++;
                else r--;
            }
        }
        return temp;
    }
};