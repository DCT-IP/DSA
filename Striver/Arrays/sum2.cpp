/*
Input: N = 5, arr[] = {2,6,5,8,11}, target = 14
Output : YES
Given an array of integers nums and an integer target. 
Return the indices(0 - indexed) 
of two elements in nums such that they add up to target.
int nums[] = {-6,7,1,-7,6,2}, target = 3;
*/
#include <iostream>
#include <utility>
using namespace std;
int main(){
    int nums[] ={-6,7,1,-7,6,2},  target = 3,flag = 0;
    pair<int,int> ans;
    int len = sizeof(nums)/sizeof(nums[0]);
    for(int i = 0; i < len-1;i++){
        for(int j = i+1;j<len;j++){
            if(nums[i]+nums[j] == target){
                ans.first=i;
                ans.second=j;
                flag = 1;
                break;
            }
        }
    }
    if(flag==1){
        cout <<"Yes it exists!!"<<endl;
        cout <<ans.first << " " << ans.second<<endl;
    } else {
        cout <<"it does not exist!!"<<endl;
    }
}