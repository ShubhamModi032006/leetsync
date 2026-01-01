class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        long n = nums.size();
        long total = 0;
        int res = 0;
        long l = 0;
        sort(nums.begin(),nums.end());
        for(long r=0;r<n;r++){
            total += nums[r];
            while(nums[r] * (r-l+1) > (total+k)){
                total -= nums[l];
                l++;
            }
            res = max(res,(int)(r-l+1));
        }
        return res;
    }
};

