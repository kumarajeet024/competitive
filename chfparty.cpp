//chef party : codechef
#include <bits/stdc++.h>

using namespace std;

int main() {int t;

cin>>t;
while(t--){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	sort(arr,arr+n);
	int people=0;
	for(int i=0;i<n;i++){
	   // if(people!=arr[i]-1){
	   //     count++;
	   //     people=people+arr[i];
	   // }
	  
	   if(arr[i]<=people) people++;
	  
	}
	cout<<people<<endl;
	
}
	return 0;
}
