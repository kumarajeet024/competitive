#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000009
using namespace std;
#define vec_i vector<int>
#define vec_l vector<long long int>
bool func(int n){
	int sum=0;
	while(n){
		sum+=n%10;
		n/=10;
	}
	return (sum%4==0);
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
 		while(n){
 			if(func(n)){
 				cout<<n<<endl;
 				break;
 			}
 			n=n+1;
 		}

 		
	return 0;
}
