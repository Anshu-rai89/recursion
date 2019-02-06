#include <iostream>
using namespace std;
int mul(int a,int b)
{ //int sum;
    if(b==0)
    {
        return 0;
    }
    if(b>0)
    { 
    // sum=a;
      return a+ mul(a,b-1);
     
    }
    else
    { 
        return -a+mul(a,b+1);
    }
    //mul(a,b-1)
}
int main() {
    int a,b;
    cin>>a>>b;
   int ans= mul(a,b);
   cout<<ans;
}
