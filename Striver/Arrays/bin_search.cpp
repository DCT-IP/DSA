/*
binary search
You are given a sorted array of integers and a target,
your task is to search for the target in the given array. 
Assume the given array does not contain any duplicate numbers.
using recursion for making this a recursion problem as well as,
increasing the difficulty slightly

*/
#include <iostream>
using namespace std;
int bin_search(int arr[], int low,int high,int flag){
    int med = (low+high)/2;
    if(arr[med] == flag){
        return 0;
    } else if(flag > arr[med]){
        low = med;
        return bin_search(arr,low,high,flag);
    } else if(flag < arr[med]){
        high = med;
        return bin_search(arr,low,high,flag);
    } else {
        return -1;
    }
}
int main(){
    int arr[] = {3,4,7,8,10,78,87};
    int len = sizeof(arr)/sizeof(int);
    int flag = 8;
    int ans = bin_search(arr, 0,len,flag);
    if(ans == 0) {
        cout << "FOUND!!";
    } else {
        cout << "Not found!!";
    }
}