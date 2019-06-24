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

 		int n;
    cin>>n;
    int temp=(2*n-1);
    int flag=1;
    int temp2=temp*temp;
    int a=n-1;
    int non=4*(a*(a+1)/2);
    int ans=temp2-non;
    
    cout<<ans<<endl;
    
    
 		
	return 0;
}
