/*
Problem Statement: Given a string s, representing a large integer, 
the task is to return the largest-valued odd integer (as a string) 
that is a substring of the given string s.
The number returned should not have leading zero's. 
But the given input string may have leading zero
Input:
 s = "5347"
Output:
 "5347
*/
#include <iostream>
#include <string>
using namespace std;
int main(){
    string num = "08734521056";
    int len = num.size();int end = -1, strt = -1;
    for(int i = len-1; i >= 0;i--){
        if((num[i] - '0') % 2 != 0){
            end = i;
            break;
        }
    }
    for(int i = 0;i < len;i++){
        if(num[i]!= '0'){
            strt = i; break;
        }
    }
    string s = num.substr(strt,end+1-strt);
    cout << s;
    return 0;
}