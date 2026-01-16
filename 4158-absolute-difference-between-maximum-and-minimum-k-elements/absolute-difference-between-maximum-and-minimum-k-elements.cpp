class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int smallsum = 0;
        int bigsum = 0;
        int l = 0;
        int r = nums.size() - 1; 
        while(l < k && r >= nums.size() - k){
            smallsum += nums[l];
            l++;
            bigsum += nums[r];
            r--;
            cout << "bigsum : " << bigsum << ", smallsum : " << smallsum << endl;
        }
        return abs(bigsum - smallsum);
    }
};