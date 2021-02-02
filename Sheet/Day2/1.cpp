// Link - https://leetcode.com/problems/set-matrix-zeroes/

//Question - If an element is 0 set its entire row and column to 0

//Method 1 - O(n) space

/*Idea - Keep track if a row has a '0' element using an array/vector; same for column
         Now for every row, check if the row is flagged in the array, if it is update the matrix; same with column
*/

//Code - 1

void booleanMatrix(vector<vector<int> > &matrix)
    {
        // code here
        int r = matrix.size(), c = matrix[0].size();
        vector<int> row(r,0), col(c,0);
        for(int i = 0;i < r;i++){
            for(int j = 0;j < c;j++){
                if(matrix[i][j] == 1)
                    row[i] = 1, col[j] = 1;
            }
        }
        for(int i = 0;i < r;i++){
            if(row[i]){
                for(int j = 0;j < c;j++){
                    matrix[i][j] = 1;
                }
            }
        }
        for(int i = 0;i < c;i++){
            if(col[i]){
                for(int j = 0;j < r;j++){
                    matrix[j][i] = 1;
                }
            }
        }
    }
         
        
