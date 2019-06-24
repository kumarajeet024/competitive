#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000009

using namespace std;
int main(){

 		ios_base::sync_with_stdio(false);
 		cin.tie(NULL);
 		#ifndef ONLINE_JUDGE
 		freopen("input.txt", "r", stdin);
 		freopen("output.txt", "w", stdout);
 		freopen("error.txt", "w", stderr);
 		#endif
 		
 		    ll n,q,i,pos;
    cin >> n >> q;
 
    ll arr[n],brr[n],crr[n];
 
    cin >> arr[0];
    brr[0]=arr[0];
    for(i=1;i<n;i++)
    {
    	cin >> arr[i];
    	brr[i]=max(arr[i],brr[i-1]);
    	crr[i]=arr[i];
    }
	crr[0]=arr[0];
    sort(crr,crr+n);
 
    for(i=0;i<q;i++)
    {
    	cin >> pos;
    	if(pos<n)
    	{
    		ll x1=brr[pos-1];
    		ll x2=arr[pos];
    		cout<<x1<<" "<<x2<<endl;
    	}
    	else if(pos>=n)
    	{
    		if((pos%(n-1))-1>=0)
    		{
    			ll a1=crr[n-1];
    			ll a2=crr[(pos%(n-1))-1];
    			cout<<a1<<" "<<a2<<endl;
    		}
    		else
    		{
    			ll a1=crr[n-1];
    			ll a2=crr[(pos%(n-1))-1+(n-1)];
    			cout<<a1<<" "<<a2<<endl;
    		}
    	}
    }
 		
	return 0;
}
