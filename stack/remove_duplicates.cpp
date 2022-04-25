#include<bits/stdc++.h>

using namespace std;

vector<int> stack_fun(int arr[])
{
    vector<int> v;
    int n = 10;
    stack<int> st;
    st.push(arr[0]);
    
    for(int i=1;i<=n;i++)
    {
        if(arr[i]!=st.top())
        {
            v.push_back(st.top());
            st.push(arr[i]);
        }
    }
    
    return v;
}

// To remove the duplicates using stack data structure
int main()
{
    int arr[] = {5, 8, 9, 4, 8, 9, 4, 6, 2, 3};
    int n = 10;
    sort(arr, arr+n);
    vector<int> v;
    v = stack_fun(arr);
    
    for(auto it: v)
    {
        cout<<it<<" ";
    }
    return 0;
}
