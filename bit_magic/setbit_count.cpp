#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the number : ";
	cin>>num;
	int count=0;
	while(num)
	{
		if(num&1==1){
			count++;
		}
		num = num>>1; 
	}
	cout<<"The no. of setbits = "<<count;
	return count;
}