class Solution {
public:
    int checkval(char c) {
        if (c == 'I')
            return 1;
        else if (c == 'V')
            return 5;
        else if (c == 'X')
            return 10;
        else if (c == 'L')
            return 50;
        else if (c == 'C')
            return 100;
        else if (c == 'D')
            return 500;
        else if (c == 'M')
            return 1000;
        return 0;
    }

    int romanToInt(string s) {
        int result = 0;
        int prev = 0;
        for (int i = s.size() - 1; i >= 0; i--) {
            int temp = checkval(s[i]);
            if (temp < prev)
                result -= temp;
            else
                result += temp;    
            
            prev = temp;
        }
        return result;
    }
};