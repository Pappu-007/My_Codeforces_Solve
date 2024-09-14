#include <bits/stdc++.h>
#include<string>
#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


int main() {

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int xx=0;
        if(s.size()==1){
            cout<<"NO"<<endl;
        }
        else{
            for(int i=0;i<s.size()-1;i++){
                if(s[i]!=s[i+1]){
                    xx=1;
                    char a=s[i];
                    s[i]=s[i+1];
                    s[i+1]=a;
                }
            }
            if(xx==0){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
                cout<<s<<endl;
            }
        }
    }

return 0;

}

