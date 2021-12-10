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

int find(int arr[],int d,int n){
	for(int i=0;i<n;i++){
    	if(arr[i]==d) return i;
    }
    return -1;
}

int32_t main(){
    FIO;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int d;cin>>d;
    cout<<find(arr,d,n)<<endl;
    return 0;
}