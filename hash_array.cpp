#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;

    int hash[26] = {0};
    for(int i=0; i<s.size(); i++) {
        hash[s[i] - 'a']++;
    }

    int q;
    cout << "Eznter the number of searches you want to run: ";
    cin >> q;
    int i = 0;
    while(i<q) {
        char c;
        cout<< "Enter element "<< i+1 <<": ";
        cin >> c;
        cout << "The element is present " << hash[c-'a'] << " times" << endl;
        i++;
    }
    return 0;
}