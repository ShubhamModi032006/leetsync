class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int x = flowerbed.size();
        for(int i=0;i<x;i++){
            int prev = (i > 0)? flowerbed[i-1] : 0;
            int next = (i < x-1)? flowerbed[i+1] : 0;
            cout << "prev : " << prev << " next : " << next << endl;
            if(next == 0 && prev == 0 && flowerbed[i] == 0 && n > 0){
                flowerbed[i] = 1;
                n--;
            }
        }
        return (n == 0)? true : false;
    }
};