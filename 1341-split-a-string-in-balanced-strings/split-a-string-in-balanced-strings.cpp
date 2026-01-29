class Solution {
public:
    int balancedStringSplit(string s) {

        int temp = 0;
        int ans = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] == 'R') temp++;
            if(s[i] == 'L') temp--;
            if(temp == 0) ans++;
        }
        return ans;
    }
};

