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
        vector<int>pp(n);
        vector<int>ff(n,0);
        vector<bool> vsited(n,false);
        string ss;
        for(int i=0;i<n;++i){
            cin>>pp[i];
            pp[i]--;
        }
        cin>>ss;
        for(int i=0;i<n;++i){
            if(!vsited[i]){
                vector<int>cycle;
                int black=0;
                int x=i;
                while(!vsited[x]){
                    vsited[x]=true;
                    cycle.push_back(x);
                    if(ss[x]=='0'){
                        black++;
                    }
                    x=pp[x];
                }
                for(int idx:cycle){

                    ff[idx]=black;

                }
            }

        }
        for(int i=0;i<n;++i){

            cout<<ff[i]<<" ";
        }
        cout<<endl;

    }

return 0;

}

