//codechef april cook off
#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	string s;
	int c=0,o=0,d=0,e=0,h=0,f=0;
	vector<string> str;
	for(int i=0;i<n;i++){
	    cin>>s;
	    str.push_back(s);
	}
	for(int i=0;i<n;i++){
	    for(int j=0;j<str[i].length();j++){
	        if(str[i][j]=='c') c++;
	        if(str[i][j]=='o') o++;
	        if(str[i][j]=='d') d++;
	        if(str[i][j]=='e') e++;
	        if(str[i][j]=='h') h++;
	        if(str[i][j]=='f') f++;
	    }
	}
	int min_o = min(o,min(d,min(h,f)));
	int min_c=min(c,e);int ans;
    if(min_o*2<=min_c){
        cout<<min_o<<endl;
    }
    else if(min_o==0 or min_c==0) cout<<0<<endl;
    else if(min_o==1 and min_c==1) cout<<0<<endl;
    else cout<<min_c/2<<endl;
	
	}
	return 0;
}
