//Link - https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1#

/*Idea - Let sub-array [0,x] has sum s and subarray [0,y] also has sum s, then subarray [x+1,y] will have sum 0.
         We have to find the length of longest such subarray
*/

//Code

int maxLen(int a[], int n)
{
    unordered_map<long long int, int> hash;
    hash[0] = -1;
    long long int sum = 0;
    int maxLength = 0;
    for(int i = 0; i < n;i++){
        sum += a[i];
        if(hash.find(sum) != hash.end()){
            int currDiff = i - hash[sum];
            maxLength = max(maxLength, currDiff);
        }
        else hash[sum] = i;
    }
    return maxLength;
}
