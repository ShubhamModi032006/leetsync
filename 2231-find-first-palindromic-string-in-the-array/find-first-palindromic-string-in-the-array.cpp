class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            int l =0;
            int r = words[i].size()-1;
            while(l < r){
                if(words[i][l] != words[i][r]){
                    break;
                }
                l++;
                r--;
            }
            if(r - l <= 0) return words[i];
        }
        return "";
    }
};