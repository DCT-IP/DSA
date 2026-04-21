/*
Problem Statement: You are given an 2D array queries of dimension n*2.
The queries[i] represents a range from queries[i][0] to queries[i][1] (include the end points).
Input:
 queries = [ [2, 5], [4, 7] ]  
Output:
 [3, 2] 
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<int> primesInRange(vector<vector<int>>& queries) {
        if (queries.empty()) return {};
        int maxVal = 0;
        for (const auto& query : queries) {
            maxVal = max(maxVal, query[1]);
        }
        vector<bool> isPrime(maxVal + 1, true);
        isPrime[0] = isPrime[1] = false;
        for (int p = 2; p * p <= maxVal; ++p) {
            if (isPrime[p]) {
                for (int i = p * p; i <= maxVal; i += p)
                    isPrime[i] = false;
            }
        }
        vector<int> primeCount(maxVal + 1, 0);
        for (int i = 1; i <= maxVal; ++i) {
            primeCount[i] = primeCount[i - 1] + (isPrime[i] ? 1 : 0);
        }
        vector<int> result; 
        for (const auto& query : queries) {
            int L = query[0];
            int R = query[1];
            result.push_back(primeCount[R] - (L > 0 ? primeCount[L - 1] : 0));
        }
        return result;
    }
};
int main() {
    Solution solution;
    vector<vector<int>> queries = {{2, 5}, {4, 7}};
    vector<int> result = solution.primesInRange(queries);
    cout << "[";
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << (i == result.size() - 1 ? "" : ", ");
    }
    cout << "]" << endl;
    return 0;
}