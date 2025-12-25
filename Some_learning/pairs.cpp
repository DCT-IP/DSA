//this is a comment
#include <iostream>
#include <utility>
int main(){
    std::pair<int,int> p;
    p = {3,5};
    //or
    auto p1 = std::make_pair(10,20);
    //or
    std::pair<int,int> p2;
    p2.first = 10;
    p2.second = 9;
    //
    //accessing
    std::cout <<p.first << " " << p.second<<std::endl;
    std::cout <<p1.first << " " << p1.second<<std::endl;
    std::cout <<p2.first << " " << p2.second<<std::endl;
    //
    //comparing
    std::cout << (p < p1)<<std::endl;         //first is first ocompared then second
    std::cout << (p == p1)<<std::endl;         //both return 1 and 0 
}