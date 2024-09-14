
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int min_operations_to_remove_black_cells(const string& s, int k) {
    int n = s.length();
    int operations = 0;
    int i = 0;

    while (i < n) {
        if (s[i] == 'B') {
            // Find the length of the current segment of black cells
            int length = 0;
            while (i < n && s[i] == 'B') {
                length++;
                i++;
            }
            // Calculate the number of operations needed for this segment
            operations += (int)ceil((double)length / k);
        } else {
            i++;
        }
    }

    return operations;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int result = min_operations_to_remove_black_cells(s, k);
        cout<<result<<endl;
    }

    return 0;
}
