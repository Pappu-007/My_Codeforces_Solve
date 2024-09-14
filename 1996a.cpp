#include <bits/stdc++.h>
#include<string>
#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long int

using namespace std;

void solve(int s){
    if(s==2){
        cout<<1<<endl;
    }
    else{
        if(s%4==0){
            cout<<s/4<<endl;
        }
        else{
            cout<<(s/4)+1<<endl;
        }
    }
}

int main() {

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        solve(n);
    }

return 0;

}


