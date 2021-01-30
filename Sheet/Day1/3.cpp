// Link - https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/

//Method 1 - Swap sort (1-n in correct place)
// Method 2 - xor with 1 to n

// Code(Method 1)


int *findTwoElement(int *arr, int n) {
    // code here
    int cnt = 0;
    for(int i = 0; i < n;){
        int j = arr[i] - 1;
        if(arr[i] != arr[j]){
            swap(arr, i , j);
        }
        else i++;
    }
    int *res = new int(2);

    for(int i = 0;i < n;i++){
        if(arr[i] != i + 1){
            res[0] = arr[i];
            res[1] = i+1;
            return res;
        }
    }
    return res;
}
