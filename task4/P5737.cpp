#include<iostream>
#include<vector>
using namespace std;
bool isRun(int n){
    if(n %100 == 0){
        if(n %400 == 0) return true;
        else return false;
    }else{
        if(n % 4 == 0) return true;
        else return false;
    }
}

int main(){
    int x,y;
    cin>>x>>y;
    int cnt = 0;
    vector<int> arr;
    for(int i = x;i<=y;i++){
        if(isRun(i)){
            arr.push_back(i);
            cnt++;
        }
    }
    cout<<cnt<<endl;
    for(auto t : arr){
        cout<<t<<" ";
    }
    return 0;
}