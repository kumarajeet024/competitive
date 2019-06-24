#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000009

using namespace std;
int setbits(int a, int b){
	int count =0;
	for(int i=a;i<=b;i++){
		int temp=i;
		while(temp!=0){
			temp=temp&(temp-1);
			count++;
		}
	}
	return count;
}
int main(){

 		ios_base::sync_with_stdio(false);
 		cin.tie(NULL);
 		#ifndef ONLINE_JUDGE
 		freopen("input.txt", "r", stdin);
 		freopen("output.txt", "w", stdout);
 		freopen("error.txt", "w", stderr);
 		#endif

 		int q,a,b;
 		cin>>q;
 		while(q--){
 			cin>>a>>b;
 			cout<<setbits(a,b)<<endl;

 		}
		 		
	return 0;
}
