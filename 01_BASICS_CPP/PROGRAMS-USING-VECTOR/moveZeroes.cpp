#include <iostream>
#include <vector>
using namespace std;
void movezeroes(vector <int>& nums){
    int nonzero = 0;
    for(int j=0 ; j<nums.size() ; j++){
        if(nums[j]!=0){
            swap(nums[j],nums[nonzero]);
            nonzero++;
        }
    }
}
void print(vector <int> nums ){
    for(int i=0 ; i<nums.size() ; i++){
        cout<< nums[i]<< " ";

    }
    cout<<endl;
}

int main () {
    vector <int> nums;
    nums.push_back(2);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(0);
    nums.push_back(0);
    nums.push_back(0);
    movezeroes(nums);
    print(nums);

}
