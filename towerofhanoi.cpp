#include<iostream>
using namespace std;
void towerofhanoi(int n,char src,char dst,char hlp)
{ if(n==0)
{
  return;
}
  towerofhanoi(n-1,src,hlp,dst);
  cout<<"Moving ring"<<" "<<n<<" "<<"from"<<" "<<src<<" "<<"to"<<" "<<dst<<endl;
  towerofhanoi(n-1,hlp,dst,src);
}
int main() {
  int n;
  cin>>n;
  towerofhanoi(n,'A','B','C');
	return 0;
}
