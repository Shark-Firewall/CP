#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define inf 1e18+10
#define vi  vector<int>
#define vii vector<vector<int>>
#define pi pair<int,int>
#define mp make_pair
#define pb  push_back
#define mod 1e9+7
#define test() int t;cin>>t;while(t--)
#define ps(x,y) fixed<<setprecision(y)<<x
using namespace std;

void file_i_o()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	//#ifndef ONLINE_JUDGE
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	//#endif 
}


int main() {
	file_i_o();
	string s;
	getline(cin,s);
	unordered_map<char,int>mp;
	for(char ch:s){
		mp[ch]++;
	}
	
	string mid="";
	int count=0;
	for(auto i:mp){
		if(i.second&1){
			count++;
			mid+=i.first;
		}
	}
	if(count>1){
		cout<<"NO SOLUTION"<<endl;
		return 0;
	}
	string first="";
	string last="";
	for(auto i:mp){
		string s(i.second/2,i.first);
		first+=s;
		last=s+last;
	}
	cout<<((count==1)?first+mid+last:first+last)<<endl;
	return 0;
}