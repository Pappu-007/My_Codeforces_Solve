#include <bits/stdc++.h>
#include<string>
#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


int main() {

    int n,k,val;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
            cin>>arr[i];

    }
    sort(arr,arr+n);
    if(k==0){
        if(arr[0]==1){
            val=-1;
        }
        else{
            val=1;
        }
    }
    else{
        if(arr[k-1]==arr[k]){
        val=-1;
    }
    else{
        val=arr[k-1];
    }
    }

    cout<<val<<endl;

return 0;

}

