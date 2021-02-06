//Link - https://leetcode.com/problems/longest-consecutive-sequence/

//Question - Find length of longest consecutive series in unsorted array.

//Method 1 -  O(nlogn) using sorting
//Idea - Sort the array and then find max length of consecutive elements

//Code
int longestConsecutive(vector<int>& nums) {
  if(!nums.size()) return 0;
  sort(nums.begin(), nums.end());
  int mx = 1, ans = 1,prev = nums[0], n = nums.size();
  for(int i = 1;i < n;i++){
      if(nums[i] == prev+1)
          ans++;
      else if(nums[i] != prev){
          mx = max(mx, ans);
          ans = 1;
      }
      prev = nums[i];
  }
  mx = max(mx,ans);
  return mx;
}

//Method 2 - Using hashing O(n)
/*Idea - We try to linearly traverse the array and find a potential first element of the series
         If there is no element in the array that is just before the current element, then it is a potenital first element of ans
         If current element is nums[i] & if no nums[i] - 1 exist in the array, then we calculate length of consecutive series starting from it
         We find all possible first elements and update the maximum ans with current ans
*/

//Code

int longestConsecutive(vector<int>& nums) {
  if(!nums.size()) return 0;
  sort(nums.begin(), nums.end());
  int mx = 1, ans = 1,prev = nums[0], n = nums.size();
  for(int i = 1;i < n;i++){
      if(nums[i] == prev+1)
          ans++;
      else if(nums[i] != prev){
          mx = max(mx, ans);
          ans = 1;
      }
      prev = nums[i];
  }
  mx = max(mx,ans);
  return mx;
}
