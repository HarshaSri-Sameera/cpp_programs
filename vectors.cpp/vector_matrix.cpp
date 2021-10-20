#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;//size of the matrix
    cin>>n;
    // reading a 2D vector
    vector<vector<int>> arr;//initialization

    // reading elements into the vectors
    for(int i=0;i<n;i++)
    {
        vector<int> v1;// to read a 1D array first
        for(int j=0;j<n;j++)
        {
            int val;
            cin>>val;
            v1.push_back(val);
        }
        arr.push_back(v1);//creating the 2D array
    }
    // printing the elements
    for(int i=0; i<arr.size();i++)
        for(int j=0;j<arr[i].size();j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    
    //Diagonal differnece
    int d1=0,d2=0;
    for(int i=0;i<n;i++)// As it is square matrix eg: 3x3, 4x4...etc one for is sufficient.
    {
        d1+=arr[i][i];
        d2+=arr[i][n-i-1];
    }
    cout<<"the diagonal differnece: "<<abs(d1-d2);

    return 0;    
}