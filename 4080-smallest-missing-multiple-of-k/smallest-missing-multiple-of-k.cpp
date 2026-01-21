class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int> mp;
        for(int i=0;i<nums.size();i++){
            mp.insert(nums[i]);
        }
        int i = 1;
        while(i <= 101){
            if(mp.find(k * i) == mp.end()) return k * i;
            i++;
        }
        return -1;
    }
};