#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find the median of a row-wise sorted matrix
    int findMedian(vector<vector<int>>& matrix) {
        
        // Create a list to store all elements
        vector<int> elements;

        // Traverse each row of the matrix
        for (auto& row : matrix) {

            // Traverse each element in the current row
            for (int val : row) {

                // Add the element to the list
                elements.push_back(val);
            }
        }

        // Sort the collected elements
        sort(elements.begin(), elements.end());

        // Return the middle element (median)
        int n = elements.size();
        return elements[n / 2];
    }
};

int main() {
    Solution obj;

    // Define the matrix
    vector<vector<int>> matrix = {
        {1, 3, 5},
        {2, 6, 9},
        {3, 6, 9}
    };

    // Print the median
    cout << obj.findMedian(matrix) << endl;

    return 0;
}
