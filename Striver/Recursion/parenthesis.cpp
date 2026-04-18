/*
Problem Statement: Given n pairs of parentheses,
write a function to generate all combinations of well-formed parentheses.
Input:
 n = 3
Output:
 ["((()))", "(()())", "(())()", "()(())", "()()()"]
*/
#include <bits/stdc++.h>
using namespace std;
bool isValid(string s) {
    int balance = 0;
    for (char c : s) {
        if (c == '(') balance++;
        else balance--;
        if (balance < 0) return false;
    }
    return balance == 0;
}
void generateAll(string curr, int n, vector<string>& res) {
    if (curr.length() == 2 * n) {
        if (isValid(curr)) res.push_back(curr);
        return;
    }
    generateAll(curr + '(', n, res);
    generateAll(curr + ')', n, res);
}
vector<string> generateParenthesis(int n) {
    vector<string> res;
    generateAll("", n, res);
    return res;
}
int main() {
    int n = 3;
    vector<string> result = generateParenthesis(n);
    for (string s : result) cout << s << endl;
    return 0;
}