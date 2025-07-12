#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int maxsubarr(int nums[],int n,int k){
    int even =0;
    for(int i=0;i<k;i++){
        if(nums[i]%2==0){
            even++;
        }
    }
    for(int i=k;i<n;i++){
        if((nums[i-k])%2==0){
            even--;
        }
        else if(nums[i]%2==0){
            even++;
        }
        cout<<even<<endl;
    }
    return even;
}
    int main(){
    int nums[] = {1,2,3,4,5,6};
    int n = 6;
    int k=3;
    
    

    cout<<maxsubarr(nums,n,k)<<endl;
    return 0;
}