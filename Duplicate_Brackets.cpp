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

bool duplicate(string s){
	stack<char>st;
	for(auto &i:s){
		if(i==')'){
			if(st.top()=='(') return true;
			else{
				while(st.top()!='('){
					st.pop();
				}
				st.pop();
			}
		}
		else st.push(i);
	}
	return false;
}

int32_t main(){
    FIO;
    string s;
    getline(cin,s);
    cout<<(duplicate(s)?"true":"false")<<endl;
    return 0;
}