#include<iostream>
#include<vector>
using namespace std;
int main(){
    int l,m;
    cin>>l>>m;
    vector<bool> arr(l+1,true);
    while(m--){
        int a,b;
        cin>>a>>b;
        for(int i = a;i<=b;i++){
            arr[i] = false;
        }
    }
    int cnt = 0;
    for(int i = 0;i<l+1;i++){
        if(arr[i]){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}