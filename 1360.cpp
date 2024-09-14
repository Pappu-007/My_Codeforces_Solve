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
        ll ans=n;

        for(ll i=1;i*i<=n;i++){
                if(n%i==0){
                    if(i<=k){
                        ans=min(ans,n/i);
                    }
                    if(n/i<=k){
                        ans=min(ans,i);
                    }
                }


        }
        cout<<ans<<endl;
    }

return 0;

}

