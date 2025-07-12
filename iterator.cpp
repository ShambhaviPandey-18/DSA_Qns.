#include<iostream>
#include<iterator>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {1,3,2,5,0};

    cout<< v.capacity()<<endl;
    for(auto it = v.begin(); it != v.end(); ++it){
        //cout<<*it
        if(*it>2){
            *it=1;
        }
    }
    for(auto it = v.end()-1; it != v.begin();--it){
        *it =0;
    }
    for(auto it = v.begin(); it != v.end(); ++it){
        cout<< v[*it]<<endl;
}
}