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
        int x,y,k;
        cin>>x>>y>>k;

        vector<pair<int ,int>> ar;
        if(k%2==1){
            ar.push_back({x,y});
        }
        int xx=k/2;
        for(int i=1;i<=xx;++i){
            ar.push_back({x-i,y-i});

        }
        for(int i=1;i<=xx;++i){
            ar.push_back({x+i,y+i});

        }
        for(const auto& itt:ar){
                cout<<itt.first<<" "<<itt.second<<endl;

        }

    }



return 0;

}

