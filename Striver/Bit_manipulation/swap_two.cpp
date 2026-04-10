/*
Given two integers a and b, 
swap them in-place using only 2 variables 
(without using a temporary variable).
Example 1:
Input:
 a = 5, b = 10
Output:
 a = 10, b = 5
*/
#include <bits/stdc++.h>
using namespace std;

void swapXOR(int &a, int &b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

int main() {
    int a = 5, b = 10;
    swapXOR(a, b);
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}