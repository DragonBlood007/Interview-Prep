//Link - leetcode.com/problems/two-sum

//Code
vector<int> twoSum(vector<int>& nums, int target) {
  unordered_map<int, int> mp;
  int n = nums.size();
  for(int i = 0;i < n;i++){
      if(mp.find(target - nums[i]) != mp.end())
          return vector<int> {i, mp[target- nums[i]]};
      mp[nums[i]] = i;
  }
  return vector<int> {0,1};
}
