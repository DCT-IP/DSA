/*
Stores key->value pairs
keys are unique
automatically stored by keys
implemented via BST
*/
#include <iostream>
#include <map>

int main(){
    std::map<int,int> m;//other such are possible, <string,int><int,string> etc vtc
    //for insertion
    m[1] = 10;
    m[2] = 20;
    m.insert({3,19});
    //to access
    std::cout << m[1] << std::endl; //will create key[1] if non existant
    //a safer way of accessing
    if(m.find(1) != m.end()){
        std::cout << m[1]<<std::endl;
    }
    //to traverse thru
    for(auto p : m){
        std::cout << p.first << " -> " << p.second << std::endl;
    }
    //to search
    auto it = m.find(3);
    if(it != m.end())
        std::cout << it->second;
    
    //to erase/remove
    m.erase(2);
    for(auto p : m){
        std::cout << p.first << " -> " << p.second << std::endl;
    }
    m.erase(m.begin());
    for(auto p : m){
        std::cout << p.first << " -> " << p.second << std::endl;
    }
    m.clear();
    for(auto p : m){
        std::cout << p.first << " -> " << p.second << std::endl;
    }
    //bounds
    m[1] = 24;
    m[2] = 56;
    m[4] = 90;
    m[5] = 87;
    m[6] = 9;
    m[10] = 9;
    //Unordered map has no sorting and is made using hash table
}
