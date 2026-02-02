class Solution {
public:
    bool validPalindrome(string s) {
        int l = 0,r = s.size() - 1;
        while(l<r){
            if(s[l] == s[r]){
                l++;
                r--;
            }else{
                return check(s, l+1, r) || check(s, l, r-1);
            }
        }
        return true;
    }
    bool check (string s, int left, int right){
        while(left < right){
            if(s[left] == s[right]) {
                left++;
                right--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};