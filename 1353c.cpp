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
        long long int n;
        cin>>n;
        n=n/2;
        cout<<(n*(n+1)*(2*n+1)*8)/6<<endl;
    }

return 0;

}

