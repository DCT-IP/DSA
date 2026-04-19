/*
Problem Statement: Given an integer array nums, 
which can have duplicate entries, 
provide the power set. 
Duplicate subsets cannot exist in the solution set. 
Return the answer in any sequence.
Input: array[] = [1,2,2]
Output: [ [ ],[1],[1,2],[1,2,2],[2],[2,2] ]
*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void findSubsets(int ind, vector<int>& nums, vector<int>& ds, set<vector<int>>& result) {        if (ind == nums.size()) {
            result.insert(ds);
            return;
        }
        ds.push_back(nums[ind]);
        findSubsets(ind + 1, nums, ds, result);
        ds.pop_back();
        findSubsets(ind + 1, nums, ds, result);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> result;
        vector<int> ds;
        sort(nums.begin(), nums.end());
        findSubsets(0, nums, ds, result);
        vector<vector<int>> ans(result.begin(), result.end());
        return ans;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {1, 2, 2};
    vector<vector<int>> ans = sol.subsetsWithDup(nums);
    cout << "[ ";
    for (const auto& subset : ans) {
        cout << "[ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "] ";
    }
    cout << "]" << endl;
    return 0;
}