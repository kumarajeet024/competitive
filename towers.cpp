#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000009

using namespace std;
int main(){

 		ios_base::sync_with_stdio(false);
 		cin.tie(NULL);
 		//#ifndef ONLINE_JUDGE
 		//freopen("input.txt", "r", stdin);
 		//freopen("output.txt", "w", stdout);
 		//freopen("error.txt", "w", stderr);
 		//#endif

 		int t;
 		cin>>t;
 		while(t--){
 			int n,m;
 			cin>>n>>m;
 			if(m==1) cout<<"2"<<endl;
 			else if(n%2==0) cout<<"2"<<endl;
 			else cout<<"1"<<endl;
 		}
	return 0;
}
