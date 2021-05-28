#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num, pos;
    cin>>num>>pos;
    int x = 1<<pos-1;
    cout<<(num|x);
    return 0;
}