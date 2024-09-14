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
        int n;
        cin>>n;
        int ar[n+n];
        vector<int> arr;
        for(int i=0;i<n+n;i++){
            cin>>ar[i];
            auto it = find(arr.begin(), arr.end(), ar[i]);
            if (it == arr.end()) {
                arr.push_back(ar[i]);
            }


        }
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }



}
