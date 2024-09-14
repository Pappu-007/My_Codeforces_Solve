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
           string s1,s2;
           cin>>s1>>s2;
           int j=0;
           for(int i=0;i<s1.size();i++){


                if(s1[i]==s2[j]||s1[i]=='?'){
                    if(s1[i]=='?'){
                        s1[i]=s2[j];
                        j+=1;
                    }
                    else{
                        if(j<s2.size()){
                           j+=1;
                        }
                    }

                }


           }
           if(j==s2.size()){
            cout<<"YES"<<endl;
            cout<<s1<<endl;
           }
           else{
            cout<<"NO"<<endl;
           }
    }

return 0;

}

