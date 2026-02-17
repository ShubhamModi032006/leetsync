class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string result = "";
        int x = 0;
        for(int i=0;i<s.size();i++){
            if(x < spaces.size() && spaces[x] == i){
                result.push_back(' ');
                x++;
            }
            result.push_back(s[i]);
        }
        return result;
    }
};