#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define pb push_back
#define vi vector<int>
#define mod 1000000007
#define test() int t;cin>>t;while(t--)
#define ps(x,y) fixed<<setprecision(y)<<x
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int fact(int n){
	if(n==1) return 1;
	return n*fact(n-1);
}

void permut(string s){
	int len=s.size();
	int f=fact(len);
	for(int i=0;i<f;i++){
		string str=s;
		int temp=i;
		for(int j=len;j>=1;j--){
			int q=temp/j;
			int r=temp%j;
			cout<<str[r];
			str.erase(str.begin()+r);
			temp=q;
		}
		cout<<endl;
	}
}

int32_t main(){
    FIO;
    string s;
    getline(cin,s);
    permut(s);
    return 0;
}