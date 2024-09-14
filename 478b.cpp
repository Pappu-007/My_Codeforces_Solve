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
        string s;
        cin>>s;
        char c=s[1];
        int del=c-'0';
        char arr[8]={'a','b','c','d','e','f','g','h'};
        for(int i=1;i<=8;i++){
            if(i==del){
                continue;
            }
            cout<<s[0]<<i<<endl;

        }
        for(int i=0;i<8;i++){
                if(arr[i]==s[0]){
                    continue;
                }
                cout<<arr[i]<<del<<endl;
        }

    }

return 0;

}
