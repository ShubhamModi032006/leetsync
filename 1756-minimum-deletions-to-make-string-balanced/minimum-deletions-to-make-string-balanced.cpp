class Solution {
public:
    int minimumDeletions(string s) {
        int delet = 0;
        int bnum = 0;
        for(char c : s){
            if(c == 'b') bnum++;
            else {
                delet = min(delet + 1, bnum);
            }
        }
        return delet;
    }
};