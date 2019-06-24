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
 			int n;
 			cin>>n;
 			string ques,ans;
 			cin>>ques>>ans;
 			int count=0;
 			int check=0;
 			for(int i=0;i<n;i++){
 				if(check){
 					check=0;
 					continue;

 				}
 				if(i==n-1){
 					if(ques[i]==ans[i])
 						count++;
 					break;
 				}
 				if(ques[i]==ans[i]) count++;
 				else if(ans[i]!='N' and ans[i]!=ques[i]) check=1;
 			}
 			cout<<count<<endl;
 		}
	return 0;
}
