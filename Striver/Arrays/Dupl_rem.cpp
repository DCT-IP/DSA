//have an array remove all duplicates
//assume pre-sorted in ascending order

#include <stdio.h>
#include <iostream>
int main(){
    int arr[]={1,1,2,2,2,3,4,5,5};
    int l = sizeof(arr)/sizeof(arr[0]);
    int key, curr = arr[0];
    std::cout << "\n";
    for(int i =0;i<l;i++){
        std::cout<< arr[i]<<" ";
    }
    for(int i = 0;i<l-1;i++){
        key = arr[i];
        for(int j = 1+i;j<l;j++){
            if(arr[j]==key){
                for(int f = j;f<l;f++){
                    if(arr[f]==key)
                        continue;
                    else{
                        arr[j] = arr[f];
                        break;
                    }
                }
            }
        }
    }
    std::cout << "\n";
    for(int i =0;i<l;i++){
        std::cout<< arr[i]<<" ";
    }
}
//this works except for the last section with more than required elements
