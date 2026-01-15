class Solution {
public:
    int maxrow(vector<vector<int>>& mat, int n,int col) {
        int maxval = -1;
        int row = 0;
        for (int i = 0; i < n; i++) {
            if(maxval < mat[i][col]){
                row = i;
                maxval = mat[i][col];
            }
        }
        return row;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        int high = m-1;
        int low = 0;
        while(low <= high){
            int mid = low + (high - low)/2;
            int row = maxrow(mat, n, mid);

            int left = mid - 1 >= 0 ? mat[row][mid-1] : -1;
            int right = mid + 1 < m ? mat[row][mid+1] : -1;

            if(mat[row][mid] > left && mat[row][mid] > right){
                return {row, mid};
            }
            else if(mat[row][mid] < left) high= mid - 1;
            else low = mid + 1;
        }
        return {-1,-1};
    }
};