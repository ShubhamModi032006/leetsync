class Solution {
public:
    bool isvov(char x){
        if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U'){
            return true;
        }
        return false;
    }

    bool halvesAreAlike(string s) {
        int l = 0;
        int r = s.size() - 1;
        int lvov = 0;
        int rvov = 0;
        while(l < r){
            if(isvov(s[l])) lvov++;
            if(isvov(s[r])) rvov++;
            l++;
            r--;
        }
        if(lvov == rvov) return true;
        return false;
    }
};
