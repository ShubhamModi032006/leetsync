class Solution {
public:
    long long sumAndMultiply(int n) {
        long long ans = 0;
        long sum = 0;
        long spac = 1;
        while (n > 0) {
            int num = n % 10;
            if (num != 0) {
                cout << "Num: "<< num << endl;
                sum += num;
                ans = (ans) + num * spac;
                spac *= 10;
                cout << "Ans: " << ans<< endl;
            } else {
                n = n / 10;
                continue;
            }
            n = n / 10;
        }
    return ans * sum;
    }
};


