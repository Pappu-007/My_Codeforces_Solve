#include<iostream>
#include <bits/stdc++.h>
#include<string>
#include <bitset>


using namespace std;

int countDifferingBits(int x, int y) {
    int xorResult = x ^ y;
    int count = 0;
    while (xorResult > 0) {
        count += xorResult & 1; // Increment count if the last bit is 1
        xorResult >>= 1;        // Shift right by 1 to check the next bit
    }

    return count;
}

void printBinary(int n, int bitLength) {
    std::bitset<32> binary(n);
    std::string binaryStr = binary.to_string();
    // Print only the relevant bits
    std::cout << binaryStr.substr(32 - bitLength) << std::endl;
}


int main() {

    int n,m,k,x,y,cnt=0;
    cin>>n>>m>>k;
    int ar[m+1];
    for(int i=0;i<m+1;i++){
        cin>>ar[i];
    }
    for(int i=0;i<m;i++){
        x=ar[m];
        y=ar[i];



        int differingBits = countDifferingBits(x, y);
        if(differingBits<=k){
            cnt++;
        }

    }
    cout<<cnt<<endl;
}
