class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int a = 51;
        int b = 51;
        for(int i = 1;i<nums.size();i++){
            b = min(b, nums[i]);
            if(a > b) swap(a,b);
            if (a == 1 && b == 1) break;            
        }
        return nums[0] + a + b;
    }
};