class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int i=0;
        int j=col-1;
        while(i<row && j>=0){
            if(target==matrix[i][j]) return true;

            else if(target>matrix[i][j]) i++;
            else if (target<matrix[i][j]) j--;
        }
        return false;
    }
};