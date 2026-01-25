class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 0) return 0;
        int len = 0;
        string str = "";
        int maxl = INT_MIN;
        for(int i=0;i<s.size();i++){
            len++;
            while(count(str.begin(), str.end(), s[i]) > 0){
                len--;
                str.erase(0, 1);
            }
            maxl = max(maxl,len);
            str.push_back(s[i]);
        }
        return maxl;
    }
};