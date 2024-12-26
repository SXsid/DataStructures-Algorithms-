#include <bits/stdc++.h>
using namespace std;

vector<int>twoSum(vector<int>& arr, int target){
    vector<int> vec;
    for (int i=0;i<arr.size();i++){
      
        for (int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==target){
                vec.push_back(i);
                vec.push_back(j);
                return vec;
            }
        }
    }
    return vec;

}
int main() {
    vector<int> arr={3,2,4};
    int target = 6;


    vector<int> ans = twoSum(arr,target);
    for(int value:ans){
        cout<<value<<endl;
    }
    return 0;
}