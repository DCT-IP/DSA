/*Input: nums = [0, 0, 0, 1, 3, -2]

Output: [1, 3, -2, 0, 0, 0]

Explanation:

All 3 zeroes are moved to the end and 
the order of the other elements stay the same*/
#include <iostream>
int main(){
    int nums[] = {0,2,0,0,-1,0,9};
    int l = sizeof(nums)/sizeof(nums[0]);
    int k=0;
    for(int i =0;i<l;i++){
        std::cout<< nums[i]<<" ";
    }
    std::cout <<"\n";
    for(int i =0;i<l;i++){
        if (nums[i]!=0){
            nums[k++] = nums[i];
        }
    }
    while(k < l){
        nums[k++] = 0;
    }
    for(int i =0;i<l;i++){
        std::cout<< nums[i]<<" ";
    }
}