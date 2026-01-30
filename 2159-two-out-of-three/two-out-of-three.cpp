class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int> c1(101,0);
        vector<int> c2(101,0);
        vector<int> c3(101,0);

        for(int x : nums1) c1[x] = 1;
        for(int x : nums2) c2[x] = 1;
        for(int x : nums3) c3[x] = 1;

        vector<int> ans;
        for(int i=0;i<101;i++){
            int sum = c1[i] + c2[i] + c3[i];
            if(sum >= 2) ans.push_back(i); 
        }
        return ans;
    }
};