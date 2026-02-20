#include <bits/stdc++.h>
using namespace std;
double myPow(double x, int n){
    if(n == 0 || n == 1.0) return 1;

    long long temp = n;

    if(n<0){
        x = 1/x;
        temp = -1*1L*n;
    }
    double ans = 1;
    for(long long i = 0; i < temp;i++){
        ans *= x;
    }
    return ans;
}
int main(){
    printf("%.4f\n", myPow(2.000,19));
    printf("%.4f\n",myPow(2.0000, -2));
}