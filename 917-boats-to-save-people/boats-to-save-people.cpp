class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int ans = 0;
        int l = 0;
        int r = people.size() - 1;
        sort(people.begin(), people.end());
        while (l <= r) {
            int temp = people[l] + people[r];
            if (temp > limit) {
                r--;
                ans++;
            }else if(temp <= limit){
                l++;
                r--;
                ans++;
            }
        }
        return ans;
    }
};