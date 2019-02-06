#include<iostream>
#include<cstring>
using namespace std;
char keypad[][10]={" "," ","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
void phone(char *inp,char *out,int i,int j)
{
	if(inp[i]=='\0')
	{out[j]='\0';
		cout<<out<<endl;
		return;
	}
int digit=inp[i]-'0';
 if((digit==0) ||(digit==1))
	{
		phone(inp,out,i+1,j);
	}
	
	else
	{
	
	for(int k=0;keypad[digit][k]!='\0';k++)
	{
		out[j]=keypad[digit][k];
		phone(inp,out,i+1,j+1);
	}
}
}

int main()
{
	char inp[100],out[100];
	int l;
	cin>>inp;
 phone(inp,out,0,0);
 //cout<<ans;
}
