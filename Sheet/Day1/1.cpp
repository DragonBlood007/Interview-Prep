// Link - https://leetcode.com/problems/find-the-duplicate-number/

//Idea :- Check if duplicate no. lies in [1,n/2] by counting no.s <= n/2 in array
// If cnt > n/2, duplicate in [1,n/2] else in [n/2+1,n]

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
