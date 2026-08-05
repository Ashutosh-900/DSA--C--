#include <iostream>
#include <vector>
using namespace std;
int main () {
    vector <int> v ;
    cout<< "capacity : "<<v.capacity()<<endl;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    cout<<"size of vector is : "<<v.size()<<endl;
    cout<<"capacity now is : "<<v.capacity()<<endl;
    cout<< "element at 1nd index : "<<v.at(1)<<endl;
    cout<<"before pop "<< endl;
    for (int i:v){
        cout<< i<<" "; 
    }
    cout<<endl;
    v.pop_back();
    cout<<"after pop "<<endl;
    for (int i:v){
        cout<< i<<" "; 
    }
    cout<<endl;
    cout<< "first element is  :"<<v.front()<<endl;
    cout<<"last element is :"<<v.back()<<endl;
    v.clear();
    cout<< " after clear size is : "<<v.size()<<endl;

  

}