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

bool isprime(int a){
	if(a==1) return false;
	for(int i=2;i*i<=a;i++){
		if(a%i==0) return false;
	}
    return true;
}


void removeprimes(vector<int> v){
	for(int i=v.size()-1;i>=0;i--){
		int temp=v[i];
		if(isprime(temp)){ v.erase(v.begin()+i);}
	}
	cout<<"[";
    for(int i=0;i<v.size();i++){
    	cout<<v[i];
    	if(i<(v.size()-1)) cout<<", ";
    }
    cout<<"]";
}

int32_t main(){
    FIO;
    int n;
    cin>>n;
    vi v(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    
    removeprimes(v);
    return 0;
}