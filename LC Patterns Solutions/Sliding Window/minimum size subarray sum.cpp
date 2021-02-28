//Link - https://leetcode.com/problems/minimum-size-subarray-sum/

int minSubArrayLen(int target, vector<int>& nums) {
    int start = 0, end = 0, ans = 1e9, n = nums.size(), sum = 0;
    for(end = 0;end < n;end++){
        sum += nums[end];
        while(sum >= target){
            int currentSize = end - start + 1;
            if(currentSize < ans)
                ans = currentSize;
            sum -= nums[start++];
        }
    }
    return ans == 1e9 ? 0 : ans;
}
