class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int low =0;
        int high=row*col-1;
        while(low<=high){
            int mid=(low+high)/2;
            int rowindex=mid/col;
            int colindex=mid%col;
            if(target==matrix[rowindex][colindex]) return true;

            else if(target>matrix[rowindex][colindex])low=mid+1 ;

            else if(target<matrix[rowindex][colindex])high=mid-1 ;
            
        }
        return false;
    }
};