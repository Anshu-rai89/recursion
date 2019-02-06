#include<iostream>
#include<cstring>
using namespace std;
void subset(char *a,char *res,int i,int j,int *ans)
{
	if(a[i]=='\0')
	{
		res[j]='\0';
	//	for (int k=0;k<j;k++)
	//	{
			cout<<res;
		}
		cout<<endl;
		return;
	
		res[j]=a[i];
		subset(a,res,i+1,j+1,ans);
		subset(a,res,i+1,j,ans);
		
		
	}
int main()
{
//	int n;
	char res[1000];
	int l;
	cin>>l;
	char a[1000];
	cin.getline(a,1000);
//	for(int i=0;i<n;i++)
	//{
	//	cin>>a;
//	}
	int ans=0;
	subset(a,res,0,0,&ans);
}
