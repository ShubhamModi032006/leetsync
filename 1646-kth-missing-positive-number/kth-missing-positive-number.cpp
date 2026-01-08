class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> missnum;
        int num = 1;
        int i = 0;
        while (i < arr.size()) {
            if (arr[i] != num) {
                missnum.push_back(num);
            }
            if (arr[i] == num)
                i++;
            num++;
        }

        for (int num : missnum) {
            cout << num << " ";
        }
        if (missnum.empty()) {
            return arr.back() + k;
        }
        int Mnum = 0;
        if (k > missnum.size() && missnum.back() > arr.back()) {
            Mnum = missnum.back() + (k - missnum.size()) + 1;
        } else if (k > missnum.size() && missnum.back() < arr.back()) {
            Mnum = arr.back() + k - missnum.size();
        } else {
            Mnum = missnum[k - 1];
        }
        return Mnum;
    }
};
