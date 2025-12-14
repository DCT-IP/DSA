/*Input: nums1 = [1, 2, 3, 4, 5], nums2 = [1, 2, 7]

Output: [1, 2, 3, 4, 5, 7]

Explanation:

The elements 1, 2 are common to both, 
3, 4, 5 are from nums1 and 7 is from nums2*/
#include <iostream>
int main(){
    int num1[] = {1, 2, 3, 4, 5}, num2[] = {1, 2, 7};
    int l1 = sizeof(num1)/sizeof(num1[0]), l2 = sizeof(num2)/sizeof(num2[0]);
    int op[l1+l2];//maximum possible
    int act_size = 0;
    //TBD
}