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

void substring(string s){
	for(int i=0;i<(s.size());i++){
		for(int j=1;j<=(s.size()-i);j++){
			cout<<s.substr(i,j)<<endl;
		}
	}
}

int32_t main(){
    FIO;
    string str;
    cin>>str;
    substring(str);
    return 0;
}