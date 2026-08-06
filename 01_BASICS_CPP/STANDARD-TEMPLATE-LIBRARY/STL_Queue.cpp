#include <iostream>
#include <queue>
using namespace std;
int main () {
    queue<string> q;
    q.push("stay");
    q.push("hard");
    q.push("buddy");
    cout<< "first element of queue is : "<<q.front()<<endl;
    q.pop();
    cout<< "first element of queue is : "<<q.front()<<endl;
    cout<< "size of queue is : "<<q.size()<<endl;
    queue<string>alpha = q;
    while(!alpha.empty()){
        cout<<alpha.front()<<endl;
        alpha.pop();

    }
}