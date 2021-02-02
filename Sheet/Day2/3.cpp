//Link - https://leetcode.com/problems/next-permutation/

/*Idea - To find the next permutation, we have to find a digit at position smallest power of 10( i.e. from the rightmost),
         such that, the digit could be replaced by higher valued digit of smaller power of 10(i.e.) to its right such that it can be swapped.
         We will find such a no. from right most to current index and then swap.
         Now after swapping we're sure that the sequence from index to rightmost is sorted in non-increasing order so we reverse it.
*/

//Code with comments

 void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int ind = -1;//this will store the index where the swap has to be done
        for(int i = n-2;i >= 0;i--){
            if(nums[i] < nums[i+1]){
                ind = i;//index such that it is decreasing when coming from right
                break;
            }
        }
        if(ind >= 0){ // if we found such an index it means that there lies an index to right whose value is greater
            for(int i = n-1;i> ind;i--){// we start from right to find the index which is at least power of 10 position, in order to justify the above condition
                if(nums[i] > nums[ind]){
                    swap(nums[i], nums[ind]);// we swap here and then make the remianing seq increasing in order to make it the next
                    break;
                }
            }
        }
        reverse(nums.begin()+ ind + 1, nums.end());// reverse the sequence, works even if ind is -1
    }
