#include <bits/stdc++.h>
#include<string>
#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int

using namespace std;

void solve(){
    ll n, x;
		cin >> n >> x;

		ll a[n + 1];
		ll count = 0;  // odd
		ll count_even = 0; // even
		for (ll i = 1; i <= n; i++) {
			cin >> a[i];
			if (a[i] % 2 != 0) {
				count++;
			} else {
				count_even++;
			}
		}

		if (n == x) {
			if (count % 2 != 0) {
				cout << "Yes" << "\n";
			} else {
				cout << "No" << "\n";
			}
		} else {
			if (count == 0) {
				cout << "No" << "\n";
			} else {
				ll rem = x - 1;
				count = count - 1;
				//rem = rem - (count / 2) * 2;
				if (rem >= (count / 2) * 2 ) {
					rem = rem - (count / 2) * 2;
					if (rem <= count_even) {
						cout << "Yes" << "\n";
					} else {
						cout << "No" << "\n";
					}
				} else {
					if (rem % 2 == 0) {
						cout << "Yes" << "\n";
					} else {
						if (count_even == 0) {
							cout << "No" << "\n";
						} else {
							cout << "Yes" << "\n";
						}
					}
				}
			}
		}

}


int main() {

    int t;
    cin>>t;
    while(t--){
        solve();
    }

return 0;

}

