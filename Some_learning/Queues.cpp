#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<int> q;
    //FIFO, insert at back, remove from front 
    q.push(10);
    q.push(4);
    q.push(90);
    cout << q.front() << endl;
    cout << q.back() << endl;
    q.pop();
    cout << q.front() << endl; 
    cout << q.back() << endl;
    cout << q.size() << endl; 
}