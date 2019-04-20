//codeforces::restoring three nos.
#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int a,b,c,d,n;
	vector<long long int> v;

	for(int i=0;i<4;i++){
	    cin>>d;
	    v.push_back(d);
	}
	sort(v.begin(),v.end());
	
	c=v[3]-v[0];
	a=v[3]-v[1];
	b=v[3]-v[2];
	cout<<a<<" "<<b<<" "<<c;
	return 0;
}
