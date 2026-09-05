#include<iostream>
using namespace std;
int main(){
    int arr[105];
    int i = 0;
    int a;
    while(a != 0){
        
        
        cin>>a;
        arr[i] = a;
        i++;
    }
    for(i = i-2;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}