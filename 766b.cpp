#include <bits/stdc++.h>
#include<string>
#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int

using namespace std;


int main() {

    int n;
    bool vaalue=false;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=n-1;i>=0;i--){
        int mx=arr[i];
        for(int j=i-2;j>=0;j--){
            if(arr[i-1]+arr[j]>mx){
                vaalue=true;
                break;
            }
        }

        if(vaalue){
           break;
        }

    }
    if(vaalue){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

return 0;

}

