//hackerrank::apples and oranges
#include <iostream>

using namespace std;

int main() {
    int s,t,a,b,m,n,orng=0,app=0;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    int apples[m],oranges[n];
    for(int i=0;i<m;i++) cin>>apples[i];
    for(int i=0;i<n;i++) cin>>oranges[i];
    for(int i=0;i<m;i++) {
        if(a+apples[i]>=s and a+apples[i]<=t)
        app++;
    }
    for(int i=0;i<n;i++) {
        if(b+oranges[i]>=s and b+oranges[i]<=t)
        orng++;
    }
    cout<<app<<endl;
    cout<<orng<<endl;
    return 0;
}
