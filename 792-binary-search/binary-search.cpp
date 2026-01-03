class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int rigth = nums.size() - 1;
        int idx = -1;
        while(left <= rigth){
            int mid = left + (rigth - left) / 2;
            if(nums[mid] == target){
                idx = mid;
                break;
            }else if(nums[mid] > target){
                rigth = mid - 1;
            }else{
                left = mid + 1;
            }
        }
        return idx;
    }
};