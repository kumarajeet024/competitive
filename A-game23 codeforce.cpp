#include <iostream>

using namespace std;

int main() {
	long long n,m,count=0;
	cin>>n>>m;

	if(n==m) cout<<"0"<<endl;
	else{
	 if(m%n!=0) cout<<"-1"<<endl;
	else{
	    int a = m/n;
	    if(a%2!=0 and a%3!=0) cout<<"-1"<<endl;
	    else{
	        while(a!=1){
	        if(a%2==0){
	            a=a/2;
	            count++;
	        }
	        if(a%3==0){
	           a=a/3;
	           count++;
	        }
	    }
	    cout<<count<<endl;
	    }
	}
	
}
return 0;
}
