/*
input=[0,1,3,4,2]
output = 5

size n array should have all numbers from 0 to n(included)

using [0,1,2,4,5,6] and assume all nums are unique
will be using vectors as it is easier
*/
#include <iostream>
#include <vector>
using namespace std;

int find_missing(const vector<int>& vin, const vector<int>& refrn){
    for(int i : refrn){
        bool found = false;
        for(int j : vin){
            if(j == i){
                found = true;
                break;
            }
        }
        if(!found) return i;
    }
    return -1;
}
int main(){
    vector <int> vin= {0,1,2,4,5,6};
    vector <int> refrn;
    int l = vin.size();
    for(int i = 0;i<=l;i++){
        refrn.push_back(i);
    }
    //refrn ready
    int ans = find_missing(vin,refrn);
    if(ans == -1){
        cout << "Not any missing\n";
    } else {
        cout << "the missing number is: " << ans <<endl;
    }
}