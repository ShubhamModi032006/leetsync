class Solution {
public:
    string reverseStr(string s, int k) {
        if(s.size() == 1) return s;
        int n = s.size();
        for(int i=0;i<n;i = i + (k*2)){
            int l = i;
            int r = min(n - 1, i + k - 1);
            while(l < r){
                swap(s[l],s[r]);
                l++;
                r--;
            }
        }
        return s;
    }
};
