#include<iostream>//15 question - 3sum
#include<vector>
#include<unordered_map>
using namespace std;
        
//vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int> vec;
//         int i=0;
//         int j=i+1;
//         for(int i=0;i<nums.size();i++){
//             for(int j=i+1;j<nums.size();j++){
//                 if((nums[i]+nums[j])==target){
//                     vec.push_back(i);
//                     vec.push_back(j);
//                 }
//             }
//         }
//         return vec;
//     }
// 

//optimized solution:-
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> map;
    
    for(int i=0;i<nums.size()-1;i++){
        int diff = target - nums[i];
        if(map.find(diff)!= map.end()){
            return { map[diff],i};
        }
        map[nums[i]]=i;
    }
    return{};//no sol
}
    
int main(){
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> result = twoSum(nums,target);
    if(!result.empty()){
        cout<<"["<<result[0]<<","<<result[1]<<"]"<<endl;
    }else{
        cout<<"No valid pair found."<<endl;
    }
    return 0;
}