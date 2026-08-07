#include<iostream>
#include <map>
using namespace std;
int main () {
    map<int,string> m ;
    m[1] = "stay";
    m[2] = "hard";
    m[13]= "buddy";
    m[5] = "keep going";
    for (auto i :m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<< "finding 13 : "<<m.count(13)<<endl;
    cout<< "finding 3 : "<<m.count(3)<<endl;
    m.erase(5);
    cout<< "after erase"<<endl;
    for(auto i: m){
        cout<<i.first<< " "<<i.second<<endl;

    }
    auto it =m.find(13);
    for(auto i =it ; i!=m.end() ; i++ ){
        cout<<(*i).first<<endl;

    }
}
