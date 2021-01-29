// Link - https://leetcode.com/problems/find-the-duplicate-number/

//Code :-

int findDuplicate(vector<int>& nums) {
    int low = 1, high = nums.size()-1;
    while(low < high){
        int mid = low + (high - low)/2;
        int cnt = 0;
        for(auto i : nums)
            if(i <= mid)
                cnt++;

        if(cnt > mid)
            high = mid;
        else
            low = mid + 1;
    }
    return low;
}
