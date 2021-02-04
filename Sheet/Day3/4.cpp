//Link - https://leetcode.com/problems/majority-element-ii/
//Question - We have to find majoirty elements such that their frequency is greater than n/3

/*Idea - So we know for sure that there can only be a max of 2 elements
         whose frequency will be strictly greater than n/3
         Keeping that it mind we extend Moore's voting algorithm from previous question.
         
         We start off with possibility of 2 different majorities with counter of both set to 0.
         We'll loop thru every element in array.
         1) If current element is equal to majority1 then increment counter 1
         2) If not then, check if current element is equal to majority2, if yes then increment counter2
         3) If not, then check if counter1 is 0 implying no majority1, then set majority1 and increment counter1
         4) If not, then check if counter2 is 0 implying no majoirty2, then set majoirty2 and increment counter2
         5) If current element is not equal to both existing majorites then decrement both counters.
         
         Now, confirm if both are majorities having count > n/3,
         those who are put them in result.
*/

//Code

vector<int> majorityElement(vector<int>& nums) {
  //Ther can only be atmost 2 elements with freq. > n/3
  int a = 0,b = 1, cnt1 = 0,cnt2 = 0;//set them with different arbitrary no.s at beginning 
  for(auto num : nums){
      if(a == num)
          cnt1++;
      else if(b == num)
          cnt2++;
      else if(cnt1 == 0)
          a = num, cnt1++;
      else if(cnt2 == 0)
          b = num, cnt2++;
      else
          cnt1--, cnt2--;
  }
  //check if either or both are majorit(y/ies)
  cnt1 = 0, cnt2 = 0;
  for(auto num : nums){
      if(num == a) cnt1++;
      if(num == b) cnt2++;
  }
  int n = nums.size();
  vector<int> res;
  if(cnt1 > n/3)
      res.push_back(a);
  if(cnt2 > n/3)
      res.push_back(b);
  return res;
}
