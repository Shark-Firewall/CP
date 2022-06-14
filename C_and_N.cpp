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

int32_t main(){
    FIO;
    string s;
    cin>>s;
    int len=s.size();
    int first = s[0]-'0';
    if(first==9) s[0]='9';
    else if(first>4){
    	s[0]=((9-first)+'0');
    }

    for(int i=1;i<len;i++){
    	int a=s[i]-'0';
    	if(a>4){
    		s[i]=((9-a)+'0');
    	}
    }

    cout<<s<<endl;
    return 0;
}