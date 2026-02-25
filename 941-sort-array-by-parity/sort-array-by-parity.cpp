class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int x = 0;
        int y = 0;
        while(x != nums.size()){
            if(nums[x] % 2 == 0){
                swap(nums[x],nums[y]);
                y++;
            }
            x++;
        }
        return nums;
    }
};