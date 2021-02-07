//Link - https://www.interviewbit.com/problems/subarray-with-given-xor/
/*Idea - Use prefix xor and hashing.
         If a subarray from [a,b] has required xor 'm' & the prefix xor [0,b] has xor say 'X'
         Then the subarray from [0,a) must have xor = m^X.
         This implies that at a point if X^m has already ocurred then we have to count its occurences
         Additionally, if we set xor 0 has freq. 1 in the prefix xor, then we can also handle tha case when X = m
*/

//Code
int solve(vector<int> &A, int B) {
    unordered_map<int, int> mp;
    int xr = 0;
    int ans = 0;
    mp[0] = 1;
    for(auto i : A){
        xr ^= i;
        if(mp.find(xr ^ B) != mp.end())
            ans += mp[xr^B];

        mp[xr]++;
    }
    return ans;
}
