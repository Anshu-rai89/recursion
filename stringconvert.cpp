#include<iostream>
#include<cstring>
using namespace std;
void strings(char *a,int l)
{ char c='\0';
//cout<<c<<" ";
	if(a[l]=='\0')
	{
		return;
	}
	while((a[l]=='p') && (a[l+1]=='i'))
	{
		cout<<'3'<<'.'<<'1'<<'4';
		l=l+2;
	
//	cout<<a[l];
//	string(a,l+1);
} 
   //else
cout<<a[l];

	strings(a,l+1);
  
}
int main()
{
	int l;
	char a[100];
	cin>>a;
	l=strlen(a);
	strings(a,0);
}
