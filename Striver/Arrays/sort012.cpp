/*
Input: nums = [1, 0, 2, 1, 0]
Output: [0, 0, 1, 1, 2]
Explanation: The nums array in sorted order 
has 2 zeroes, 2 ones and 1 two
to use:
Input: nums = [1, 1, 2, 2, 1]
*/
#include <iostream>
using namespace std;
int main(){
    int nums[] = {1,1,2,2,1};
    int len = 5, c0=0, c1=0, c2=0,index = 0;
    for(int i = 0; i < len;i++){
        if(nums[i]==0) c0++;
        if(nums[i]==1) c1++;
        if(nums[i]==2) c2++;
    }
    if((c0+c2+c1)!=len){
        printf("Error");exit(1);
    }
    for(int j=0;j<c0;j++){
        nums[index++] = 0;
    }
    for(int j=0;j<c1;j++){
        nums[index++] = 1;
    }
    for(int j=0;j<c2;j++){
        nums[index++] = 2;
    }
    cout<<"on sorting:-\n";
    for(int i=0;i<len;i++){
        cout << nums[i] << " ";
    }
}                                                        