//Link - https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

//Idea - Find max diff b/w either of the 2
         1) Max element right to the current element - current element
         2) Current element - minimum element before it
         
//Code

int maxProfit(vector<int>& prices) {
    int n = prices.size();

    int maxDiff = 0, currMin = INT_MAX;
    for(int i = 0;i < n;i++){
        currMin = min(currMin, prices[i]);
        maxDiff = max(maxDiff, prices[i] - currMin);
    }
    return maxDiff;
}
