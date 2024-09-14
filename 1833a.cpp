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
        int a,n;
        cin>>n;
        string s;
        cin>>s;


        for (int i = 0; i < n - 1; ++i) {
            string pair = s.substr(i, 2);

            for (int j = i + 2; j < n - 1; ++j) {
                if (s.substr(j, 2) == pair) {
                    a=j;
                    break;
                }
            }
        }
        cout<<a<<endl;
    }

return 0;

}

