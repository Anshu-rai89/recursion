#include<iostream>
#include<cstring>
using namespace std;
int count(char *in,char *out,int i,int j)
{
	if(in[i]=='\0')
	{ out[j]='\0';
		return 1;
	}
	out[j]=in[i];
	int val1=count(in,out,i+1,j+1);
	int val2=count (in,out,i+1,j);
	return val1+val2;
}
void substring(char *in,char *out,int i,int j)
{
	if(in[i]=='\0')
	{
		out[j]='\0';
		
			cout<<out<<",";
		
		
		
		return;
	//	cout<<out<<",";
	}
	out[j]=in[i];
	substring(in,out,i+1,j+1);
	substring(in,out,i+1,j);
}
int main()
{
	char in[100],out[100];
	cin>>in;
	int ans=count(in,out,0,0);
	cout<<ans<<endl;
	substring(in,out,0,0);
	
}
