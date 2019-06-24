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

 		int t;
 		cin>>t;
 		while(t--){
 			int n,m;
 			cin>>n>>m;
 			map<int,long> arr;
 			while(n--){
 				int d;
 				long v;
 				cin>>d>>v;
 				arr[d]=max(arr[d],v);
 			}
 			ll M=0;
 			ll nxtM=0;
 			for(auto it:arr){
 				if(it.second>M){
 					nxtM=M;
 					M=it.second;
 				}
 				else if(it.second>nxtM){
 					nxtM=it.second;
 				}
 			}
 			cout<<M+nxtM<<endl;
 			 		}
 		
	return 0;
}
