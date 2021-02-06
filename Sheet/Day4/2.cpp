//Link - https://leetcode.com/problems/4sum/
//Idea - n^2 loop and 2sum in O(n)

//Code
vector<vector<int>> fourSum(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    set<vector<int>> s;
    vector<vector<int>> ans;
    int n = nums.size();
    for(int i = 0;i < n-3;i++){
        for(int j = i+1;j < n-2;j++){
            int start = j+1, end= n-1;
            while(start < end){
                int sum = nums[i] + nums[j] + nums[start] + nums[end];
                if(sum == target){
                    vector<int> v{nums[i], nums[j], nums[start], nums[end]};
                    sort(nums.begin(), nums.end());
                    s.insert(v);
                }

                if(sum < target) start++;
                else end--;
            }
        }
    }
    for(auto i : s){
        ans.push_back(i);
    }
    return ans;
}
