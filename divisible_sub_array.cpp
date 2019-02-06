#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n;
	int freq[100000];
cin>>n;
int a[n];
int sum=0;
memset(freq,0,sizeof freq);
freq[0]=1;
for(int i=0;i<n;i++)
{
	cin>>a[i];
	sum+=a[i];
	sum%=n;
	sum=(sum+n)%n;
	freq[sum]++;
} int ans=0,no;
for(int i=0;i<n;i++)
{
	//cout<<freq[i]<<" ";
	no=freq[i];
	ans+=((no)*(no-1))/2;
}
cout<<ans;
}
