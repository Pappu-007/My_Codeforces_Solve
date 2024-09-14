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
        vector<vector<char>> ar(8,vector<char>(8,'.'));
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin>>ar[i][j];

            }
        }
        int cn=0;
        bool val=false;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(ar[i][j]=='R'){
                    cn++;
                }
            }
            if(cn==8){
                val=true;
            }
            cn=0;

        }
        if(val){
            cout<<"R"<<endl;
        }
        else{
            cout<<"B"<<endl;
        }

    }

return 0;

}

