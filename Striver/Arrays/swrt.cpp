/*
You are given a positive integer n. 
Your task is to find and return its square root.
If ‘n’ is not a perfect square, then return the floor value of sqrt(n)
Input: N = 36
Output: 6
Explanation: Square root of 36 is 6
and
Input: N = 28
Output: 5
Explanation: sqrt of 28 is 5.something but on floor we get
*/
#include <iostream>
using namespace std;
int mysqrt(int num){
    if(num < 2) return num;
    int temp = num;int left = 1, right = num/2, ans = 0;
    while (left<=right)
    {
        int mid = left + (right-left)/2;
        if(mid*mid <= num){
            ans = mid;
            left = mid+1;
        } else {
            right = mid-1;
        }
    }
    return ans;
}
int main(){
    int N = 90;
    int sqrt = mysqrt(N);
    cout << sqrt << endl;
}

