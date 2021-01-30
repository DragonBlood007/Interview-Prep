// Link - https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays-1587115620

// Question - Merge 2 arrays without extra space

/* Method 1(n^2) - Start from rightmost of 1st array and ALWAYS compare with leftmost element of 2nd array.
                   If 1st element is greater than 2nd then swap and sort the 2nd array and move leftwards in 1st array
                   If not then stop
                   This is because the first element is candidate for postion n1 to n2 and 2nd number is candidate for position 1 to n1+1 in sorted array.
*/

/* Method 2(nlogn + mlogm) - The idea is to put no.s 1-n1 of result array in 1st array in unsorted manner and n1+1 - n2 for second array.
                             Then we can sort both arrays.
                             Start from rightmost in first and leftmost in 2nd array.
                             if needed, then swap
                             in any case move leftwards in first and rightwards in second
                             do above till one array is completely traversed
                             sort both arrays
*/

// Code

void merge(int arr1[], int arr2[], int n, int m) 
{ 
  // code here 
  int i = n-1, j = 0;
  while(i >= 0 && j < m){
      if(arr1[i] > arr2[j]){
          swap(arr1[i],arr2[j]);
      }
      i--, j++;
  }
  sort(arr1,arr1+n);
  sort(arr2,arr2+m);
} 
