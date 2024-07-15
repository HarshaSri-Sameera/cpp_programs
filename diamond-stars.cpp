// program to print stars in a diamond shape
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter rows: ";
    cin>>n;

    // upper half
    for(int i=1; i<=n/2 + 1; i++) {
        // spaces
        for(int j=1; j<=n/2 + 1 - i; j++) {
            cout<<" ";
        }
        // stars
        for(int j=1; j<=i; j++) {
            cout<<"*";
            cout<<" ";
        }
        cout<<"\n";
    }

    // lower half
    for(int i=n/2; i>=1; i--) {
        // spaces
        for(int j=1; j<=n/2 + 1 - i; j++) {
            cout<<" ";
        }
        // stars
        for(int j=1; j<=i; j++) {
            cout<<"*";
            cout<<" ";
        }
        cout<<"\n";
    }

    return 0;
}


// Output:
// Enter rows: 9
//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * * 
//  * * * * 
//   * * * 
//    * * 
//     * 
