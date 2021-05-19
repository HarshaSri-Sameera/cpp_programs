#include<stdio.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(j <= i)
            {
                if(j == 0 || i==j)
                    a[i][j] = 1;
                else
                    a[i][j] = a[i-1][j-1] + a[i-1][j];
                cout<<a[i][j]<<"\t";
            }
            else
                a[i][j] = 0;
        }
        cout<<endl;
    }
    
    return 0;
}