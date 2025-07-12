// SLiding window
#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int maxsubarr(int nums[],int n,int k){
    int windowsum=0;
    int maxsum=0;
    for(int i=0;i<k;i++){
        windowsum+=nums[i];
    }
    maxsum=windowsum;
    for(int i=k;i<n;i++){
        windowsum += nums[i] - nums[i-k];
        maxsum = max(maxsum,windowsum);
    }
    return maxsum;
}
int main(){
    int nums[] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = 9;
    int k=3;
    cout<<"Enter the size of maxSubarr :";
    cin>>k;
    cout<<(nums,n,k);

    cout<<maxsubarr<<endl;
    return 0;
}