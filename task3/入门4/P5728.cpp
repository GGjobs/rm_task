#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
struct student{
    int chinese;
    int math;
    int english;
    int total;
};
int main(){
    int n;
    cin>>n;
    vector<student> stu(n);
    for(int i = 0;i<n;i++){
        cin>>stu[i].chinese>>stu[i].math>>stu[i].english;
        stu[i].total = stu[i].chinese + stu[i].math + stu[i].english;
        
    }
    int cnt = 0;
    for(int i = 0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            int c = abs(stu[i].chinese - stu[j].chinese);
            int m = abs(stu[i].math - stu[j].math);
            int e = abs(stu[i].english - stu[j].english);
            int t = abs(stu[i].total - stu[j].total);
            if(c<=5 && m<=5 && e<=5 && t<=10){
                cnt++;
            }
}
    }
    cout<<cnt;
    return 0;
}