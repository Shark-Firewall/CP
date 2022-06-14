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

bool balanced(string s){
	stack<char>st;
	for(auto &i:s){
		if(i==')'){
			while(st.top()!='('){
				st.pop();
			}
			st.pop();
		}
		else if(i=='}'){
			while(st.top()!='{'){
				st.pop();
			}
			st.pop();
		}
		else if(i==']'){
			while(st.top()!='['){
				st.pop();
			}
			st.pop();
		}
		else st.push(i);
	}
	return st.empty();
}

int32_t main(){
    FIO;
    string s;
    getline(cin,s);
    cout<<balanced(s)<<endl;
    return 0;
}