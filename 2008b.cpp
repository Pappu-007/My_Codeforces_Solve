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
        string s;
        cin>>s;
        int root = static_cast<int>(sqrt(n));
        if(root*root!=n){
            cout<<"NO"<<endl;
        }
        else{
            int z=root-2;
            int st=root+1;
            int en=n-(root+2);
            int cn=0;
            bool xx=true;
            for(int i=st;i<=en;i++){
                    if(s[i]=='0'){
                        cn++;
                    }
                    else{
                        if(cn!=z){
                            xx=false;
                            break;
                        }
                        cn=0;
                        if(s[i]!='1'&&s[i+1]!='1'){

                            xx=false;
                            break;
                        }
                        else{
                            i=i+1;
                        }
                    }


            }
            if(xx){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }

    }

return 0;

}

