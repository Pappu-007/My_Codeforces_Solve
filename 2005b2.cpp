#include <bits/stdc++.h>
#include<string>
#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int

using namespace std;
using vii=vector<int>;

void rin(int &nn,int &mm,int &qq,vii &vv){
    cin>>nn>>mm>>qq;
}

int crs(int nn,const vii &vv,int pos){
    if(pos<vv[0]){
        return vv[0]-1;
    }
    else if(pos>vv.back()){
        return nn-vv.back();
    }
    else{
            auto it=upper_bound(vv.begin(),vv.end(),pos);
            int le=*(it-1);
            int ri= *it;

        int mv=(le+ri)/2;
        return min(abs(mv-le),abs(mv-ri));
    }
}

int main() {

    int t;
    cin>>t;
    while(t--){
        int nn,mm,qq;
        vii vv;
        rin(nn,mm,qq,vv);
        cout<<crs(nn,aa,bb,pos)<<endl;
    }

return 0;

}


