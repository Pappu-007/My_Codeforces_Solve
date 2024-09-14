#include <bits/stdc++.h>
#include<string>
#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int

using namespace std;

const int MOD=1e9+7;

long long fsad(long long x, long long y){
    return (MOD+(x%MOD)+(y%MOD))%MOD;
}

long long fsml(long long x, long long y){
    return ((x%MOD)*(y%MOD))%MOD;
}

long long bp(long long x, long long y){
    if(y==0) return 1;
    long long powa =bp(x,y/2);
    powa= fsml(powa,powa);
    if(y%2==1) return fsml(powa,x);
    return powa;
}

long long mi(long long x){
    return bp(x, MOD-2);
}



int main() {

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        long long t_sum=0;
        for(int i=0;i<n;++i){

            cin>>arr[i];
            t_sum= fsad(t_sum,arr[i]);
        }
        long long sol=0;
        for(int i=0;i<n;++i){
            sol= fsad(sol,fsml(t_sum-arr[i],arr[i]));

        }
        long long result= fsml(sol,mi(fsml(n,n-1)));
        cout<<result<<endl;
    }

return 0;

}

