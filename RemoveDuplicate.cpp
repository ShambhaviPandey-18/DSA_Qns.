#include<iostream>
#include<string>
#include<cstring>
using namespace std;



int main(){
    string str = "hello";
    cout<<str<<endl;
    char ch[str.length()+1];
    
    for(int i = 0;i<str.length();i++){
        ch[i]= str[i];
    }
    ch[str.length()] = '\0';

    for(int i=0;i<str.length();i++){
        cout<<ch[i]<<" ";
    }
    int count[str.length()+1]={0};
    for(int i=0;i<str.length();i++){
        if(count[i]>1){
            count[i]+=1;
        }
    }
}