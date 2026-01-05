class Solution {
public:
    int myAtoi(string s) {
        long long num = 0;
        bool isnag = false;
        bool isstart = false;
        for (int i = 0; i < s.size(); i++) {
            if(s[i] == ' ' && !isstart){
                continue;
            }
            else if ((s[i] == '-' || s[i] == '+') && !isstart) {
                (s[i] == '-')? isnag = true: isnag = false;
                isstart = true;
            }
            else if (isdigit(s[i])) {
                isstart = true;
                num = num * 10 + s[i] - '0';
                if(isnag && -num < INT_MIN) return INT_MIN;
                if(!isnag && num > INT_MAX) return INT_MAX;
            } else
                break;
        }
        return (isnag == true) ? -num : num;
    }
};
