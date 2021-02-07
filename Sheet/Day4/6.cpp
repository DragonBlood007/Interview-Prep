//Link - https://leetcode.com/problems/longest-substring-without-repeating-characters/

/*Idea - Sliding Window. Maintain frequency of character and keep incrementing the length
         If frequency of any element becomes greater than 1 then shrink window till we the condition is satisfied
         Update the max window size
*/

//Code
int lengthOfLongestSubstring(string s) {
  if(s.size() == 0)return 0;

  vector<int> mp(128,0);
  int ans = 1;
  int start = 0, end = 1, n = s.size();
  mp[s[0]]++;
  while(end < n){
      char rightChar = s[end];
      mp[rightChar]++;
      if(mp[rightChar] > 1){
          while(mp[rightChar] > 1){
              char leftChar = s[start++];
              mp[leftChar]--;
          }
      }
      else{
          ans = max(ans, end - start + 1);
      }
      end++;
  }
  return ans;
}
