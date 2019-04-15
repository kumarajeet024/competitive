//pretty num: codechef

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		string num;
		int l,r;
		cin>>l>>r;
		
		int count=0;
		for(int i=l;i<=r;i++){
			num=to_string(i);
			int n = num.length();
		if(num[n-1]=='2' or num[n-1]=='3' or num[n-1]=='9') count++;
		}
		cout<<count<<endl;
	}
	return 0;
}
