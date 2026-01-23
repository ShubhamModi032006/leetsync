class Solution {
public:
    int arraySign(vector<int>& nums) {
        int nag = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0) return 0;
            else if(nums[i] < 0) nag++;
        }
        return (nag % 2 == 0)? 1:-1;
    }
};
