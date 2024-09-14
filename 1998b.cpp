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
        int n;
        cin>>n;
        vector<int> ar(n);
        for(int i=0;i<n;i++){
            cin>>ar[i];

        }
        vector<int> arr(n);
        for(int i=0;i<n;++i){
                arr[i]=ar[(i+1)%n];

        }
        for(int i=0;i<n;++i){
            cout<<arr[i]<<" ";

        }
        cout<<endl;
    }

return 0;

}

