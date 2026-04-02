/*
Given a non-negative integer n, determine whether it is odd. 
Return true if the number is odd, otherwise return false. 
A number is odd if it is not divisible by 2 (i.e., n % 2 != 0)

Input:
 n = 7
Output:
 true
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool isOdd(int n) {
            return (n & 1) == 1; 
        }
};


int main() {
    Solution sol;
    int num = 7;

    if (sol.isOdd(num)) {
        cout << num << " is odd." << endl;
    } else {
        cout << num << " is not odd." << endl;
    }

    return 0;
}