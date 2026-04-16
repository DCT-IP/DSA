/*
Given an array of N integers, count the inversion of the array (using merge-sort).

Inversion of an array: for all i & j < size of array, 
if i < j then you have to find pair (A[i],A[j]) such that A[j] < A[i].
Example 1:
Input Format: N = 5, array[] = {1,2,3,4,5}
Result: 0
*/
#include <bits/stdc++.h>
using namespace std;
int numberOfInversions(vector<int>& a, int n) {
    int cnt = 0; 
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) cnt++; 
        }
    }
    return cnt; 
}
int main() {
    vector<int> a = {5, 4, 3, 2, 1};
    int n = a.size();
    int cnt = numberOfInversions(a, n);
    cout << "The number of inversions is: " << cnt << endl;
    return 0;
}
