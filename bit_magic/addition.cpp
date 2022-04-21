#include <iostream>

using namespace std;

int main() {
    int x=15;
    int y=32;
    int count = 0;
    while(y!=0)
    {
        unsigned carry = x & y;
        x = x ^ y;
        y = carry << 1;
    }

    cout<<x;
}
