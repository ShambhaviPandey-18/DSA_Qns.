#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int MaxSubarr(vector<int> &nums,int n,int k){
    
    int maxsum=INT_MIN;
    for(int i=0;i<n-k;i++){
        int currSum=0;
        for(int j=i;j<i+k;j++){
            currSum += j;
            
        }
        maxsum = max(currSum,maxsum);
    }
        return maxsum;
}
int main(){
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int n = nums.size();
    int k;
    cout<<"Enter the size of maxSubarr :";
    cin>>k;
    cout<<MaxSubarr(nums,n,k);

    return 0;
}