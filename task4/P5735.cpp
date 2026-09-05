#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
long double dis(double x1,double y1,double x2,double y2){
    long double res = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    return res;
}

int main(){
    double x1,y1;
    cin>>x1>>y1;
    double x2,y2;
    cin>>x2>>y2;
    double x3,y3;
    cin>>x3>>y3;
    long double dis1 = dis(x1,y1,x2,y2);
    long double dis2 = dis(x1,y1,x3,y3);
    long double dis3 = dis(x2,y2,x3,y3);
    long double sum = dis1 + dis2 + dis3;
    cout<<fixed<<setprecision(2)<<sum<<endl;
    return 0;    
}