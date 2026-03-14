/*
 A digit string is considered good if the digits at even indices (0-based)
 are even digits (0, 2, 4, 6, 8) 
 and the digits at odd indices are prime digits (2, 3, 5, 7).

Given an integer n, 
return the total number of good digit strings of length n. 
As the result may be large, return it modulo 1e9 + 7.

Input:
 n = 2
Output:
 20
Explanation:
 Index 0: 5 options (even digits)
Index 1: 4 options (prime digits)
Total: 5 * 4 = 20
*/
#include <bits/stdc++.h>
using namespace std;

const int MOD_fin = 1e9+7;

//recursive function
int countGN(int index, int n){
    if(index == n){
        return 1;
    }

    int result = 0;
    if(index%2==0){
        for(int digit :{0,2,4,6,8}){
            result = (result + countGN(index+1,n))%MOD_fin;
        }
    } else {
        for(int digit : {2,3,5,7}){
            result = (result + countGN(index+1,n))%MOD_fin;
        }
    }
    return result;
}

int main(){
    int n1 = 3;
    cout << countGN(0, n1) << endl ;
}