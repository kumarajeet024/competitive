codeforces::Educational Codeforces Round 63
#include <iostream>

using namespace std;

int main() {
	int n;
	cin>>n;
	string str;
	cin>>str;
	for(int i=1;i<n;i++){
	    if(str[i]<str[i-1]){
	        cout<<"yes"<<endl;
	        cout<<i<<" "<<i+1<<endl;
	        return 0;
	        
	    }
	}
	cout<<"no"<<endl;
	return 0;
}
