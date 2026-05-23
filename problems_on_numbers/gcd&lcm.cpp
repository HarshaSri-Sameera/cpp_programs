// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n1 = 4, n2 = 6;
    int gcd = 0, lcm = 0, mini = min(n1, n2), maxi = max(n1, n2);
    
    for(int i=1; i<=mini; i++) {
        if(n1 % i == 0 && n2 % i == 0) {
            gcd = i;
        }
    }

    cout << "gcd = " << gcd << endl;
    
    int i = 1; 
    do {
        int mul = maxi * i;
        if(mul % n1 == 0 && mul % n2 == 0) {
            lcm = mul;
            break;
        }
        i++;
    }while(1);
    
    cout << "lcm = " << lcm << endl;
    return 0;
    
    // alternatively to find lcm we can use the formula n1*n2/gcd(n1, n2)
}
