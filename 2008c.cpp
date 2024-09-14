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
        ll a,b;
        cin>>a>>b;
        vector<int>ar;
        ar.push_back(a);
        for(int i=1;;i++){

            ll xx=ar[i-1]+i;
            if(xx<=b){
                ar.push_back(xx);
            }
            else{
                break;
            }

        }
        cout<<ar.size()<<endl;

    }

return 0;

}

