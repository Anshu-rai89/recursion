#include<iostream>
using namespace std;
void tiling(int n,int m,int count)
{
	if(n==1)
	{
		cout<<count;
		return;
	}
	if((n>=m) && (n%m==0))
	{
      // cout<<"you are in loop";
		tiling((n-m),m,count+2);
	}
else
		tiling(n-1,m,count+1);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{ int n,m;
		cin>>n>>m;
		tiling(n,m,0);
	}
}

