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
    string str="abcdefghijklmnopqrstuvwxyz";
    while(t--){
        int n;
        cin>>n;
        map<char,int> mp;
        for(int i=0;i<str.size();i++){
            mp[str[i]]=0;
        }
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
            for(auto it:mp){
                if(it.second==vec[i]){
                    cout<<it.first;
                    mp[it.first]++;
                    break;
                }
            }
        }
        cout<<endl;
   }

return 0;

}

