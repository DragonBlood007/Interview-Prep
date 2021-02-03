//Link - https://leetcode.com/problems/powx-n/

//Code - 
double myPow(double x, int n) {
    if(n < 0)
        return 1/pow(x,-1LL*n);
    double ans = 1;
    while(n){
        if(n%2)
            ans *= x,n--;
        x = x*x,n/=2;
    }
    return ans;

}
