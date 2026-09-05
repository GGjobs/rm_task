#include<iostream>
#include<vector>
using namespace std;
bool isPrime(int n){
    if(n<=1) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;

    for(int i = 3;i<=n/i;i+=2){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
}
    for(int i = 0;i<n;i++){
        if(isPrime(arr[i])){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}