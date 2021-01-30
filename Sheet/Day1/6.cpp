// Link - https://leetcode.com/problems/merge-intervals/

//Idea - Sliding Window after sorting on start time


vector<vector<int>> merge(vector<vector<int>>& intervals) {
    if(intervals.size() == 1) return intervals;
    sort(intervals.begin(), intervals.end());
    int start = intervals[0][0], end = intervals[0][1];
    vector<vector<int>> res;
    for(auto interval : intervals){
        if(start <= interval[0] && interval[0] <= end){
            end = max(end, interval[1]);
        }
        else{
            res.push_back(vector<int>{start, end});
            start = interval[0], end = interval[1];
        }
    }
    if(res.empty() || res[res.size() - 1][1] != end)
        res.push_back(vector<int>{start, end});

    return res;
}
