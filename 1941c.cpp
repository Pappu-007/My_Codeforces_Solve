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
        string s,s1="map",s2="pie";
        cin>>s;
        int lst=n-3;
        int cnt=0;
        for(int i=0;i<=lst;i++){
            string ss= s.substr(i,3);
            if(ss==s1||ss==s2){
                cnt++;
                i=i+2;
            }
        }
        cout<<cnt<<endl;
    }

return 0;

}

