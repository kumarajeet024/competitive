#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000009

using namespace std;
void prime_sieve(int n){
	int arr[n];
	for(int i=2;i<=n;i++) arr[i]=1;
		for(int i=2;i<=n;i++){
			if(arr[i]){
				//int j=2;
				for(int j=2*i;j<=n;j+=i)
					arr[j]=0;
			}
		}
		arr[1]=0;
		arr[0]=0;
		for(int i=0;i<=n;i++){
			if(arr[i])
				cout<<i<<" ";
		}
}
int main(){

 		ios_base::sync_with_stdio(false);
 		cin.tie(NULL);
 		#ifndef ONLINE_JUDGE
 		freopen("input.txt", "r", stdin);
 		freopen("output.txt", "w", stdout);
 		freopen("error.txt", "w", stderr);
 		#endif

 		int n;
 		cin>>n;
 		prime_sieve(n);

 		
	return 0;
}
