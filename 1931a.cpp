#include <bits/stdc++.h>
#include<string>
#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

char getAlphabetFromIndex(int index) {
        return 'a' + (index - 1);  // For lowercase letters
}

int main() {

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a,b,c;
        if(n<29){
            a=1;
            b=1;
            c=n-2;
        }
        else{
            if(n<53){
                a=1;
                b=n-27;
                c=26;
            }
            else{
                a=n-52;
                b=26;
                c=26;
            }

        }
        char x=getAlphabetFromIndex(a);
        char y=getAlphabetFromIndex(b);
        char z=getAlphabetFromIndex(c);
        cout<<x<<y<<z<<endl;
    }

return 0;

}

