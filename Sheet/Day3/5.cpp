// Link - https://leetcode.com/problems/unique-paths/

// Q - Find unique paths in a grid m*n where start is at (0,0) and end at (m,n) where only possible moves are right and down

/* Idea - There are a total of (m-1) down and (n-1) right moves
          We can make these moves in any order. 
          So the question is arranging (m-1) + (n-1) steps where (m-1) steps are down and (n-1) are right
          So our ans is (m+n-2)P(m-1)(n-1) OR (m-1 + n-1)!/(m-1)!(n-1)!      
*/

//Code

int uniquePaths(int m, int n) {
  int a = max(m,n), b = min(m,n);
  m = a, n = b; // to make calculation easier
  m-- , n--;// decrementing as we only have (m-1) down and (n-1) right moves
  long long quotient = 1, remainder = 1;
  for(int i = 0;i < n;i++){
      remainder *= (i+1LL);
      quotient *= (m+n-i);// loop to efficiently calculate factorial without fear of overflow
  }
  quotient /= remainder;
  return quotient;
}
