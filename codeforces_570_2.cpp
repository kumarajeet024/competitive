#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000009
using namespace std;
#define vec_i vector<int>
#define vec_l vector<long long int>

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
 			int n,k;
 			cin>>n>>k;
 			int arr[n];
 			for(int i=0;i<n;i++) cin>>arr[i];
 				sort(arr,arr+n);
 			int m;
 			//m=arr[1]+arr[n-2];
 			m=arr[0]+arr[n-1];
 			m=m/2;
 			int res=max(abs(arr[0]-m),abs(arr[n-1]-m));
 			if(res>k) cout<<"-1"<<endl;
 			// else if(res=k){
 				
 			// }
 			else cout<<arr[0]+k<<endl;

 		}
 		
	return 0;
}
