#include<bits/stdc++.h>
using namespace std;

int summation(int n) {
    if(n == 0) return 0;
    return n + summation(n-1);
}

void ParameterSum(int i, int sum) {
    if(i < 1) {
        cout<<sum<<endl;
        return;
    }

    ParameterSum(i-1, sum+i);
}

int main() {
    int n = 5;
    int sol = summation(n);
    cout<<"Output of "<<sol<<endl;
    ParameterSum(n,0);
    return 0;
}