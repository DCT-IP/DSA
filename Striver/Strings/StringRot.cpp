/*
Given two strings s and goal, return true if and only if 
s can become goal after some number of shifts on s
A shift on s consists of moving the leftmost character of s to the rightmost position
Input:
 s = "rotation", goal = "tionrota"
Output:
 true
*/
#include <iostream>
#include <string>
using namespace std;
bool rotate(string str_og, string str_goal){
    int len = str_og.size();
    for(int i = 0;i < len;i++){
        string str_res = str_og.substr(i)+str_og.substr(0,i);
        if(str_res.compare(str_goal)){
            return true;
        }
    }
    return false;
}
int main(){
    string str_main = "rotation", str_goal = "tionrota";
    if(rotate(str_main,str_goal)){
        cout << "Yes";
    } else {
        cout << "No";
    }
}