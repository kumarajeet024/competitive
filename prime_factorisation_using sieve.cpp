//program to compute prime factors of a given n0. using sieve primes
//best approach to work;

#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000009

using namespace std;

//precomputing the list of primes in a given range using sieve primes
std::vector<int> prime_sieve(int *arr, int n){
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
	vector<int> primes;
	primes.push_back(2);
	for(int i=3;i<=n;i+=2){
		if(arr[i]==1){
			primes.push_back(i);
		}
	}
	
	return primes;
}
//this returns a vector of prime factors
vector<int> factorize(int m,vector<int>&primes){
	vector<int> factors;
	factors.clear();
	int i=0;
	int p=primes[0];

	while(p*p<=m){
		if(m%p==0){
			factors.push_back(p);
			while(m%p==0){
				m=m/p;
			}
		}
		i++;
		p=primes[i];
	}
	//one last check for prime
	if(m!=1)
		factors.push_back(m);
	return factors;
}
int main(){

 		ios_base::sync_with_stdio(false);
 		cin.tie(NULL);
 		#ifndef ONLINE_JUDGE
 		freopen("input.txt", "r", stdin);
 		freopen("output.txt", "w", stdout);
 		freopen("error.txt", "w", stderr);
 		#endif

 		int N=100000;
 		int arr[N]={0};
 		vector<int> primes=prime_sieve(arr,1000);
 		int num;
 		cin>>num;
 		vector<int> factors=factorize(num,primes);
 		for(auto no:factors)
 		cout<<no<<" "; 		
	return 0;
}
