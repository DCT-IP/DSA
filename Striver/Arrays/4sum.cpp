/*
Given an array of N integers, 
your task is to find unique quads that add up to give a target value. 
In short, you need to return an array of all the unique quadruplets 
[arr[a], arr[b], arr[c], arr[d]] such that 
their sum is equal to a given target
Input Format:arr[] = [1,0,-1,0,-2,2], target = 0
Result: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int target) {
        int n = arr.size();
        set<vector<int>> st;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    for (int l = k + 1; l < n; l++) {
                        long long sum = (long long)arr[i] + arr[j] + arr[k] + arr[l];
                        if (sum == target) {
                            vector<int> temp = {arr[i], arr[j], arr[k], arr[l]};
                            sort(temp.begin(), temp.end());
                            st.insert(temp);
                        }
                    }
                }
            }
        }
        return vector<vector<int>>(st.begin(), st.end());
    }
};
int main() {
    vector<int> arr = {1, 0, -1, 0, -2, 2};
    int target = 0;
    Solution obj;
    vector<vector<int>> ans = obj.fourSum(arr, target);
    for (auto quad : ans) {
        for (int num : quad) cout << num << " ";
        cout << endl;
    }
    return 0;
}
