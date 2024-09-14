#include <bits/stdc++.h>
#include<string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>


using namespace std;


int main() {
     int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
                cin>>arr[i];

        }
        sort(arr,arr+n);
        int mx=1,cn=1;
        for(int i=0;i<n-1;i++){

                if(arr[i]==arr[i+1]){
                    cn++;
                }
                else{


                    cn=1;
                }
                mx=max(mx,cn);
                }


        cout<<n-mx<<endl;


    }


    return 0;
}



