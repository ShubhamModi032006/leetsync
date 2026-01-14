class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int r = 1;
        int rsum = 0;
        int rr = 1;
        int lsum = 0;
        int evenc = 0;
        while(r < nums.size()){
            int l = 0;
            while(l<r){
                lsum += nums[l];
                l++;
            }
            while(rr < nums.size()){
                rsum += nums[rr];
                rr++; 
            }
            cout <<"lsum = " << lsum << " & rsum =  "<< rsum << " diff :"<< rsum - lsum << endl;
            if((rsum - lsum)%2 == 0){
                evenc++;
            }
            r++; 
            rr = r;
            lsum = 0;
            rsum = 0;
        }
        return evenc;
    }
};