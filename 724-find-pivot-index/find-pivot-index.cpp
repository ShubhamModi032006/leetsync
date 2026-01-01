class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int pindex = 0;
        if(nums.size() == 0) return -1;

        while(pindex <= nums.size()-1){
        int lsum = 0;
        int rsum = 0;
        int l = 0;
        int r = nums.size()-1;
            while(l < pindex){
                lsum += nums[l];
                l++;
                
            }
            while( r > pindex){
                rsum += nums[r];
                r--;
            }
            if(lsum == rsum){
                return pindex;
            }
            pindex++;
        }  
        return -1;
    }
};
