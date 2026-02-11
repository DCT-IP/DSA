/*
Given an array nums sorted in non-decreasing order. 
Every number in the array except one appears twice. 
Find the single number in the array
Input :nums = [1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6]
Output:4
Explanation: Only the number 4 appears once in the array.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num[] = {1,1,3,5,5};
    int len = size(num);
    int low = 0, high = len-1;
    while(low < high){
        int mid = (low+(high-low))/2;
        if(mid%2 == 1){
            mid--;
        }
        if (num[mid] == num[mid + 1]) {
            low = mid + 2;  
        } else {
            high = mid;     
        }
    }
    cout << "ans: "<< num[low];
}
