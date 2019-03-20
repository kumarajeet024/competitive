#include <iostream>

using namespace std;

int main() {
	int f,s1,s2,t,q,arr[q],brr[q];
	cin>>t;
	while(t--){
	cin>>f>>s1>>s2;
	cin>>q;
	for(int i=0;i<q;i++){
	    cin>>arr[i]>>brr[i];
	}
	for(int i=0;i<q;i++){
	    if(f==1 and (s1^s2)==0){
	    if(arr[i]==brr[i]) cout<<"ON"<<endl;
	    else cout<<"OFF"<<endl;
	    }
	    else if(f==1 and (s1^s2)==1){
	        if(arr[i]!=brr[i]) cout<<"ON"<<endl;
	        else cout<<"OFF"<<endl;
	    }
	    else if(f==0 and (s1^s2)==0){
	    if(arr[i]==brr[i]) cout<<"OFF"<<endl;
	    else cout<<"ON"<<endl;
	    }
	    else if(f==0 and (s1^s2)==1){
	        if(arr[i]!=brr[i]) cout<<"OFF"<<endl;
	        else cout<<"ON"<<endl;
	    }
	}
	}
}
