#include<iostream>
#include<string>
#include<cstring>
using namespace std;



int main(){
    string str = "Shambhavi";
    cout<<str<<endl;
    string Rstr = "";
    for(int i=str.length()-1;i>=0;i--){
        Rstr+=str[i];
    }
    for(int i=0;i<Rstr.length();i++){
        cout<<Rstr[i]<<" ";
    }
    return 0;
}