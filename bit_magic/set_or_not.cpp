#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num, pos;
    cin>>num>>pos;
    if(num&(1<<(pos-1)))
        cout<<"set-bit";
    else
        cout<<"unset-bit";
    return 0;
}
