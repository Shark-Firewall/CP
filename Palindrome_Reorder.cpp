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
		map[ch]++;
	}
	string first="";
	string last="";
	string mid="";
	int count=0;
	for(auto i:mp){
		if(mp.second&1){
			count++;
			mid+=mp.first;
		}
	}
	if(count>1){
		cout<<"No Solution"<<endl;
		return 0;
	}
	string ans=""
	for(auto i:mp){
		if(mp.second==1){
			mid+=mp.first;
		else{
			
		}
	}
	return 0;
}