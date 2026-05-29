class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        int low = 0;

        int high = rows*cols;

        while(low<high){
           int mid = low + (high-low)/2;

           int midRow = mid/cols;
           int midCol = mid%cols;

           if(matrix[midRow][midCol] == target){
             return true;
           }else if(matrix[midRow][midCol] < target){
            low++;
           }else{
            high--;
           }

        }

        return false;
        
    }
};
