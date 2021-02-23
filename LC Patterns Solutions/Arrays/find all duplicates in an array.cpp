//Link - https://leetcode.com/problems/find-all-duplicates-in-an-array/

vector<int> findDuplicates(vector<int>& nums) {
    int i = 0, n = nums.size();
    while(i < n){
        int j = nums[i] - 1;
        if(i != j && nums[i] != nums[j])
            swap(nums[i], nums[j]);
        else i++;
    }
    vector<int> ans;
    for(int i = 0;i < n;i++){
        if(nums[i] != i+1)
            ans.push_back(nums[i]);
    }
    return ans; 
}
