#include <bits/stdc++.h>
#include<string>
#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int

using namespace std;

void rin(int &nn,int &mm,int &qq,int &aa,int &bb,int &pos){
    cin>>nn>>mm>>qq>>aa>>bb>>pos;
}

int crs(int nn,int aa,int bb,int pos){
    if(pos<min(aa,bb)){
        return min(aa,bb)-1;
    }
    else if(pos>max(aa,bb)){
        return nn-max(aa,bb);
    }
    else{
        int mv=(aa+bb)/2;
        return min(abs(mv-aa),abs(mv-bb));
    }
}

int main() {

    int t;
    cin>>t;
    while(t--){
        int nn,mm,qq,aa,bb,pos;
        rin(nn,mm,qq,aa,bb,pos);
        cout<<crs(nn,aa,bb,pos)<<endl;
    }

return 0;

}

