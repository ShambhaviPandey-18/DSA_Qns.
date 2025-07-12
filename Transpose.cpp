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
    
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int transpose[columns][rows];
    for(int i=0;i<columns;i++){
        for(int j=0;j<rows;j++){
            transpose[i][j]=arr[j][i];
        }
        
    }
    for(int i=0;i<columns;i++){
        for(int j=0;j<rows;j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
}