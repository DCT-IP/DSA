/*
Problem Statement: Given a non-empty array of integers arr, 
every element appears twice except for one. 
Find that single one.

Example 1:
Input Format: arr[] = {2,2,1}
Result: 1
*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int getSingleElement(vector<int>& arr) {
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            int num = arr[i]; 
            int cnt = 0;
            for (int j = 0; j < n; j++) {
                if (arr[j] == num)
                    cnt++;
            }
            if (cnt == 1) return num;
        }
        return -1;
    }
};
int main() {
    vector<int> arr = {4, 1, 2, 1, 2};
    Solution obj;
    int ans = obj.getSingleElement(arr);
    cout << "The single element is: " << ans << endl;
    return 0;
}
