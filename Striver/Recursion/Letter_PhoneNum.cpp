/*
Problem Statement: Given a string consisting of digits 
from 2 to 9 (inclusive). 
Return all possible letter combinations that the number can represent.
Input:
 digits = "34"
Output:
 [ "dg", "dh", "di", "eg", "eh", "ei", "fg", "fh", "fi" ]
*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
private:
    void func(int ind, string digits, string s, vector<string> &ans, string combos[]) {
        if(ind == digits.size()) {
            ans.push_back(s);
            return;
        }
        int digit = digits[ind] - '0';
        for(int i = 0; i < combos[digit].size(); i++) {
            func(ind + 1, digits, s + combos[digit][i], ans, combos);
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        string combos[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> ans; 
        string s = "";
        func(0, digits, s, ans, combos);
        return ans; 
    }
};
int main() {
    Solution solution;
    string digits = "23"; 
    vector<string> result = solution.letterCombinations(digits); 
    for (const string& combination : result) {
        cout << combination << " ";
    }
    return 0;
}