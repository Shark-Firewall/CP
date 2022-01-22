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

vector<int> allIndex(vector<int>& arr, int i, int data, int count){
	 
	 
}

int32_t main(){
    FIO;
    int n ;
	cin >> n;
	vector<int> arr;
	for (int i = 0; i < n; i++) {
	int d;
	cin >> d;
	arr.push_back(d);
	}
	int data;
	cin >> data;
	vector<int> ans = allIndex(arr, 0, data, 0);
	if (ans.size() == 0) {
	cout << endl;
	return 0;
	}
	for (int ele : ans) cout << ele << endl;

	return 0;
    return 0;
}