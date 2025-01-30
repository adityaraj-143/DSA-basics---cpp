#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<< "Enter the size of array: ";
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++) {
        cout << "Enter element" << i+1 << ": ";
        cin >> arr[i];
    }

    map<int, int> mpp;
    for(int i=0; i<n; i++) {
        mpp[arr[i]]++;
    }

    int q;
    cout << "Eznter the number of searches you want to run: ";
    cin >> q;
    int i = 0;
    while(i<q) {
        int c;
        cout<< "Enter number "<< i+1 <<": ";
        cin >> c;
        cout << "The number is present " << mpp[c] << " times" << endl;
        i++;
    }

    return 0;
}