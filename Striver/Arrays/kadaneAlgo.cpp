/*
Given an integer array nums, 
find the subarray with the largest sum and return the sum of the elements present in that subarray.
Input: nums = [2, 3, 5, -2, 7, -4]
Output: 15
The subarray from index 0 to index 4 has the largest sum = 15

used here:-
Input: nums = [-1, 2, 3, -1, 2, -6, 5]
expected ans: 6
*/
#include <iostream>
using namespace std;
int main(){
    int nums[] = {-1, 2, 3, -1, 2, -6, 5};
    int max = nums[0];int size = sizeof(nums)/sizeof(int);
    for(int i = 0;i < size;i++){
        int sum = 0;
        for(int j = i;j < size;j++){
            sum += nums[j];
            if(max < sum) max = sum;
        }
    }
    cout << "ans: " << max << endl;
}