#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num = 1;
    for(int i = 1;i<=n;++i){
        for(int j = 1;j<=n - i + 1;++j){
            printf("%02d",num++);
        }
        printf("\n");
    }
    return 0;
}