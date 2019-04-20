codeforces::maximal_cont_rest
#include <iostream>
using namespace std;
#define ll long long int
int main() {

ll n;
cin>>n;
ll *arr=new ll[2*n];

for(ll i=0;i<n;i++)
{
	cin>>arr[i];
}
for(ll i=n;i<2*n;i++)
arr[i]=arr[i-n];
for(ll i=0;i<2*n;i++)
{
	//cout<<arr[i]<<" ";
}
ll count=0;
ll largest=0;
ll k=0;
for(ll i=0;i<2*n;i++)
{
	if(arr[i]==1)
	{
		count++;
		k++;
	}
	if(arr[i]==0)
	{
		if(k>0 && largest<count)
		{
		largest=count;
		}
		count=0;
		k=0;
		
	}
}

cout<<largest;
	return 0;
}
