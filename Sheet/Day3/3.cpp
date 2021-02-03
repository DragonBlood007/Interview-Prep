//Link - https://leetcode.com/problems/majority-element/submissions/

/*Idea - Use map for O(n) space, for O(1) space we have to follow Moore's voting algorithm
         
         Moore's algo :
         1) Initialise counter for majority element as 0
         2) If counter is 0, set majoirty as current num
         3) Increment counter if current element is majoirty else decrement
         
         Suppose at index 'i' we have counter, then there are 3 cases possible
         1) cnt == 0, our majoirty element's count till current element is exactly half, hence cancelled out by other elements
         2) cnt < 0, since we know in enitre range majority element is strictly greater than n/2 (> n/2), 
            hence in remaining half elements it will cancel out other elements and ultimately be geater than 0
         3) cnt > 0, our element is currently in majoirty, the correct majoirty element will somehow set cnt > 0, with its correct value
            even if it is not currently present in majority elements
            
*/
         
         
//Code

int majorityElement(vector<int>& nums) {
  int cnt = 0, majority;
  for(auto i : nums){
      if(!cnt)
          majority = i;
      cnt += majority == i ? 1:-1; 
  }
  return majority;
}
