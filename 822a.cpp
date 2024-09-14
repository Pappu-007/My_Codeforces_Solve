#include <bits/stdc++.h>
#include<string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#define ll long long int

using namespace std;


int main() {

    ll a,b;
    cin>>a>>b;
    ll c=min(a,b);
    ll r1 = 1;
    for (int i = 1; i <= c; ++i) {
        r1 *= i;
    }

    cout<<r1<<endl;

return 0;

}
