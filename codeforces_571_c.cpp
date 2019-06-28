#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000009
using namespace std;
#define vec_i vector<int>
#define vec_l vector<long long int>
int count(int n){
	int c=0;
	while(n){
		n=n&(n-1);
		c++;
	}
	return c;
}
int shift(string a,string b,int a1,int b1){
	ll size_b=b.length();
	ll size_a=a.length();
	int flag=0;
	while(size_b>=size_a){
		int temp=b1^a1;
		b1>>=1;
		size_b--;
		int ans=count(temp);
		if(ans%2==0) flag++;
	}
	return flag;
}
int main(){

 		ios_base::sync_with_stdio(false);
 		cin.tie(NULL);
 		#ifndef ONLINE_JUDGE
 		freopen("input.txt", "r", stdin);
 		freopen("output.txt", "w", stdout);
 		freopen("error.txt", "w", stderr);
 		#endif
		string a, b;
	cin >> a >> b;
	int count = 0;
	for (int i=1;i<b.length();i++)
	{
		if (b[i-1]!=b[i])
			count++;
	}
	int flag=0;
	for (int i=0;i<b.length();i++)
	{
		if (a[i] != b[i])
			flag++;
	}
	int ans=flag%2==0?1:0;
	for (int i = b.length(); i < a.length(); i++)
	{
		if (a[i - b.length()] != b[0])
			flag--;
		if (a[i] != b[b.length() - 1])
			flag++;
		flag +=count;
		if (flag%2==0)
			ans++;
	}
	cout<<ans<<endl;

 		
	return 0;
}
