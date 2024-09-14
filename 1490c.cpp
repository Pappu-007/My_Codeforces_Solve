#include <bits/stdc++.h>
#include<string>
#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int

using namespace std;

vector<ll>cub;
void solve(){
    ll x;
    cin>>x;
    for(ll a=1;a<=1e4;++a){
        ll bcub=x-(a*a*a);
        bool exist= binary_search(cub.begin(),cub.end(),bcub);
        if(exist){
            cout<<"YES"<<endl;
            return;
        }

    }
    cout<<"NO"<<endl;
}


int main() {
    for(ll i=1;i<=1e4;++i){
                cub.push_back(i*i*i);

        }

    int t;
    cin>>t;
    while(t--){
        solve();

    }

return 0;

}

