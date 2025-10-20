//Given an array of integers nums, return the second-largest element in the array. 
//If the second-largest element does not exist, return -1.
#include <iostream>

void sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main(){
    int arr[] = {1,2,4,7,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, n);
    std::cout << "Second largest :" << arr[n-2];
    std::cout << "\nSecond Smallest :" << arr[1];
}