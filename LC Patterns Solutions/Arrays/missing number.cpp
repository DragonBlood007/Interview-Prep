//Link - https://leetcode.com/problems/missing-number/

int missingNumber(vector<int>& nums) {
    long sum = nums.size();
    sum = sum*(sum+1)/2;
    for(auto i : nums){
        sum -= i;
    }
    return sum;
}
