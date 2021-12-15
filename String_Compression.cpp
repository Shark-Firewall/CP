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

void String_compression01(string str){
	string res="";
	res+=str[0];
	for(int i=1;i<str.size();i++){
		char temp=str[i];
		if(str[i]!=str[i-1]) res+=str[i];
	}
	cout<<res<<endl;
}

void String_compression02(string str){
	string res="";
	res+=str[0];
	int count=1;
	for(int i=1;i<str.size();i++){
		if(str[i]==str[i-1]){
			count++;
		}
		else{
			if(count>1){
				res+=to_string(count);
			    count=1;
			}
			res+=str[i];
		}
	}
	if(count>1){
		res+=to_string(count);
	}
	cout<<res<<endl;
}


int32_t main(){
    FIO;
    string str;
    getline(cin,str);
    String_compression01(str);
    String_compression02(str);
    return 0;
}