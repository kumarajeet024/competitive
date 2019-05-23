//GCDSET may cookoff

#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long int l,r,g,left,right,count;
        cin>>l>>r>>g;
        left=(l-1)/g;
        right=r/g;
        // if(left*g>=l and left*g<=r) count++;
        count=right-left;
        
        if(count==1){
            if(g<=r and g>=l) count =1;
            else count =0;
        }
        
        
        cout<<count<<endl;
    }
	return 0;
}
