class Solution {
public:
    int minimumCost(vector<int>& nums) {
        // int a = 51;
        // int b = 51;
        // for(int i = 1;i<nums.size();i++){
        //     b = min(b, nums[i]);
        //     if(a > b) swap(a,b);
        //     if (a == 1 && b == 1) break;            
        // }
        // return nums[0] + a + b;


        // sort(nums.begin()+1,nums.end());
        // int res = nums[0];
        // return res + nums[1] + nums[2];

        int ans = INT_MAX;
        for(int i=1;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                ans = min(ans, nums[0] + nums[i] + nums[j]);
            }
        }
        return ans;
    }
};