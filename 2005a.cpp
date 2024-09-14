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
        string ss,s="aeiou";
        for(int i=0;i<5;++i){
                for(int j=0;j<n/5+(i<n%5);++j){
                      ss+=s[i];
                }

        }
        cout<<ss<<endl;
    }

return 0;

}

