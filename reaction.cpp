//Reaction may cook off

#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000009

using namespace std;
int main(){

 		ios_base::sync_with_stdio(false);
 		cin.tie(NULL);
//  		#ifndef ONLINE_JUDGE
//  		freopen("input.txt", "r", stdin);
//  		freopen("output.txt", "w", stdout);
//  		freopen("error.txt", "w", stderr);
//  		#endif

 		int t;
 		cin>>t;
 	label:	while(t--){
 			int r,c;
 			cin>>r>>c;
 			int a[r][c];
 			for(int i=0;i<r;i++)
 				for(int j=0;j<c;j++){
 					cin>>a[i][j];
 				}
 				
 				

 				if(a[0][0]>=2 or a[0][c-1]>=2 or a[r-1][0]>=2 or a[r-1][c-1]>=2) 
 				{
 					cout<<"Unstable"<<endl;
 					goto label;
 				}
 				else {for(int i=1;i<=r-2;i++){
 					if(a[i][0]>=3){
 						cout<<"Unstable"<<endl;
 						goto label;
 					}
 				}
 				for(int i=1;i<=c-2;i++){
 					if(a[0][i]>=3){
 						cout<<"Unstable"<<endl;
 						goto label;
 					}
 				}
 				for(int i=1;i<=r-2;i++){
 					if(a[i][c-1]>=3){
 						cout<<"Unstable"<<endl;
 						goto label;
 					}
 				}
 				for(int i=1;i<=c-2;i++){
 					if(a[r-1][i]>=3){
 						cout<<"Unstable"<<endl;
 						goto label;
 					}
 				}
 				for(int i=1;i<r-1;i++){
 					for(int j=1;j<c-1;j++){
 						if (a[i][j]>=4) {cout<<"Unstable"<<endl;
 						goto label;}
 			// 			else {cout<<"Stable"<<endl;goto label;}
 					}
 				}
            cout<<"Stable"<<endl;
 		}
 	}
	return 0;
}
