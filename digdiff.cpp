//hackerrank: diagonal difference

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int curr[n][n],primary=0,secondary=0,ans=0;
    for(int i = 0; i < n; i++)
    {
        for(int j=0;j<n;j++){
            cin>>curr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        primary+= curr[i][i];
        secondary+=curr[n-i-1][i];
    }
ans = abs(primary-secondary);
cout<<ans;
return 0;
}
