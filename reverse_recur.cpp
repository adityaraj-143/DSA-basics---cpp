#include<bits/stdc++.h>
using namespace std;

void reverse(int i, vector<int>& v) {
    if(i >= v.size()/2) return;

    swap(v[i], v[v.size()-i-1]);
    reverse(i+1, v);
}

int main() {

    vector<int> v = {1,2,3,4,5};

    cout<<"Original array: ";
    for(auto it: v) cout<<it<<" ";

    reverse(0, v);

    cout<<"\nReversed array: ";
    for(auto it: v) cout<<it<<" ";
    cout<<endl;

    return 0;
}