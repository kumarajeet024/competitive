	
	#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000009

using namespace std;
//int ar[10000005];
int main(){

 		ios_base::sync_with_stdio(false);
 		cin.tie(NULL);
 		#ifndef ONLINE_JUDGE
 		freopen("input.txt", "r", stdin);
 		freopen("output.txt", "w", stdout);
 		freopen("error.txt", "w", stderr);
 		#endif

 		   ll n;
 		   cin>>n;
 		   int positive=0,negative=0,zero=0;
	   ll arr[n];
//  		   memset(arr,0,sizeof(arr));
	   vector<pair<ll,ll>> pos,neg;
		   for(int i=0;i<n;i++){
  		   	cin>>arr[i];
  		   	pos.push_back(make_pair(arr[i],i));
  		   	  		   }
  		   	 for(int i=0;i<n;i++){
  		   	 	    	if(arr[i]<0)
    						negative++;
    					else
    					positive++;
  		   	 }
  		   	     if(positive!=0){
   				ll temp = 0;
    			for(auto it: pos){
    				if(it.first < 0){
    					if(positive!=0){
    						arr[it.second] = abs(it.first) - 1;
    						positive--;
    						temp++;
    						}
    						}
    					}
    		reverse(pos.begin(),pos.end());
    		bool flag = false;
 
    			if(positive%2)
    				flag = true;
 
  				  for(auto it: pos){
        		if(temp==0)
        		break;
 
        arr[it.second] = -(arr[it.second] +1);
        temp--;
    }
  }
  sort(arr,arr+n);
  for(int i=0;i<n;i++)
  	cout<<arr[i]<<" ";
  		   	  
        
//  		   ll MIN=INT_MIN,pos=-1;
//  		   ll ans =1;
		  //  for(int i=1;i<=n;i++){
  		//    	if(arr[i]>0){ 
  		//    	 arr[i] = (-1)*(arr[i] + 1);
	   // 	}
	   // }
	   // 	if(n&1) {
    //     for(int i=1;i<=n;++i) 
    //     pos.push_back(make_pair(arr[i],i));
    //     sort(pos.begin(),pos.end());
    //     pos[0].first=-pos[0].first-1;
    //     for(int i=0;i<n;++i) 
    //    	arr[pos[i].second]=pos[i].first;
    //     	sort(arr+1,arr+n+1);
    //     for(int i=1;i<=n;++i) 
    //     	cout<<arr[i]<<" ";
    // }
    // else {
    // 	sort(arr+1,arr+n+1);
    //     for(int i=1;i<=n;++i)
    //     	cout<<arr[i]<<" ";
    // }
       	
 		   
	return 0;
}
