#include <bits/stdc++.h>
#include<string>
#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


int main() {

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
                cin>>arr[i];

        }
        sort(arr,arr+n);
        int vl=1,mx=1;
        for(int i=0;i<n-1;i++){
                if(arr[i+1]-arr[i]<=k){
                    vl++;
                    mx=max(mx,vl);
                }
                else{
                    vl=1;
                }

        }
        cout<<n-mx<<endl;
    }

return 0;

}

