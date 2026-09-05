#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    double max_score = 0;
    while(n--){
        double sum = 0;
        int max = -1;
        int min = 11;
        
        for(int i = 0;i<m;i++){
            int a;
            cin>>a;
            sum += a;
            if(a>max) max = a;
            if(a<min) min = a;
        }
        double score = (sum-max-min)/(m-2);
        if(score>max_score) max_score = score;
    }
    cout<<fixed<<setprecision(2)<<max_score;
    return 0;
}