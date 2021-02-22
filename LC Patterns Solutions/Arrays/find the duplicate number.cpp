//Link - https://leetcode.com/problems/find-the-duplicate-number/

//Idea - Binary search on range. The duplicate exists either in [1, n/2] or [n/2 + 1, n]

int findDuplicate(vector<int>& nums) {
    int n = nums.size() - 1;
    int start = 1, end = n, mid;
    while(start < end){
        mid = (start + end) / 2;
        int count = 0;
        for(auto num : nums){
            if(num <= mid)
                ++count;
        }
        if(count > mid)
            end = mid;
        else
            start = mid + 1;
    }
    return start;
}
