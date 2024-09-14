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
            int a,b;
    cin>>a>>b;
    if(a==0&&b!=0){
        if(b%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else if(a!=0&&b==0){
        if(a%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else{
        if(a%2!=0){
            cout<<"NO"<<endl;
        }
        else if(a%2==0&&b%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }

    }

return 0;

}

