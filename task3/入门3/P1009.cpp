#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>fact = {1};
    vector<int>sum;
    for(int i  = 1;i<=n;i++){
        //乘法
        int carry = 0;
        for(int &x:fact){
            int t = x*i + carry;
            x = t % 10;
            carry = t/10;
        }
        while(carry > 0){
            fact.push_back(carry % 10);
            carry /= 10;
        }
        //加法
        carry = 0;
        int j  = 0;
        while(j<fact.size() || carry){
            if(j>= sum.size()) sum.push_back(0);
            int t = sum[j] + (j<fact.size() ? fact[j] : 0) + carry;
            sum[j] = t%10;
            carry = t / 10;
            j++;
            
        }
    }
    for(auto it = sum.rbegin();it != sum.rend();it++){
        cout<<*it;
        
    }
    cout<<endl;
    return 0;
}