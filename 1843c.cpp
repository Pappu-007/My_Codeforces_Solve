#include <bits/stdc++.h>
#include<string>
#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        char a;
        int xmin=m;
        int xmax=0;
        int ymin=n;
        int ymax=0;



        for (int i = 1; i <=n; i++) {
            for (int j = 1; j <= m; j++) {
                cin >> a;
                if(a=='#'){
                    xmin=min(xmin,j);
                    xmax=max(xmax,j);
                    ymin=min(ymin,i);
                    ymax=max(ymax,i);
                }
            }
        }
        cout<<(ymin+ymax)/2<<" "<<(xmin+xmax)/2<<endl;

    }

    return 0;
}
