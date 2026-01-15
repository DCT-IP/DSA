/*
Given two strings s and t, determine if they are isomorphic. 
Two strings s and t are isomorphic if the characters in s can be replaced to get t.
All occurrences of a character must be replaced with another character 
while preserving the order of characters. 
No two characters may map to the same character, 
but a character may map to itself.
Input: s = "paper", t = "title"
Output: true
*/
#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    string s = "paper";
    string t = "title";
    if (s.size() != t.size()) {
        cout << "Not isomorphic";
        return 0;
    }
    unordered_map<char, char> s_to_t;
    unordered_map<char, char> t_to_s;
    for (int i = 0; i < s.size(); i++) {
        char c1 = s[i];
        char c2 = t[i];
        if (s_to_t.count(c1) && s_to_t[c1] != c2) {
            cout << "Not isomorphic";
            return 0;
        }
        if (t_to_s.count(c2) && t_to_s[c2] != c1) {
            cout << "Not isomorphic";
            return 0;
        }
        s_to_t[c1] = c2;
        t_to_s[c2] = c1;
    }
    cout << "Isomorphic";
}
