#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000009

using namespace std;
int findunique(int a[],int n){
	int count[64]={0};
	for(int i=0;i<n;i++){
		int j=0;
		int num=a[i];
		while(num>0){
			count[j]+=(num&1);
			j++;
			num=num>>1;
		}
	}
	//take mod of count array with 3
	int p=1;//since pow(2,0)=1
	int ans=0;
	for(int i=0;i<64;i++){
		//cout<<count[i]<<endl;
		count[i]%=3;
		ans+=count[i]*p;
		p=p<<1;

	}
return ans;
}
int main(){

 		ios_base::sync_with_stdio(false);
 		cin.tie(NULL);
 		#ifndef ONLINE_JUDGE
 		freopen("input.txt", "r", stdin);
 		freopen("output.txt", "w", stdout);
 		freopen("error.txt", "w", stderr);
 		#endif

 		int a[]={7,7,3,4,2,3,3,4,6,4,6,7,6};
 		int n=sizeof(a)/sizeof(int);
 		cout<<findunique(a,n)<<endl;
	return 0;
}
