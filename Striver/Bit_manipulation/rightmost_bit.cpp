/*
Given a positive integer n, 
set the rightmost unset (0) bit of its binary representation to 1 and 
return the resulting integer.
If all bits are already set, 
return the number as it is.
Input:
 n = 10 (binary: 1010)  
Output:
 11 (binary: 1011) 
*/
#include <bits/stdc++.h>
using namespace std;
int setRightmostUnsetBit(int n) {
    
    return n | (n + 1);
}
int main() {
    int n = 10; 
    int result = setRightmostUnsetBit(n);
    cout << "Number after setting rightmost unset bit: " << result << endl; 
    return 0;
}
