//Link - https://leetcode.com/problems/longest-consecutive-sequence/

int longestConsecutive(vector<int>& nums) {
    unordered_map<int, int> mp;
    int mx = 0, n= nums.size();
    for(auto i : nums){
        mp[i] = 1;
    }
    for(int i = 0;i < n;i++){
        if(mp.find(nums[i]) != mp.end() && mp.find(nums[i] - 1) == mp.end()){
            int cnt = 1;
            while(mp.find(nums[i] + cnt) != mp.end()){
                cnt++;
            }
            mx = max(mx, cnt);
        }
    }
    return mx;
}
