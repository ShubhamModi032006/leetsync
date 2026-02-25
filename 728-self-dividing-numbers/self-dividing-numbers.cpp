class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        int x = left;
        while(x <= right){
            int n = x;
            if(x % 10 == 0 || x == 0){
                x++;
                continue;
            }
            bool selfdiv = true;
            while(n > 0){
                int temp = n % 10;
                if(temp == 0){
                    selfdiv = false;
                    break;
                }
                if(x % temp != 0){
                    selfdiv = false;
                    break;
                }
                n /= 10;
            }
            if(selfdiv == true){
                ans.push_back(x);
            }
            x++;
        }
        return ans;
    }
};