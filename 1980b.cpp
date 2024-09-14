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
        int n,f,k;
        cin>>n>>f>>k;
        int arr[n];
        for(int i=0;i<n;i++){
                cin>>arr[i];

        }
        int fav=arr[f-1];
        sort(arr, arr + n,greater<int>());

        if(n==k){
            cout<<"YES"<<endl;
        }
        else{
            if(arr[k]==fav){
                if(arr[k-1]==fav){
                    cout<<"MAYBE"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
            else{
                if(fav<arr[k]){
                    cout<<"NO"<<endl;
                }
                else{
                    cout<<"YES"<<endl;
                }
            }
        }
    }

return 0;

}

