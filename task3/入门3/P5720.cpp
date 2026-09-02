#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int count = 0;
    while(a != 1){
        a = a/2;
        count++;
    }
    cout<<count+1<<endl;
    return 0;
}