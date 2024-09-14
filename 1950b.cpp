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
        ll n;
        cin>>n;
        string s1,s2;
        for(int i=0;i<n;i++){
                if(i%2==0){
                    s1+="##";
                    s2+="..";
                }
                else{
                    s2+="##";
                    s1+="..";
                }

        }
        s1+="\n"+s1;
        s2+="\n"+s2;

        for(int i=0;i<n;i++){
                if(i%2==0){
                    cout<<s1<<endl;
                }
                else{
                    cout<<s2<<endl;
                }

        }
    }

return 0;

}

