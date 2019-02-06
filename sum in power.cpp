#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int a,int b)
{
	if(a>b)
	{
		return true;
	}
	return false;
}
int main()
{
	int n,i;
	cin>>n;
	int a[n];
	int freq[n]={0};
	for( i=0;i<n;i++)
	{
		cin>>a[i];
		freq[a[i]]++;
	}
	sort(a,a+n,compare);
	for( i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	int mx=a[0];
	cout<<mx;
	for( i=1;i<n;i++)
	{   //int mx=0;
		int cur=1;
		while(cur<=a[i])
		{
			cur=cur<<1;
		}
			
		cout<<cur<<" ";
		cout<<mx+a[i]<<endl;
		
		if((mx+a[i]==cur)&& (freq[a[i]]>0))
		{
			cout<<mx<<" "<<a[i]<<endl;
			freq[a[i]]--;
		}
	
	

mx=a[i];
}
}
