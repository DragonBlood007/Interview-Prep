// Link - https://leetcode.com/problems/pascals-triangle/

//Idea - Simple recursion

//Code 

 vector<vector<int>> ans;
    vector<vector<int>> generate(int numRows) {
        if(numRows == 0)
            return ans;
        if(numRows == 1){
            ans.push_back(vector<int>{1});
            return ans;
        }
        if(numRows == 2){
            ans.push_back(vector<int>{1});
            ans.push_back(vector<int>{1,1});
            return ans;
        }
        
        generate(numRows-1);//recurse for n-1
        
        vector<int> currentRow;
        currentRow.push_back(1);
        for(int i = 1;i < ans[ans.size()-1].size();i++){
            int sum = ans[ans.size()-1][i] + ans[ans.size()-1][i-1];
            currentRow.push_back(sum);
        }
        currentRow.push_back(1);
        ans.push_back(currentRow);
        return ans;
    }
