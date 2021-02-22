//Link - https://leetcode.com/problems/product-of-array-except-self/

vector<int> productExceptSelf(vector<int>& nums) {
    int pro = 1, n = nums.size();
    vector<int> prefix(n), suffix(n), ans(n);
    for(int i = n-1;i >= 0;i--){
        pro *= nums[i];
        suffix[i] = pro;
    }
    pro = 1;
    for(int i = 0;i < n-1;i++){
        prefix[i] = pro * suffix[i + 1];
        pro *= nums[i];
    }
    prefix[n-1] = pro;
    return prefix;
}
