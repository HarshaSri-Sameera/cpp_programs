#include<bits/stdc++.h>
using namespace std;

void print_factors(int n)
{
    int j = sqrt(n);
    cout<<"Factors of "<<n<<" are: ";
    for(int i=1; i<=j; i++)
        if(n % i == 0)
        {
            cout<<i<<" ";
            if(n/i != i)
                cout<<n/i<<" ";
        }
}

int main()
{
    int num;
    cin>>num;
    print_factors(num);
}