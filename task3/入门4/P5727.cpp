#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[200] = {0};
    int i = 0;
    while(n != 1){
        arr[i] = n;
        if(n %2 == 1){
            n = n*3 +1;
        }else{
            n = n/2;
        }
        i++;
    }
    arr[i] = 1;
    for(i;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}