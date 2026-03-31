/*
Problem Statement: Given two integers n and i, 
return true if the ith bit in the binary representation of n 
(counting from the least significant bit, 0-indexed) is set (i.e., equal to 1). 
Otherwise, return false.

Input: 
n = 5, i = 0
Output: 
true
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkIthBit(int n, int i) {
        return (n & (1 << i)) != 0;  
    }
};

int main() {
    Solution sol;
    int num = 5;  
    int bitIndex = 2;  

    if (sol.checkIthBit(num, bitIndex)) {
        cout << "The " << bitIndex << "-th bit of " << num << " is set (1)." << endl;
    } else {
        cout << "The " << bitIndex << "-th bit of " << num << " is not set (0)." << endl;
    }

    return 0;
}
