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

 		ll t;
 		cin>>t;
 		//ll result=t;
 		while(t--){
 			ll n,m;
 			cin>>n>>m;
 			//ll arr[m];
 			unordered_map<int,int>arr;
 			for(ll i=0;i<m;i++) {
 				ll num;
 				cin>>num;
 				//arr.push_back(num);
 				arr[i+1]=num;

 			}
 			//ll temp=0;
 			//ll brr[n]={0};
 			unordered_map<int,int>brr;
 			pair<int,pair<ll,ll>> p[n];
 			ll D,F,B;
 			for(ll i=0;i<n;i++) {
 				
 				cin>>D>>F>>B;
 				// 
 				brr[D]++;
 				p[i].first=D;
 				p[i].second.first=F;
 				p[i].second.second=B;
 			}
 				int carry[m+1];
 				int id;
 				for(int i=1;i<=m;i++) carry[i]=arr[i]-brr[i];
 				for(int i=1;i<=m;i++){
 					if(carry[i]>0){
 						id=i;
 						break;
 					}
 				}
 				queue<int> que;
 				ll temp=0;
 				for(int i=0;i<n;i++){
 					D=p[i].first;
 					F=p[i].second.first;
 					B=p[i].second.second;
 					if(arr[D]){
 						arr[D]--;
 						temp+=F;
 						que.push(D);

 					}
 					else{
 						if(carry[id]>0){
 							que.push(id);
 							temp+=B;
 							carry[id]--;
 						}
 						else{
 							while(id<=m){
 								id++;
 								if(carry[id]>0)
 									break;
 							}
 							que.push(id);
 							temp+=B;
 							carry[id]--;
 						}
 					}
 				}

 // 				else {//temp=temp+B;
	// // 				cout<<temp<<endl;
 // 					//int p=max_element(arr.begin(),arr.end())-arr.begin();
 // 					temp+=B;
 // 					brr.push_back(p);
 // 					arr[p]--;
 // 				}
 // 			}
 			cout<<temp<<endl;
 			// ll a=result-t;
 			// for(ll i=0;i<n;i++){
 			// 	if(brr[i]!=0) cout<<brr[i]<<" ";
 			// 	else{
 			// 		while(arr[a]<=0) a++;
 			// 		arr[a]--;
 			// 		cout<<a+1<<" "; 
 			// 	}
 			// }
 			// cout<<endl;
 			while(!que.empty()){
 				cout<<que.front()<<" ";
 				que.pop();
 			}
 			cout<<endl;
	return 0;
}
}
