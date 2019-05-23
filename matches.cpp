//matches may challenge 2019

#include <bits/stdc++.h>
#define ll long long int
#define el endl
#define mod 1000000007
using namespace std;
//int flag=0;
ll fun(ll n,ll m,int flag){
    flag++;
  
    
        ll temp=n%m;
        ll temp1=n/m;
        ll temp2=m/n;
        ll temp3=m%n;

    if(temp==0 or temp3==0 or temp1>=2 or temp2>=2) return flag;
         if(m>n)
         fun(n,m-n*temp2,flag);    
  
     else  
         fun(n-temp1*m,m,flag);
    


}

int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        ll t;
        cin>>t;
        while(t--){
            ll n,m;
            cin>>n>>m;
            int flag=0;
            //int <fun(n,m,flag)<<endl;
             int status=fun(n,m,flag);
             if(status%2==0) cout<<"Rich"<<endl;
             else cout<<"Ari"<<endl;
        }

return 0;
}
