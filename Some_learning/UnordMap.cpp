/*
same as a map except not sorted
implemented wrt hash table
*/
#include <iostream>
#include <unordered_map>
int main(){
    std::unordered_map<int,int> um;
    um[1] = 9;
    um[8] = 18;
    um.insert({2,12});
    std::cout << um[1] << std::endl;
    if(um.find(1) != um.end())
        std::cout << um[1];
    
    for(auto p : um){
        std::cout << p.first << " -> " << p.second << std::endl;
    }
    auto it = um.find(5);
    if(it != um.end())
        std::cout << it->second;
    //erase is same 
}