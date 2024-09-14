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

          int n;
          cin>>n;
          int arr[n];
          for(int i=0;i<n;i++){
                cin>>arr[i];

          }
          if(n%2==0){
            cout<<arr[n-1]<<endl;
          }
          else{
            cout<<arr[n-2]<<endl;
          }

    }

return 0;

}

