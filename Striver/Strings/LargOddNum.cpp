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
using namespace std;
int main(){
    string num = "54320";
    int len = size(num);
    for(int i = len; i < -1;i++){
        if(num[i] % 2==0){
            //tbd
        }
    }
    return 0;
}