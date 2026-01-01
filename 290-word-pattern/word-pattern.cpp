class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> mp1;
        unordered_map<string, char> mp2;
        bool ans = true;
        stringstream ss(s);
        stringstream ss1(s);
        string word;
        int i = 0;
        int len = 0;
        while(ss1 >> word){
            len++;
        }
        if(len != pattern.size()) return false;
        while (ss >> word && i < pattern.size()) {
            if (mp1.find(pattern[i]) != mp1.end() && mp1[pattern[i]] != word) {
                ans = false;
            }
            if (mp2.find(word) != mp2.end() && mp2[word] != pattern[i]) {
                ans = false;
            }
            mp1[pattern[i]] = word;
            mp2[word] = pattern[i];
            i++;
        }
        return ans;
    }
};