#include <iostream>
#include<cstdlib>
#include<algorithm>
#define ll long long
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--)
    {
	ll n;
	cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    ll sum=0;
    for(ll i=0;i<n/2;i++)
    {
    	sum+=abs(a[n-i-1]-a[i]);
	}
	cout<<sum<<endl;
    
}
}

