#include <iostream>
using namespace std;

bool isprime(int n){
    if(n<=1) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
void printprime(int low,int high){
    for(int i=low;i<=high;i++){
        if(isprime(i)){
            cout<<i<<"\n";
        }
    }
}
int main(int argc, char **argv){
    int low, high;
    cin >> low >> high;

    //write your code here
    printprime(low,high);
}