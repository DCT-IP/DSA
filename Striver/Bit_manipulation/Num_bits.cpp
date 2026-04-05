/*
Given an integer n, 
return the number of set bits (1s) in its binary representation.
Example 1:
Input: 
n = 5
Output:
2
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countSetBits(int n) {
        int count = 0;  
        while (n) {
            n &= (n - 1);  
            count++;  
        }
        return count;
    }
};

int main() {
    int n = 29;  
    Solution sol;
    int result = sol.countSetBits(n);

    cout << "The number of set bits is: " << result << endl;

    return 0;
}