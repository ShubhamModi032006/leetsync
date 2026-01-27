class Solution {
public:
    string sortVowels(string s) {
        vector<char> vov;
        for(int i=0;i<s.size();i++){
            if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                vov.push_back(s[i]);
            }
        }
        sort(vov.begin(), vov.end());
        string str;
        int x = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                str.push_back(vov[x]);
                x++;
            }else{str.push_back(s[i]);}
        }
        return str;
    }
};