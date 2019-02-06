#include<iostream>
#include<cstring>
using namespace std;
void swap(char *a,char *b)
{ cout<<"swap called";
	char temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void move(char *s,int i,int l)
{
  if(s[i]=='\0')
  {
    cout<<s;
    return;
  }
  if(s[i]=='x')
  { cout<<"you are in loop";
    swap(s[i],s[l]);
    move(s,i+1,l-1);
  }
  else
  move(s,i+1,l);
  
}
int main() {
  char s[100];
  int l;
  cin>>s;
  l=strlen(s);
  move(s,0,l-1);
	return 0;
}
