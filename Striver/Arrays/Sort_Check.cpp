//To check if an array is sorted or not
#include <iostream>
bool CheckSorted(int arr[], int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}
bool DescCheck(int arr[], int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]<arr[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {5,4,6,7,8};
    int arr3[] = {5,4,3,2,1};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    int n3 = sizeof(arr3)/sizeof(arr3[0]);
    //two test cases done
    bool ans1 = CheckSorted(arr1,n1);
    bool ans2 = CheckSorted(arr2,n2);
    bool ans3 = CheckSorted(arr3,n3);
    if(!ans3){
        ans3 = DescCheck(arr3,n3);
    }
    if(!ans1){
        ans3 = DescCheck(arr3,n3);
    }if(!ans2){
        ans3 = DescCheck(arr3,n3);
    }
    std::cout<<"Is arr1 sorted? "<<(ans1 ? "Yes" : "No")<<std::endl;
    std::cout<<"Is arr2 sorted? "<<(ans2 ? "Yes" : "No")<<std::endl;
    std::cout<<"Is arr3 sorted? "<<(ans3 ? "Yes" : "No")<<std::endl;
}