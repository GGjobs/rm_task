#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++){
        int cnt = 0;
        for(int j = 0;j<i;j++){
            if(arr[j]<arr[i]){
                cnt++;
            }
        }
        cout<<cnt<<" ";
    }
    return 0;
}