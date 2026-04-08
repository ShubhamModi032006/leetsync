class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int x = 0, m = word1.size();
        int y = 0, n = word2.size();
        string  str;
        while(x < m && y < n){
            str.push_back(word1[x]);
            x++;
            str.push_back(word2[y]);
            y++;
        }

        if(x != m){
            for(int i=x;i<m;i++){
                str.push_back(word1[i]);
            }
        }
        if(y != n){
            for(int i=y;i<n;i++){
                str.push_back(word2[i]);
            }
        }
        return str;
    }
};