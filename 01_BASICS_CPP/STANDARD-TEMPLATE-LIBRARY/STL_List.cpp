#include <iostream>
#include <list>
using namespace std;
int main () {
    list<int> mylist;
    mylist.push_back(5);
    mylist.push_front(8);
    mylist.push_back(3);
    cout<< "empty or not : "<<mylist.empty()<<endl;
    for(int i: mylist){
        cout<<i<< " ";

    }cout<<endl;
    list<int> n(5,100);
    cout<<"Printing the list n ";
    for(int i : n){
        cout <<i <<" ";

    }cout<<endl;
    mylist.erase(mylist.begin());
    cout<<"after erase ";
    for(int i : mylist){
        cout<<i<< " ";

    }cout<<endl;
    cout<<"size of list :  "<<mylist.size()<<endl;
    cout<<"first element : "<<mylist.front()<<endl;
    

}
