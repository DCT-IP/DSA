/*
Question: Given a sorted array of N integers and an integer x, write a program to find the lower bound of x.
The lower bound algorithm finds the first or the smallest index in a sorted array 
where the value at that index is greater than or equal to a given key i.e. x.

The lower bound is the smallest index, ind, where arr[ind] >= x. 
But if any such index is not found, the lower bound algorithm returns n i.e. size of the given array

Example:
Input Format: N = 4, arr[] = {1,2,2,3}, x = 2
Result: 1
Explanation: Index 1 is the smallest index such that arr[1] >= x
*/
#include <iostream>
using namespace std;
int main() {
    int arr[] = {1,2,2,3}, target = 2;
    int len = sizeof(arr)/sizeof(int);
    int start = 0, temp = len - 1;
    int ans = -1;
    while (start <= temp) {
        int mid = start + (temp - start) / 2;
        if (arr[mid] >= target) {
            ans = mid;        // possible lower bound
            temp = mid - 1;   // search left
        } else {
            start = mid + 1;
        }
    }
    if (ans == -1)
        cout << "not found!" << endl;
    else
        cout << "lower bound at: " << ans << endl;
}
//used binary sorting to sort to increase difficulty and due to module named such