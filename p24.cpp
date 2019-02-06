#include<iostream>
using namespace std;
void permutation(int *a,int n,int size)
{
	int i,j;
	if(n==1)
	{
		for(i=0;i<n;i++)
		{
			cout<<a[i];
		}
		cout<<endl;
		return;
	}
	for(j=0;j<n-1;j++)
	{
		permutation(a,size-1,n);
		if(n%2==0)
		{
			swap(a[0],a[size-1]);
		}
		else
		{
		
		swap(a[j],a[size-1]);
	}
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	permutation(a,n,n);
}
