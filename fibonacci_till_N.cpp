#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    
    //write your code here
    int a=0;
    int b=1;
    for(int i=0;i<n;i++){
        cout<<a<<"\n";
        int c=a+b;
        a=b;
        b=c; 
    }
    
}