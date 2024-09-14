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
            int a;
            cin>>a;
            string str = to_string(a);
            int l=str.size();
            int xx=0;
            if(str[2]=='0'){
                xx=0;
            }
            else if(str[2]=='1'){
                if(l>=4){
                    xx=1;
                }
            }
            else{
                xx=1;
            }
            if(str[0]=='1'&&str[1]=='0'&&l>2){
                if(xx==1){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }


            }
            else{
                    cout<<"NO"<<endl;
                }
    }

return 0;

}

