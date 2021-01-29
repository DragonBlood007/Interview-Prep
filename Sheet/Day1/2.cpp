// Link :- https://leetcode.com/problems/sort-colors/
// Ques - Sort array of 0's,1's and 2's

//Idea :- Put 0's at lef side and 2's at right side


void sortColors(vector<int>& nums) {
    int i = 0,low = 0, high = nums.size() - 1;
    while(i <= high){
        if(nums[i] == 0){
            swap(nums[i],nums[low]);
            i++;
            low ++;
        }
        else if(nums[i] == 2){
            swap(nums[i], nums[high]);
            high--;
            // since the swapped no. might be 2 we can't mpve ahead before sorting it, hence no i++
        }
        else
            i++;

    }
}
