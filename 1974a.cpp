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
        int x,y;
        cin>>x>>y;
        int ans;
        if(y%2==0){
            ans=y/2;
            int xx=ans*7;
            if(x<=xx){
                cout<<ans<<endl;
            }
            else{
                int yy=x-xx;
                if(yy%15==0){
                    cout<<ans+(yy/15)<<endl;
                }
                else{
                    cout<<ans+(yy/15)+1<<endl;
                }
            }
        }
        else{
            ans=(y/2)+1;
            int xx=(ans*7)+4;
            if(x<=xx){
                cout<<ans<<endl;
            }
            else{
                int yy=x-xx;
                if(yy%15==0){
                    cout<<ans+(yy/15)<<endl;
                }
                else{
                    cout<<ans+(yy/15)+1<<endl;
                }
            }
        }
    }

return 0;

}

