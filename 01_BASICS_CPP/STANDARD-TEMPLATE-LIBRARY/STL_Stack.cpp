#include <iostream>
#include <stack>
using namespace std;
int main () {
    stack<string> s;
    s.push("love");
    s.push("babbar");
    s.push("is great");
    cout<< "size of stack : "<<s.size()<<endl;
    cout<< "top element of stack : "<<s.top()<<endl;
    s.pop();
    cout<<"top element after pop : "<<s.top()<<endl;
    cout<< "empty or not "<<s.empty()<<endl;
    stack<string> temp = s;
    while(!temp.empty()){
        cout<<temp.top()<<endl;
        temp.pop();
    }
    cout<<endl;
    
}

