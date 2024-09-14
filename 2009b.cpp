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
        vector<vector<char>>ar(n,vector<char>(n,'.'));
        for(int i=0;i<n;i++){
            for(int j=0;j<4;j++){
                cin>>ar[i][j];
            }
        }
        int a;
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<4;j++){
                if(ar[i][j]=='#'){
                    a=j+1;
                }
            }
            cout<<a<<" ";
        }
        cout<<endl;
    }

return 0;

}

