/*vectors in c++ are like dynamic array
.. automatic resizing
.. Elements stored contiguously
.. fast access by index*/
#include <iostream>
#include <vector>
int main(){
    //1-D array start
    
    std::vector<int> v;
    //apart from this way
    std::vector<int> v1(5); //size 5, all initialized to 0
    std::vector<int> v2(4,10);//size 4, all initialized to 10
    std::vector<int> v3={1,2,3,4}; //list ke sath
    //like arrays 2d vectors allso exist 
    //trying to access elements 
    std::cout << v1[2] <<std::endl;
    std::cout << v2[3] <<std::endl;
    std::cout << v3.at(2) <<std::endl;
    //to pass to a function - void func(vector<int>& v);
    v.push_back({12});
    v.push_back({34}); v.push_back({90});
    for(auto p : v)
        std::cout << p <<" ";
    std::cout << std::endl;
    v.pop_back();
    for(auto p : v)
        std::cout << p <<" ";
    std::cout << std::endl;
    //v.size() to get size of a vector
    //v.capacity() for memory
    //v.reserve(100) for allocating memory at once
    //v.resize(n) // changing size
    //v.shrink_to_fit();
    //v.assign(5, 7) for reassignement
    //v1.swap(v2)
    v.erase(v.begin());
    for(const auto& p : v)
        std::cout << p <<" ";
    std::cout << std::endl;

    /*
    Under <algorithm>
    find, count can be used, sort, rev, rotate can be used and on sorting binary_search too
    ..
    vector<int>::iterator it = v.begin();
    *it = 100;*/



    /* onto 2d */
    std::vector<std::vector<int>> mat;
    //mat[i] -> row, mat[i][j] -> element
    mat.push_back({1,2});
    mat.push_back({3,4,5});
    //aslo possible ->
    int n = 3, m = 4;
    std::vector<std::vector<int>> rect(n, std::vector<int>(m,5));
    std::cout << "Jagged one:-\n";
    for(const auto& row:mat){
        for(int x:row)
            std::cout << x<<" ";
        std::cout<<std::endl;
    }
    std::cout<<"rectangle one:-\n";
    for(const auto& row:rect){
        for(int x:row)
            std::cout << x<<" ";
        std::cout<<std::endl;
    }
    mat.push_back({10,20,30}); //adds rows
    for(const auto& row:mat){
        for(int x:row)
            std::cout << x<<" ";
        std::cout<<std::endl;
    }
    for(int i = 0;i<mat.size();i++)
        mat[i].push_back(0);
    //adds columns
    for(const auto& row:mat){
        for(int x:row)
            std::cout << x<<" ";
        std::cout<<std::endl;
    }
    mat.erase(mat.begin());//dels rows
    for(const auto& row:mat){
        for(int x:row)
            std::cout << x<<" ";
        std::cout<<std::endl;
    }
    for(int i=0;i<mat.size();i++){
    mat[i].erase(mat[i].begin());
    }//col erase
    for(const auto& row:mat){
        for(int x:row)
            std::cout << x<<" ";
        std::cout<<std::endl;
    }
}