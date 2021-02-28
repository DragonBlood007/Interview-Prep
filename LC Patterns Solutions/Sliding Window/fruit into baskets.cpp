//Link - https://leetcode.com/problems/fruit-into-baskets/

//Idea - Maximum size subrray with atmost 2 elements, sliding window

int totalFruit(vector<int>& tree) {
    int start = 0, end, ans = 0, n = tree.size();
    unordered_map<int,int> mp;
    for(end = 0;end < n;end++){
        mp[tree[end]]++;
        while(mp.size() > 2){
            mp[tree[start]]--;
            if(mp[tree[start]] == 0)
                mp.erase(tree[start]);
            start++;
        }
        int currentSize = end - start + 1;
        ans = max(ans, currentSize);
    }
    return ans;
}

