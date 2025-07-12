#include<iostream>
using namespace std;
int main(){
    int rows;
    int columns;
    cout<<"Enter the size of the rows: ";
    cin>>rows;
    cout<<"Enter the size of the columns: ";
    cin>>columns;
    cout<<"Enter the elements of the matrix :";

    int arr[rows][columns];
    
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cin>>arr[i][j];
        }
    }
    int max = arr[0][0];
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            if(max<arr[i][j]){
                max = arr[i][j];
            }
            cout<<arr[i][j]<<" ";
        }
cout<<endl;
        
    }
    cout<<max<<endl;
}
    