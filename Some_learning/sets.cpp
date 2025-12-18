#include <iostream>
#include <set>
using namespace std;
int main(){
    set<int> s;
    //stores only unique elements
    //automatically sorted
    //BST(RedBlack) is used to implement
    s = {1,3,4,5};
    //declaring

    for(int x : s)
        cout << x << " ";
    cout << endl;
    s.insert(10);
    s.insert(2);
    s.erase(4);
    for(int x : s)
        cout << x << " ";
    cout << endl;
    s.erase(s.begin());
    for(int x : s)
        cout << x << " ";
    cout << endl;
    //adding and deleting

    if(s.count(9))
        cout << "Found it\n";
    else 
        cout << "non existant\n";

    //or 
    auto it = s.find(10);//utilizes iterator
    if(it != s.end()) cout << "found\n";
    //searching

    //for traversing/accessing we cannot index as it is not an array
    auto its = s.begin();
    advance(its, 10);
    cout << *its; //returns position


    set<int> s1 = {2,3,4,7,8,9,10,11};
    auto it1 = s.lower_bound(5); // first >= 5
    auto it2 = s.upper_bound(5); // first > 5
    if(it1 != s.end()) cout << *it1 <<" ";
    cout << endl;
    if(it2 != s.end()) cout << *it2<<" ";
    //ranges??

}