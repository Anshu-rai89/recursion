#include<iostream>
#include<algorithm>
using namespace std;
void upperbound(int a[],int n,int i,int x)
{ if(i>n)
{
	//cout<<"-1";
	return;
}else
if(a[i]==x)
{
       //break;
   cout<<i<<" ";
   //break; 
} 
//else
   upperbound(a,n,i+1,x); 
}

int main()
{
	int n,ans,x;
	cin>>n;
	int a[n];
	//int ans;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	cin>>x;
	//sort(a,a+n);
	upperbound(a,n-1,0,x);

}
