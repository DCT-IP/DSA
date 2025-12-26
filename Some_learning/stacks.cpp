#include <iostream>
#include <stack>
int main(){
    std::stack<int> st;
    //LIFO, access only from top, no indexing or iterator
    st.push(10);
    st.push(5);
    std::cout << st.top() <<std::endl;
    st.pop();
    std::cout << st.top() <<std::endl;
    //uses deque by default, can use vectors or lists
}