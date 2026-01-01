class Solution {
public:
    int integerReplacement(int n) {
        int total = 0;
        long long num = n;
        if (n == 1)
            return 0;
        while (num != 1) {
            if (num % 2 != 0) {
                if (num == 3 || (num & 3) == 1) {
                    num -= 1;
                } else {
                    num = num + 1;
                }
            } else {
                cout << num << ": N, " << total << ": total" << endl;
                num = num / 2;
            }
            total++;
        }
        return total;
    }
};
