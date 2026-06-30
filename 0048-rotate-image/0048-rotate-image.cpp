class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix){
        int n= matrix.size();
        for(int i=0;i<n-1;i++){
            for (int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        return matrix;
    }
    void rotate(vector<vector<int>>& matrix) {
        transpose(matrix);
        //int row=matrix.size();
        for (auto& row : matrix) {
        std::reverse(row.begin(), row.end());
    }
    }
};