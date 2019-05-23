//redone may challenge 2019

#include<bits/stdc++.h>
#define ll long long int
const unsigned int M = 1000000007;
#define num 1000009
ll store[num];
using namespace std;
ll fact(ll n) 
{
    ll temp;
    if (n >= M) 
        return 0; 
  ll res;
    if(n==1 or n==0) return 1;
    if(store[n]!=-1){
      return store[n];  
    }
          temp=fact(n-1)%M;
        res = (n%M * temp)%M;
        store[n]=res;
        return store[n];

    // return res; 
    //return store[n];
} 



int main() {
 for(int i=0;i<=num;i++){
     store[i]=-1;
 }
 int t;
 cin>>t;
 while(t--){
     ll n;
     cin>>n;
     ll ans=fact(n+1)-1;
     cout<<ans<<endl;
 }
 return 0;
}
