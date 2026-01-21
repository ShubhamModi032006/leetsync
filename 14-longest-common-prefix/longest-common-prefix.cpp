class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans ="";
        int j = 0;
        int n = strs.size();
        for(int i=0;i<strs[0].size();i++){
            while(j < n && strs[0][i] == strs[j][i]){
                j++;
            }
            if(j == n){
                ans.push_back(strs[0][i]);
            }
            else{
                break;
            }
            j = 0;
        }
        return ans;
    }
};