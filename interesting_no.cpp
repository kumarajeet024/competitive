//hackerearth:: number theory
//you have just to find the sum of divisior of the no.
//check for corner test case of 1

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        int sum=1;
        if(x==1) sum=0; 
        for(int i=2;i*i<=x;i++){
            if(x%i==0){
                if(i*i==x) sum+=i;
                else sum+=i+x/i;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
