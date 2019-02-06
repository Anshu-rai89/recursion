#include<iostream>
#include<cstring>
using namespace std;
char fetchchar(char *a,int n){
int i=0,count=0;char temp;
	while(n>0)
	{
		if(n&1)
		{
			temp=a[i];
		}
		i++;
		n=n>>1;
		}
	//	cout<<count;
		/*if(temp!=a[i])
		{
			count++;
		}
		temp=a[i];
		cout<<count;*/
	//	return 
//	cout<<endl;
  return temp;
}
void generatesubset(char*a)
{ int i;char ans;
	int l=strlen(a);
	int range=(1<<l)-1;
	for(i=0;i<=range;i++)
	{
	 ans=fetchchar(a,i);
	 cout<<ans<<endl;
	}
}
int main()
{
	char a[1000];
	//int i;
	cin>>a;
	generatesubset(a);
}
