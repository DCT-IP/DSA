/*Input: nums1 = [1, 2, 3, 4, 5], nums2 = [1, 2, 7]

Output: [1, 2, 3, 4, 5, 7]

Explanation:

The elements 1, 2 are common to both, 
3, 4, 5 are from nums1 and 7 is from nums2*/
#include <iostream>

bool exists(int arr[], int size, int key) {
    for (int i = 0; i < size; i++)
        if (arr[i] == key)
            return true;
    return false;
}

int main() {
    int A[] = {1, 2, 3, 4, 7};
    int B[] = {1, 2, 7};

    int n = sizeof(A)/sizeof(int), m = sizeof(B)/sizeof(int);
    int U[n+m], k = 0;

    for (int i = 0; i < n; i++)
        U[k++] = A[i];

    for (int i = 0; i < m; i++)
        if (!exists(U, k, B[i]))
            U[k++] = B[i];

    for (int i = 0; i < k; i++)
        std::cout << U[i] << " ";

    return 0;
}
