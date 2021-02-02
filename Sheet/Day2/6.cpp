//Link - https://leetcode.com/problems/rotate-image/
//Idea - To rortate the matrix by 90 degress, first take the transpose and then reverse every row

//Code

void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    for(int i = 0;i < n;i++){
        for(int j = i+1;j < n;j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for(int i = 0;i < n;i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }
}
