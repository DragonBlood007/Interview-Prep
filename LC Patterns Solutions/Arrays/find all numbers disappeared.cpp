//Link - https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/


vector<int> findDisappearedNumbers(vector<int>& nums) {
    int n = nums.size();
    for(int i = 0;i < n;i++){
        int j = nums[i] - 1;
        if(nums[i] != nums[j]){
            swap(nums[i], nums[j]);
            i--;
        }
    }
    vector<int> ans;
    for(int i = 0;i< n ;i++){
        if(nums[i] != i + 1)
            ans.push_back(i+1);
    }
    return ans;
}
