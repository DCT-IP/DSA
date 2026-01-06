/*
Problem Statement: Given an integer array nums of size n, 
return the majority element of the array.
Input:
 nums = [7, 0, 0, 1, 7, 7, 2, 7, 7]  
Output:
 7 
to be used:-
Input: nums = [1, 1, 1, 2, 1, 2]
*/
#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
    vector<int> nums = {1,1,1,2,1,2};
    map<int,int> m;
    int count = 0;
    for(auto val : nums){
        m[val]++;
    }
    int size = nums.size();
    for(auto p : m){
        if(p.second > (size/2)){
            cout << p.first << endl;
            break;
        }
    }
}