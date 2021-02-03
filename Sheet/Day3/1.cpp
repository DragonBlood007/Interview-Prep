//Link - https://leetcode.com/problems/search-a-2d-matrix/

//Idea - Start from lower left and move up if the current element is greater or right if current element is lesser

//Code

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m = matrix.size(), n = matrix[0].size();
    int i = m-1, j = 0;
    while(i >= 0 && j < n){
        if(matrix[i][j] == target)
            return true;
        if(matrix[i][j] > target)
            i--;
        else
            j++;
    }
    return false;
}
