class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int z = 0;
        int o = 0;
        int t = 0;

        for(int i = 0;i<n;i++){
            if(nums[i] == 0){
                z++;
            }else if(nums[i] == 1){
                o++;
            }else{
                t++;
            }
        }

        t = t + z + o;
        o = o + z;

        for(int i = 0;i<n;i++){
            if(i < z){
                nums[i] = 0;
            }else if(i>=z && i<o){
                nums[i] = 1;
            }else{
                nums[i] = 2;
            }
        }
    }
};