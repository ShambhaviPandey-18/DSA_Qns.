#include<iostream>
using namespace std;


void isSymmetric(int arr[][100], int rows, int cols){
    if(rows!=cols){
        cout<<"It is not a Symmetric matrix."<<endl;
        return;
    }
    bool isSym = true;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]!=arr[j][i]){
                isSym=false;
                break;
            }
            
           }
           if(!isSym) break;
        }

        if(isSym){
            cout<<"this is Symmetric matrix"<<endl;
        }else{
            cout<<"this is not Symmetric matrix"<<endl;
        }
    }

int main(){
    int rows;
    int cols;
    cout<<"Enter the size of the rows: ";
    cin>>rows;
    cout<<"Enter the size of the columns: ";
    cin>>cols;
    cout<<"Enter the elements of the matrix :";

    int arr[100][100];
    
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }
    isSymmetric(arr,rows,cols);
    return 0;
    }
