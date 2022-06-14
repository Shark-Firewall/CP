#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define vi  vector<int>
#define pb  push_back
#define mod 1000000007
#define test() int t;cin>>t;while(t--)
#define ps(x,y) fixed<<setprecision(y)<<x
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

// Balance Ternary Number system consist of three number
// 1- 0
// 2- 1
// 3- -1 but we consider as "Z"(char d-type)
// Means return type is always going to be string type.


string ternary(int num){
	string res="";
	while(num>0){
        int rem= num%3;
        num/=3;
        if(rem==2){
            rem=-1;
            num++;
        }
        if(rem==0) res+='0';
        else if(rem==1) res+='1';
        else res+='Z';
	}
	reverse(res.begin(),res.end());
	return res;
}

int32_t main(){
    FIO;
    int a;
    cin>>a;
    cout<<ternary(a)<<endl;
    return 0;
}