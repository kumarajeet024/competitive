//processing a string : codechef
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		string s,str;
		cin>>s;
		int sum=0;
		for(int i=0;i<s.length();i++){
    //check for integer digits
			if(s[i]=='0' or s[i]=='1' or s[i]=='2' or s[i]=='3' or s[i]=='4' or s[i]=='5' or s[i]=='6' or s[i]=='7' or s[i]=='8' or s[i]=='9' )
			{str = s[i];
      //convert string to int 
			int num = stoi(str); 
			sum+=num;}
		}
		cout<<sum<<endl;
	}
	return 0;

}
