//codeforces::Educational Codeforces Round 63
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
string s;
cin>>s;
int b=n-10;
int count=0;
for(int i=0;i<b;i++){
    if(s[i]=='8') count++;
}int c=b/2;
if(count>c) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
return 0;
}
