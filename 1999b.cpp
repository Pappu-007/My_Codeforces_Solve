#include <bits/stdc++.h>
#include<string>
#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;
typedef long long int ll;

int main() {

    int t;
    cin>>t;
    while(t--){
        string s, t;
	cin >> s >> t;

	ll n = s.size();
	ll m = t.size();

	ll i = 0;
	ll j = 0;
	while(i < n && j < m) {
		if(s[i] == '?' || s[i] == t[j]) {
			s[i] = t[j];
			i++;
			j++;
		} else i++;
	}

	while(i < n) {
		if(s[i] == '?') s[i] = 'r';
		i++;
	}


	if(j < m) {
		cout << "NO" << endl;

	}
	else{
        cout << "YES" << endl;
	cout << s << endl;
	}


    }

return 0;

}

