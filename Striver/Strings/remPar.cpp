/*
A valid parentheses string is defined by the following rules:
It is the empty string "".
If A is a valid parentheses string, then so is "(" + A + ")".
If A and B are valid parentheses strings, then A + B is also valid.
*/
#include <iostream>
using namespace std;
int main(){
    string par = "((()))";
    int len = size(par);
    int layr = 0;
    string ans = "";
    for(char ch : par){
        if(ch=='('){
            if(layr>0) ans += ch;
            layr++;
        } else if(ch==')'){
            layr--;
            if(layr > 0) ans += ch;
        }
    }
    cout << ans;
}