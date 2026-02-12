class Solution {
public:

    bool isvow(char s){
        if(s == 'A' || s == 'a' || s == 'E' || s == 'e' || s == 'I' || s == 'i' || s == 'O' || s == 'o' || s == 'U' || s == 'u'){
            return true;
        }
        return false;
    }

    string reverseVowels(string s) {
        int l = 0;
        int r = s.size() - 1;
        while(l < r){
            if(!isvow(s[l])){
                l++;
            }
            if(!isvow(s[r])){
                r--;
            }
            if(isvow(s[l]) && isvow(s[r])){
                swap(s[l],s[r]);
                l++;
                r--;
            }
        }
        return s;
    }
};