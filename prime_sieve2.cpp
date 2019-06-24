#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000009

using namespace std;
void prime_sieve(int *arr, int n){
	//int arr[i];
	arr[0]=arr[1]=0;
	arr[2]=1;
	//marking all odd nos. as 1 
	for(int i=3;i<=n;i+=2) arr[i]=1;
		//only iterating over odd nos.
	for(int i=3;i<=n;i+=2){
		// if(i%2==0) arr[i]=0;
		// else{
			if(arr[i]){
				//intialising j=i*i and taking a jump of 2i as one of the factors lies lower tha sqrt(i) and  
				//also i*i is odd no. and if we take a jump of i; j will become even and we are not supposed to check even
				//so we jump 2i;
				for(int j=i*i;j<=n;j+=2*i)
					arr[j]=0;
			}
		
	}
	
	return;
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
 		int arr[n]={0};
 		prime_sieve(arr,n);
 		for(int i=0;i<=n;i++)
 			if(arr[i]) cout<<i<<" ";
 		
	return 0;
}
