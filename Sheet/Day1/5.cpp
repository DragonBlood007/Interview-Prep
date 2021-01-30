//Question - Kadane's Algo

//Idea - Calculate Local Maximaa at any point and use it to calculate global maxima which will be max of all local  maximas
         To calculate a local maxima, we have to decide b/w including only current element in the subarray or use prev local maxima and sum it with current element
         
//Code

int maxSum(int ar[], int n){
  int maxGlobal = ar[0], maxLocal = ar[0];
  for(int i = 1;i < n;i++){
    maxLocal = max(ar[i], maxLocal + ar[i]); // local maxima is current element or current element + prev local maxima
    maxGlobal = max(maxLocal, maxGlobal);
  }
  return maxGlobal;
}
