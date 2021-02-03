//Link - https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1#

/*Idea - We can use merge sort algorithm to count inversions.
         While doing merge operation we can find that if an element in left side array has an element
         which is greater than current element on right array, then all the elements
         right to current element in left array will be greater than the current element in right array.
*/         
     


//Code

#define ll long long
ll invC;
void merge(ll int arr[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;
 
    ll int L[n1], R[n2];
 
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
 
    int i = 0;
 
    int j = 0;
 
    int k = l;
 
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            invC += n1-i;//update inversion count. ONLY difference from merge sort
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(ll int arr[], int l,int r){
    if(l>=r){
        return;//returns recursively
    }
    int m =l+ (r-l)/2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    merge(arr,l,m,r);
}

long long int inversionCount(long long arr[], long long n)
{
    // Your Code Here
    invC = 0;
    mergeSort(arr,0,n-1);
    return invC;
}
