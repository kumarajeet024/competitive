#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000009
int gcd(int a,int b){
	if(b==0) return a;
	return gcd(b,b%a);
}
int x,y,GCD;
void extended_euclids(int a,int b){
	// base case
	if(b==0){
		x=1;
		y=0;
		GCD=a;
		return;
	}
	extended_euclids(b,a%b);

	int current_x=y;
int current_y=x-(a/b)*y;
x=current_x;
y=current_y;
}

using namespace std;
int main(){

 		ios_base::sync_with_stdio(false);
 		cin.tie(NULL);
 		#ifndef ONLINE_JUDGE
 		freopen("input.txt", "r", stdin);
 		freopen("output.txt", "w", stdout);
 		freopen("error.txt", "w", stderr);
 		#endif

 		extended_euclids(18,30);
 		cout<<x<<" "<<y;
 		
	return 0;
}
