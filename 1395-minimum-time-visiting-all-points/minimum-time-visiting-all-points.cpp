class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int maxt = 0;
        for (int i = 1; i < points.size(); i++) {
            int sum1= abs(points[i][0] - points[i - 1][0]);
            int sum2= abs(points[i][1] - points[i - 1][1]);

            maxt += max(sum1, sum2);
        }
        return maxt;
    }
};