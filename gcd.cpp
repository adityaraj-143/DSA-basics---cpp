#include<bits/stdc++.h>
using namespace std;

int main () {

    int a,b;
    cout<< "enter first number: ";
    cin>>a;
    cout<< "enter second number: ";
    cin>>b;

    while(a>0 && b>0) {
        if(a > b) a= a%b;
        else b= b%a;
    }
    if(a == 0) cout<<b<<" is the GCD\n";
    else cout<<a<< " is the GCD\n";

    return 0;
}