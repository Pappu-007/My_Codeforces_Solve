#include <bits/stdc++.h>
#include<string>
#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long int

using namespace std;


int main() {

    int t;
    cin>>t;
    while(t--){

        ll n,k;
        cin>>n>>k;
        if(n==k){
            cout<<1<<endl;
        }
        else if(n>k){
            if(n%k==0){
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }
        else{
            ll a=k/n;
            if(k%n){
                a++;
            }
            cout<<a<<endl;
        }

    }

return 0;

}
