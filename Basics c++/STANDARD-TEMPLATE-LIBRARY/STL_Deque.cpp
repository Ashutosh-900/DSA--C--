#include <iostream>
#include<deque>
using namespace std;
int main () {
    deque<int>d;
    d.push_back(1);
    d.push_front(2);
    d.push_back(3);
    for(int i:d){
    cout<<i<<" ";
    }
    cout<< endl;
    d.pop_front();
     for(int i:d){
    cout<<i<<" ";
    }
    cout<< endl;
    cout<< "first element is : "<<d.front() << endl;
    cout<< "last element is : "<<d.back()<< endl;
    cout<< "element at 1 index is : "<<d.at(1)<<endl;

    cout<< "empty or not : "<<d.empty() <<endl;
    cout<< "before erase size is : "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<< "after erase size is : "<<d.size()<<endl; 
    for(int i: d){
        cout<<i<<" ";
        
    }
}
