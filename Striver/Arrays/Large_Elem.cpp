//uses arrays to solve the largest element problem using iteration
#include <iostream>
int main(){
    int arr[] = {-4, -3, 0, 1, -8};
    int larg_elem = arr[0];
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=1; i<n; i++){
        if(arr[i]>larg_elem){
            larg_elem = arr[i];
        }
    }
    std::cout<<larg_elem; // should give out 1
}