#include <bits/stdc++.h>
#include<string>
#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long int

using namespace std;

void solve(int s){
    int arr[s];
    for(int i=0;i<s;i++){
        cin>>arr[i];
    }
    sort(arr,arr+s);
    int x=s;
    for(int i=0;i<s-1;i++){
        if(arr[i]==arr[i+1]){
            x-=1;
        }
    }
    cout<<x<<endl;
}

int main() {

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        solve(n);
    }

return 0;

}

