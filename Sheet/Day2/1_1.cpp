//Link - https://leetcode.com/problems/set-matrix-zeroes/submissions/

/*Idea - Use the first element of row or column as a flag/marker
         First keep track if the first row or column has a 0 already
         Then update from 2nd to last element of each row and column to 0 if its corresponding 1st element is 0
         Lastly, update the first row and column
*/

//Code

void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size(), c = matrix[0].size();
        bool firstRowZero = false, firstColZero = false;
        for(int i = 0;i < c;i++){
            if(matrix[0][i] == 0) firstRowZero = 1;
        }
        for(int i = 0;i < r;i++){
            if(matrix[i][0] == 0) firstColZero = 1;
        }
        
        for(int i = 0;i < r;i++){
            for(int j = 0;j < c;j++){
                if(matrix[i][j] == 0)
                    matrix[0][j] = matrix[i][0] = 0;
            }
        }
        for(int i = 1;i < r;i++){
            for(int j = 1;j < c;j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0)
                    matrix[i][j] = 0;
            }
        }
        
        if(firstRowZero)
            for(int i = 0;i < c;i++)
                matrix[0][i] = 0;
        
        if(firstColZero)
            for(int i = 0;i < r;i++)
                matrix[i][0] = 0;
    }
