class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int maxp = 0;
        for(int i =0;i< s.size();i++){
            if(s[i] == '('){
                count++;
            } else if (s[i] == ')'){
                count--;
            }
            maxp = max(maxp,count);
        }
        return maxp;
    }
};