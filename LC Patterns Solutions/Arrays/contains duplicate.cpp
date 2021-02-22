// Link - https://leetcode.com/problems/contains-duplicate/


bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> s;
    for(auto num : nums){
        if(s.find(num) != s.end())
            return true;
        s.insert(num);
    }
    return false;
}
